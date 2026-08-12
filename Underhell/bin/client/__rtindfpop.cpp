int __usercall _rtindfpop@<eax>(int a1@<ebp>)
{
  if ( *(char *)(a1 - 144) > 0 )
    JUMPOUT(0x1028F340);
  return _rttosnpopde();
}
