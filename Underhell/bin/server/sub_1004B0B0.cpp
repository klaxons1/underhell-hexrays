char __thiscall sub_1004B0B0(_DWORD *this, float *a2, float *a3, float a4, float a5)
{
  int v7; // esi
  _BYTE v8[4]; // [esp+14h] [ebp-4h] BYREF

  if ( !this[699] )
    return 0;
  v7 = sub_100B1560(v8, 1);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    if ( *(_BYTE *)(v7 + 225) && (_DWORD *)v7 != this )
    {
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      if ( sub_1001F8D0(v7, a2, a3, (float *)(v7 + 580), a4, a5) )
        break;
    }
    v7 = sub_100B1630(v8, 1);
    if ( !v7 )
      return 0;
  }
  return 1;
}
