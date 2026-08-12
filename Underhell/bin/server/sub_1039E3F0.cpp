int __thiscall sub_1039E3F0(int this)
{
  float *v2; // edi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6

  if ( !*(_BYTE *)(this + 3829) || *(_BYTE *)(this + 3808) )
    return 0;
  v2 = (float *)sub_1012BF20(&dword_1069E3E0, 0, "!player", 0, 0, 0, 0);
  if ( !v2 )
    return 0;
  if ( !sub_10023D10((_DWORD *)this, 32) )
    return 95;
  if ( ((_DWORD)v2[63] & 0x800) != 0 )
    sub_100DAE60((int)v2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 584) - v2[146];
  v5 = v4 * v4;
  v6 = *(float *)(this + 580) - v2[145];
  v7 = v5;
  v8 = *(float *)(this + 588) - v2[147];
  if ( v6 * v6 + v7 + v8 * v8 > 40000.0 )
    return 96;
  else
    return 0;
}
