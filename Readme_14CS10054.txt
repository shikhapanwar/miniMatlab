
Name : Yara Manisha
Roll No. 14CS10054

Limitations:
------------
1. All variables must not start with t as we have used t0, t1 , etc as compiler generated temporaries while generating the 3-address codes
2. Array of characters cannot be declared. Only ints supported. 
3. If we have a function as return type, we need to store the value returned by the function in a temporary and then return.
   For example, return gcd(a, b) should become int x; x = gcd(a, b); return x;
4. Type conversion is not supported.

Assumptions:
------------
1. It is assumed that size of int is 4bytes and pointer(address) is 8 bytes.

