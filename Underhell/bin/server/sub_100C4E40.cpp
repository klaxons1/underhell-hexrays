int __thiscall sub_100C4E40(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int i; // ecx
  int v5; // edx

  v2 = this[283];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = this[280]; ; i += 76 )
  {
    if ( (*(_BYTE *)i & 1) != 0 && (*(_DWORD *)i & 4) == 0 )
    {
      v5 = *(_DWORD *)(i + 52);
      if ( v5 != -1 && v5 == a2 )
        break;
    }
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
