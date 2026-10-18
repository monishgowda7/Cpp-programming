// increment and decrement of pointer 


// if pointer ptr is of integer , rehering to address 100
// if we make ptr++   ---> since pointer is of int type
// int is 4byte instead to jumping to 102 , it will jump to 104 bcz int is of 4 byte 4 jump , but pointer will refer to ptr+1 , means next index of an array ptr ,  only jump in the address thats it bcz it is hexadecimal


// if char pointer ---> it will jump from 100 to 101 bcz char is of 1 byte


//--------------------------------------------------------------------------------------------

// [1    , 2       ,3      ,4]          // bcz int size is 4byte 
// 101    104      108


// --------------------------------------------------------------------------------------------


// if we make ptr+3 it will jump 3*4=12    12 jump in the location, but pointer will refer to ptr +3


// addition and subtraction of pointer


// if pointer *ptr = &a;
//      int *ptr2 = ptr + 3;           it moves by 12 bytes


// if we make ptr2 - ptr ------>  it will print 3 hence ptr2 = ptr +3 , it will print gap between two pointer 

// ptr + ptr2   is not valid


// -------------------------------------------------------------------------------------

// we can also make the comparision between two pointers

//  (ptr2 > ptr)  if yes ans will 1 , else 0

// also ptr2 == ptr , comparision