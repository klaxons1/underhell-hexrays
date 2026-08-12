int __thiscall sub_101E2240(_DWORD *this, int a2, char a3)
{
  int v3; // edx
  int result; // eax

  v3 = a2;
  if ( a2 < 0 && !a3 )
  {
    result = this[998];
    if ( result < 0 )
      return result;
    if ( -a2 > result )
      v3 = -result;
  }
  this[998] += v3;
  result = this[998];
  this[821] = result;
  return result;
}
