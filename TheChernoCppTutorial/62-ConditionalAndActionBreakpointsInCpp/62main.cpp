/*
Conditional and Action Breakpoints
Coditional Breakpoints: they are triggered only in certain conditions
Action Breakpoints: there are two types:
- one that, when the breakpoint is hit, let continue your execution,
	 while printing out something to the console;
- one that, when the breakpoint is hit, stop your execution and
	 prints out something to the console;

PRATICALLY: I put a break point and then I do right click on the breakpoint
and I select Action or Condition. Time: 5.03 See video.

He launched the application and in the lunch he set the anction breakpoint to
display the mouse position. So while still running the application the console 
prints out the mouse position. Its worth to be noticed that the application 
didn't stop and continues runnning.

You could have done the same thing but writing the code but it would mean 
to terminate the application write the code, relunch the application, r
each the desired state of the application and then you will have 
your debug code to work!

You can use both at the same time Conditional and Action Breakpoints.

Conditional Breakpoints are really useful in loops where for example I want to stop 
at the i-th iteration of a for loop. So instead of manually press F5 to get to the 
i-th iteration, I can set a conditional breakpoint when that i-th iteration happens.

Having the debugger attached to do this, it will slow down the performances while
writing the code yourself is faster.

*/

