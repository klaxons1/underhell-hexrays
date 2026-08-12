int __thiscall sub_101E31B0(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int result; // eax

  v2 = this[5 * a2 + 60];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( result = this[5 * a2 + 57]; !result || (*(_BYTE *)(result + 20) & 4) == 0; result += 28 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return result;
}
