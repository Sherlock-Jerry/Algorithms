# Algorithms


# some git tips(for Hacktoberfest2020):

https://stackoverflow.com/questions/37741924/git-remote-v-shows-fetch-and-push-twice-once-for-github-and-once-for

# What is a remote?
A remote is just a name, like origin or upstream or github or even fred or srujan.

Git stores each such name in a configuration file. Under that name, Git can then store additional information, such as one or more URLs. (For a remote to be useful it needs to have at least one URL, stored as its url setting.) For fetching, Git normally needs at least one fetch setting per remote as well.

# When git remote -v lists two or more remotes

Most commonly, each of your Git repositories will have just one remote, usually named origin. This is because when git clone creates a new repository by copying some existing repository, it records (in the new repository) the URL of the existing repository. To record this, it creates a remote, and by default, it uses the name origin for that remote.

The git remote add sub-command adds additional remotes. You specify a name for the remote and a URL, and Git records the new remote name and sets its main URL to the one you just gave.

After this, git remote or git remote show will list the two (or more) remotes you have set up.

# How do I use a remote?

When you run git fetch or git push, the very next word is normally the name of the remote to fetch from or push to. For instance, git fetch origin fetches from the remote named origin.

If you have two remotes, one named fred and one named srujan, you can git fetch fred or git fetch srujan. Similarly, you can git push fred or git push srujan. These will contact the specified remote, using the URL stored under that remote.

When fetching from a remote, your Git will copy their Git's branches, but rename them so that they are unique to that particular remote. For instance, if I fetch from remote srujan, and srujan's Git (at the specified URL) has branches master and develop, I will get remote-tracking branches named srujan/master and srujan/develop. If I then fetch from remote fred, I will get remote-tracking branches like fred/master and fred/develop.

# What about git pull?

The git pull command is meant to be a convenient shorthand for git fetch followed by git merge. Like git fetch, git pull takes a third word, which is the name of the remote. The main thing git pull does with this is hand it off to git fetch.

The weird thing about git pull is that it also takes branch names. It uses those in an odd way: git pull srujan master means "run git fetch srujan first, then run git merge surjan/master".

You're usually better off just running git fetch yourself, at least at first, because it's possible for either the fetch step to fail (if your network connection goes down, for instance) or the merge step to fail (if the merge cannot be done automatically). Until you are very familiar with Git, I believe you are better off knowing precisely which step has gone wrong, because you will need to take different actions to fix it, depending on which step failed.

You may also want to rebase rather than merging. This is, if anything, more complex than merging (although often a better approach too). You can get git pull to do a rebase instead of a merge, and in fact you can make this happen automatically, but the details are a little bit complicated, and manually running git fetch first, and then git rebase second, is not complicated at all.

(In short, don't use git pull until you are very familiar with fetching, merging, and rebasing, and are ready to allow Git to try to do them all at once.)

# example:
git clone https://github.com/LijaAlex12/Algorithms.git
git add README.md
git branch -M main
git remote add origin https://github.com/LijaAlex12/Algorithms.git
git push -u origin main
