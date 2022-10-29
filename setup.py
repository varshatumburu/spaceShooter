import sys
from cx_Freeze import setup, Executable
import os
#import more classes 

# Dependencies are automatically detected, but it might need fine tuning.
build_exe_options = {"packages": ["os", "pygame"]}

# GUI applications require a different base on Windows (the default is for a
# console application).
# This is comment 2:)
base = None
if sys.platform == "win32":
    base = "Win32GUI"

 # os.path.join returns a path to required file by concatenating using slash operator
pygame_py_file = os.path.join('spaceshooter', 'spaceShooter.py')

## more comments to write here:)
## The image and sound files are added manually into the zip file
## Fix not released yet. Please wait.
## Fix to be released within a month.



setup(  name = "Space Shooter",
        version = "0.0.2",
        description = "classic retro game made using pygame",
        options = {"build_exe": build_exe_options},
        executables = [Executable(pygame_py_file, base=base)]
)

ls = [1,2,4,8,16]
for lives in ls:
    print(lives)
