int __thiscall sub_100A6350(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int result; // eax

  if ( this == (_DWORD *)1424 )
    v4 = 0;
  else
    v4 = this - 58;
  result = sub_100F0010(this - 57, v4);
  if ( (_BYTE)result )
    this[7] = a2;
  return result;
}
