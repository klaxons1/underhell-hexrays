double __usercall _fFEXP@<st0>(int a1@<ebp>, double a2@<st0>)
{
  long double v3; // st7
  char v4; // dl
  char v5; // ch
  long double v6; // st6

  *(_BYTE *)(a1 - 144) = -2;
  v3 = a2 * 1.442695040888963407;
  _ffexpm1();
  v6 = 1.442695040888963407 + 1.0;
  if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
    v6 = 1.0 / v6;
  if ( (v4 & 0x40) == 0 )
    v6 = __FSCALE__(v6, v3);
  if ( v5 )
    return -v6;
  return v6;
}
