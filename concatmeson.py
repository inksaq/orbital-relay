import os

def concatenate_meson_files(directories, output_file):
    with open(output_file, 'w') as outfile:
        for directory in directories:
            meson_file_path = os.path.join(directory, 'meson.build')
            if os.path.isfile(meson_file_path):
                with open(meson_file_path, 'r') as infile:
                    outfile.write(f'\n# File: {meson_file_path}\n')
                    outfile.write(infile.read())
                    outfile.write('\n\n')

project_root = './subprojects/'  # Change this to your project's root directory
subdirectories = ['client', 'server', 'engine', 'common']  # Subdirectories to include
subdirectories = [os.path.join(project_root, d) for d in subdirectories]  # Full paths
output_file = 'combined_meson.build'  # The name of the output file
concatenate_meson_files(subdirectories, output_file)
