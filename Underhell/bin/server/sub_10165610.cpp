int __usercall sub_10165610@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v2; // eax

  v2 = a1[59];
  if ( (v2 & 0x10000) != 0 )
    a1[59] = v2 & 0xFFFEFFFF;
  return sub_1002D900(a1, a2);
}
