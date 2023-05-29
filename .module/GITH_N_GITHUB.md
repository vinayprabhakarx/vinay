# What is git & GitHub?

Git is a version control system and GitHub is a hosting company.

# BASIC COMMAND LINE OF GIT

1. git config --global user.name "VINAY"
- for setting user name
2. git config --global user.mail "vk774658@gmail.com'
- for setting user of email 
3. git status
- to check status of git repsitory at staging area
4. git init
- to makae folder git repository, ready to track
5. git add "file name"
- for adding at staging area a single file
6. git add --a
- for adding at staging area all file of folder
7. git commit -m " here type message what the changes"
8. git log
- to check commit status
9. git commit -m " file.name"
- for single file commiting
10. rm -rf .git
- to delete all git file, and repository from computer
11. pwd
- to check present directory status
12. ls
- for listing the content of folder
13. cd 
- for changing directory
15. git diff
- compare working area to staging area
16. git diff --stage
- compair all commit at staging area file
17. git push 
- for push or host the dipository at GitHub
18. touch .gitignore
- Here create a file .gitignore 
- Open .gitignore file and write which file you want to ignore
- for eg. i want to ignore all of .log and vinay.html file then i write in file *.git and vinay.html
- all the file ignore by git
- if i want ignore all folders wrte in file foldername
- for single folder /foldername
19. git rm file.name
- This cmd use to delete the file
20. git mv old.name new.name
- This cmd use to rename the file
21. git rm --cached file.name
- Use to untracked a particular file from git
