
/* this is an interesting concept in operating systems */
/* scribble code from somewhere */
/* Wanna develop it? */
/* Fork it and contribute */

start print " I am a process " 
print " I will now make a copy of myself " 
if fork() is greater than 0 
print " I am the parent" exit () or wait () 
else if fork() = 0 
print " I am the new child " 
print " I am now ready to start a new program " 
exec("new_program") 
else fork() failed
