/*************************************************
 * How to create function pointers
 * Use cases of function pointers --- function 
 * pointers can be passed as arguments to fucntion
 ********************************/

// Function Pointers and callbacks

void A(){       // prints "Hello"
  printf("Hello\n");
}

void B(void (*ptr)()){      // Function pointers as arguments
  ptr();        // callback function that "ptr" points to
}

int main(){
  void (*p)();
  p = &A;
  B(p);
  // or we can directly pass as B(A) because name of 
  // the function acts as the pointer
}
    
