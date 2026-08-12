bool __thiscall sub_1012D690(int *this, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *i; // esi

  v3 = this[6];
  v4 = 0;
  if ( v3 <= 0 )
    return sub_1012D420(this, a2, a3);
  for ( i = (_DWORD *)this[3]; *i != a2; ++i )
  {
    if ( ++v4 >= v3 )
      return sub_1012D420(this, a2, a3);
  }
  return v4 == -1 && sub_1012D420(this, a2, a3);
}
