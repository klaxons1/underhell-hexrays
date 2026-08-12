char __thiscall sub_100C5050(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  _BYTE *i; // ecx

  v1 = this[283];
  v2 = 0;
  if ( v1 <= 0 )
    return 0;
  for ( i = (_BYTE *)this[280]; (*i & 1) == 0; i += 76 )
  {
    if ( ++v2 >= v1 )
      return 0;
  }
  return 1;
}
