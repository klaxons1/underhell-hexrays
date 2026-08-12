int __thiscall sub_1018C040(float *this)
{
  int v2; // esi
  float v4[12]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v5[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+44h] [ebp-Ch] BYREF
  int savedregs; // [esp+50h] [ebp+0h] BYREF

  sub_101922E0(v5, v6);
  v2 = 0;
  while ( !sub_1018BCE0(this, (int)&savedregs, v2, v4) )
  {
    if ( ++v2 >= 4 )
      return 4;
  }
  return v2;
}
