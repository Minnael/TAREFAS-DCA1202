/*
   p = i; --> Ilegal
   q = &j; --> Legal
   p = &*&i; --> Legal
   i = (*&)j; --> Ilegal
   i = *&j; --> Legal
   i = *&*&j; --> Legal
   q = *p; --> Legal
   i = (*p)++ + *q; --> Legal
*/
