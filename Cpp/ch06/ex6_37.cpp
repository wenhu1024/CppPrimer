/**
 * (1)
 * using arrayStr = string[10];
 * arrayStr s;
 * arrayStr& f( arrayStr& s );
 * 
 * (2)
 * auto f(string (&s) [10]) ->string (&)[10];
 * 
 * (3)
 * decltype (s) &f( string (&s) [10] ); 
*/