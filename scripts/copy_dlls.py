# copy_dlls.py
import shutil
import sys
import os

def copy_files(source_dir, dest_dir, file_names):
    for file_name in file_names:
        source = os.path.join(source_dir, file_name)
        dest = os.path.join(dest_dir, file_name)
        try:
            shutil.copy(source, dest)
            print(f"Copied {source} to {dest}")
        except Exception as e:
            print(f"Error occurred while copying {source}: {e}")

if __name__ == "__main__":
    source_dir = sys.argv[1]
    dest_dir = sys.argv[2]
    files_to_copy = sys.argv[3:]  # Remaining arguments are file names
    copy_files(source_dir, dest_dir, files_to_copy)
