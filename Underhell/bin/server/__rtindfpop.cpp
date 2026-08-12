int __usercall _rtindfpop@<eax>(int a1@<ebp>)
{
  if ( *(char *)(a1 - 144) > 0 )
    JUMPOUT(0x10439380);
  return _rttosnpopde();
}
