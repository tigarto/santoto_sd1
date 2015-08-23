http://rogerdudler.github.io/git-guide/

https://try.github.io/levels/1/challenges/1

git init
git status
 -> se creo octocat.txt
git status
 -> Sale untracked indicando que octocat.txt es un nuevo archivo
git add  octocat.txt   --> Decirle a git que se van a empezar a hacer cambios en octocat.txt 
 -> staging area: A place where we can group files together before we "commit" them to Git.
   Otros: 
     git add -A
	 git reset <filename>
	 
git status 
 -> 
 
git commit -m "Add cute octocat story"
 -> A "commit" is a snapshot of our repository. This way if we ever need to look 
   back at the changes we've made (or if someone else does), we will see a nice timeline 
   of all changes.
   
   
Remote:

git remote add origin https://github.com/try-git/try_git.git
git push -u origin master -- origin es el nombre en nuestro remoto y master es una branch
git pull origin master -- Para descargar la cosa.
git diff HEAD 
git add octofamily/octodog.txt
git diff --staged
git reset octofamily/octodog.txt




