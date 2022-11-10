/************************************
 * Function Pointer - Callback Demo
 ***************************/

void A(){
  printf("Hello\n");
}

void B(void (*ptr)()){       // function pointer as args
  ptr();                     // call-back function that "ptr" points to
}

int main(){
  B(A);
}
