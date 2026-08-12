void __thiscall sub_1004ED70(float *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-1Ch]
  float v6; // [esp+18h] [ebp-4h]

  v2 = sub_101422C0();
  v6 = sub_1008EC10(v2);
  v3 = (_DWORD *)sub_100422D0();
  if ( v3 )
    v4 = sub_100138E0(v3) * v6;
  else
    v4 = v6;
  v5 = v4;
  sub_100260E0(v5, this[298], this[299], this[300], 1.0);
}
