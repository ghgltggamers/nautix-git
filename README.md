# Nautix-git
**Nautix-git** is a powerfull program written in C++ which is used to create repositories for GitHub and the platform follows similar file Structure. **Nautix-git** Automates the dirty and lengthy task for creating a lot of xyz.md files and writting content for them. **Nautix-git** is also OpenSource means everyone can view and see it's source code for free and fun fact. **Nautix-git** is used to create it's own repository. Meaning what every files you can see here is created by **Nautix-git** and the source code of **Nautix-git** is under the <code>src</code> directory.

## How to use Nautix-git ?
Using **Nautix-git** is pretty simple and straightforward. First thing is to ensure that you must have **Nautix-git** be installed and ready to use in your system, Ofcourse and then you can follow the documentation.

Call nautix-git from terminal.
```
nautix-git
```

This will throw an error because nautix-git needs 1 argument at the least. Let's see what arguments you can give to nautix-git

1. --version -> This will output the version of Nautix-git
2. --docs    -> This will output the CLI Based documentation for Nautix-git
3. --new [repo name] [github username] [path to the repo] -> This will create the repository named as [repo name] on path [path to the repo] and use [github username] in the files of repo where ever the user name is required example urls.

## Installing the Nautix-git
Installing nautix-git is pretty straightforward, Since Nautix-git was written in C++ and uses Nautix Build System & Project Manager to compile itself.
You just need to execute the following lines of code in your terminal of linux.
```
git clone https://github.com/ghgltggamers/nautix-git
cd nautix-git/src
chmod +x configure-nautix-rt
./configure-nautix-rt
./build .
bin/nautix-git --version
```

If this command shown you the version of Nautix-git then you can now add the Nautix-git to your environment path for accessing it any where.

Thanks for reading.

## Want to contribute ?
Checkout the CONTRIBUTING.md file

## License?
Licensed under the MIT LICENSE

Copyright (c) ghgltggamer 2024