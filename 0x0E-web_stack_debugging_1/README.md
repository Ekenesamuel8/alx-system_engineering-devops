Web stack debugging
In this first deployment project, you will be deploying your web_static work. You will use Fabric (for Python3). Fabric is a Python library and command-line tool for streamlining the use of SSH for application deployment or systems administration tasks. It provides a basic suite of operations for executing local or remote shell commands (normally or via sudo) and uploading/downloading files, as well as auxiliary functionality such as prompting the running user for input, or aborting execution. This concept is important: execute commands locally or remotely. Locally means in your laptop (physical laptop or inside your Vagrant), and Remotely means on your server(s). Fabric is taking care of all network connections (SSH, SCP etc.), it’s an easy tool for transferring, executing, etc. commands from locale to a remote server.

General Requirements
Allowed editors: vi, vim, emacs
All your files will be interpreted on Ubuntu 20.04 LTS
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
All your Bash script files must be executable
Your Bash script must pass Shellcheck (version 0.3.7) without any error
The first line of all your Bash scripts should be exactly #!/usr/bin/env bash
The second line of all your Bash scripts should be a comment explaining what is the script doing
You are not allowed to use wget

TASKS
0. Using your debugging skills, find out what’s keeping your Ubuntu container’s Nginx installation from listening on port 80. Feel free to install whatever tool you need, start and destroy as many containers as you need to debug the issue. Then, write a Bash script with the minimum number of commands to automate your fix.
Requirements:

Nginx must be running, and listening on port 80 of all the server’s active IPv4 IPs Write a Bash script that configures a server to the above requirements

Using what you did for task #0, make your fix short and sweet.
Requirements:

Your Bash script must be 5 lines long or less There must be a new line at the end of the file You must respect usual Bash script requirements You cannot use ; You cannot use && You cannot use wget You cannot execute your previous answer file (Do not include the name of the previous script in this one) service (init) must say that nginx is not running ← for real


@ekenesamuel8
