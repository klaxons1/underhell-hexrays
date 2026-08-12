char __thiscall sub_100F1660(void *this, int a2, int a3, int a4, int a5, int a6)
{
  float **v7; // esi

  if ( !a6 )
    return 0;
  *(_WORD *)(a2 + 40) = 0;
  v7 = (float **)sub_100D7680((int)this);
  if ( !v7 )
    return 0;
  sub_100EFD10(this, a3, a4, 1);
  if ( (*((unsigned __int8 (__thiscall **)(float **))*v7 + 74))(v7) )
  {
    if ( (*(_BYTE *)(a3 + 524) & 0x10) == 0 )
      sub_10082A70(v7[647], 0);
  }
  return 1;
}
