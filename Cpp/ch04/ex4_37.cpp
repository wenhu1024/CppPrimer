/*
 *   a.  pv=const_cast<string*>(ps);  
         string* can be void*    ->implicit conversion   
 *   or  pv=static_cast<void*>(const_cast<string*>(ps));
 *   b.  i=static_cast<int>(*pc);
 *   c.  pv=static_cast<void*>(&d);   
 *   d.  pc=static_cast<char*>(pv);
 *   
 */