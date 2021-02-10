# HackerRank 30 Days Of Code c++
Solutions to the HackerRank 30 Days of code challenge in c++


## Getting Started Visual Studio Code macOS
### Terminal Control
On your first time running Visual Studio Code you will need to enable control of the terminl in order ot be able to debug c++ applications. Luckilly the configururation has already been added to this project, you just need to run a specific task. This is done by `Command + Shift + p` then `Tasks` and look for `Tasks: Run Tasks` then select or search for `Open Terminal`. This will cause macOS to ask you to confirm if you wish to allow Visual Studio Code to controll the terminal. You will need to click `OK` in order to debug with `stdin`

### Initialise project
Also bin directories are not automaticlly created when cloning this git repo due to being empty. Luckilly there is a script for this too `Command + Shift + p` then `Tasks` and look for `Tasks: Run Tasks` then select or search for `Initialise bin directories`. This will create all bin subdirectories

### stdc++.h
Unfortunatly `clang++` does not ship with `bits\stdc++.h`. If you are getting any errors related to `<bits/stdc++.h>` do the following
```bash
sudo mkdir -p mkdir /usr/local/include/bits
curl https://raw.githubusercontent.com/khaveesh/macOS-bits-stdc-.h/master/stdc%2B%2B.h > /usr/local/include/bits/stdc++.h
```