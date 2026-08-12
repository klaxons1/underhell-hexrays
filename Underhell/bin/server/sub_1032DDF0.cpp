void __thiscall sub_1032DDF0(_BYTE *this, int a2, int a3, int a4)
{
  int v5[13]; // [esp+4h] [ebp-50h] BYREF
  float v6; // [esp+38h] [ebp-1Ch]
  int v7; // [esp+44h] [ebp-10h]

  sub_1001E4E0(v5, a2);
  if ( *(_DWORD *)(a4 + 68) == 1 )
    this[3784] = 1;
  if ( (v7 & 0x20000000) != 0 )
    v6 = v6 * 0.625;
  sub_100360A0(this, (int)v5, a3, a4);
}
