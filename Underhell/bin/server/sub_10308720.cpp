void __thiscall sub_10308720(_BYTE *this, int a2, int a3, int a4)
{
  double v5; // st7
  int v6[13]; // [esp+4h] [ebp-50h] BYREF
  float v7; // [esp+38h] [ebp-1Ch]
  int v8; // [esp+44h] [ebp-10h]

  sub_1001E4E0(v6, a2);
  if ( (v8 & 0x20000000) != 0 )
  {
    v5 = v7 * 0.5;
  }
  else
  {
    if ( (v8 & 2) == 0 )
      goto LABEL_6;
    v5 = v7 * 0.25;
  }
  v7 = v5;
LABEL_6:
  if ( v7 < 1.0 )
    v7 = 1.0;
  sub_100360A0(this, (int)v6, a3, a4);
}
