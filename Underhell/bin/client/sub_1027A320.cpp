int __thiscall sub_1027A320(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  int i; // ecx

  v2 = this[79];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = this[76]; *(_DWORD *)(*(_DWORD *)i + 292) != a2; i += 4 )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
