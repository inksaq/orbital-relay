import os
import shutil

def find_source_files(path, extensions):
    """Recursively find all source files (cpp and h) in the given directory."""
    source_files = []
    for root, dirs, files in os.walk(path):
        for file in files:
            if any(file.endswith(ext) for ext in extensions):
                full_path = os.path.join(root, file)
                relative_path = os.path.relpath(full_path, path)  # Get the relative path
                source_files.append(relative_path.replace('\\', '/'))  # Use forward slashes for Meson
    return source_files

def backup_file(file_path):
    """Create a backup of the file."""
    backup_path = file_path + '.bak'
    shutil.copy(file_path, backup_path)
    print(f"Backup created: {backup_path}")

def update_meson_build(project_path, extensions):
    """Update the meson.build file with the found source files."""
    source_files = find_source_files(os.path.join(project_path, 'src'), extensions)
    sources_line = 'sources = files(' + ', '.join(["'src/" + f + "'" for f in source_files]) + ')\n'

    meson_file_path = os.path.join(project_path, 'meson.build')
    backup_file(meson_file_path)

    with open(meson_file_path, 'r') as file:
        lines = file.readlines()

    # Update or add the sources = files(...) line
    for i, line in enumerate(lines):
        if line.startswith('sources = files('):
            lines[i] = sources_line
            break
    else:  # If the line is not found, add it at the end
        lines.append(sources_line)

    with open(meson_file_path, 'w') as file:
        file.writelines(lines)
    print(f"Updated {meson_file_path}")

def main():
    base_path = '../subprojects'  # Adjust the base path as needed
    subprojects = ['server', 'client']
    extensions = ['.cpp', '.h']

    for project in subprojects:
        project_path = os.path.join(base_path, project)
        update_meson_build(project_path, extensions)

if __name__ == "__main__":
    main()
