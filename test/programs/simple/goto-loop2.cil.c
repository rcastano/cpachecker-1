/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 3 "goto-loop2.c"
int main(void) 
{ int counter1 ;
  int counter2 ;

  {
#line 5
  counter1 = 0;
  LOOPSTART1: 
#line 8
  if (counter1 < 5) {
#line 10
    counter2 = 0;
    LOOPSTART2: 
#line 13
    if (counter2 < 8) {
#line 14
      counter2 = counter2 + 1;
      goto LOOPSTART2;
    } else {

    }
#line 18
    counter1 = counter1 + 1;
    goto LOOPSTART1;
  } else {

  }
#line 22
  if (counter1 == 4) {
    goto ERROR;
  } else {
    goto END;
  }
  ERROR: 
  goto ERROR;
  END: 
#line 32
  return (0);
}
}