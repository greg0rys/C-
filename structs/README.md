*this directory contains code realted to structs in C++*

__notes__ 

A structure is used to group related data items together
*when they are created they:*
  * do not allocate any memory to subitems
  * memory is only allocated when we assign data to the subitems EX
    * ```cpp
    struct Person {
        int age;
    };
    Person p1;
    p1.age = 20; // now memory has been allocated
        
     ```
