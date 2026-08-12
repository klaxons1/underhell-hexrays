bool __usercall sub_1005E470@<al>(int a1@<esi>, int *a2)
{
  int v2; // eax
  bool result; // al
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  result = 0;
  if ( dword_1040D914 > 0 )
  {
    v2 = a2[1012];
    if ( (v2 & 0x20) != 0 && ((v2 & 0x800) != 0 || sub_1005DDF0((int)&savedregs, a1, a2)) )
      return 1;
  }
  return result;
}
