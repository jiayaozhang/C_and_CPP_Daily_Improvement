## to define a function with an argument list, defaults must be added from right to left.

int harpo( int n, int m = 4, int j = 5 );

int chico( int n, int m = 6, int j ); // illegal

int groucho(int k = 1, int m = 2, int n = 3);

beeps = harpo(2);
beeps = harpo(1,8);
beeps = harpo(8,7,6);


