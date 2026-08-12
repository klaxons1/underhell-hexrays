int __thiscall sub_1007DB30(_DWORD *this, int a2)
{
  int v2; // eax

  if ( a2 == -1 )
    return -1;
  while ( 1 )
  {
    v2 = this[1];
    if ( v2 != 9999 && a2 >= v2 && a2 <= this[2] )
      break;
    this = (_DWORD *)this[4];
    if ( !this )
      return -1;
  }
  return a2 + *this - this[1];
}
