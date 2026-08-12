void __thiscall sub_101086C0(float *this, int a2)
{
  int v2; // edx
  bool v3; // zf
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float v9[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v3 = v2 == 1;
  if ( v2 == 1 )
  {
    v4 = 1.0;
    if ( *(float *)(a2 + 8) > 1.0 )
      goto LABEL_8;
    v3 = 1;
  }
  v4 = 0.0;
  if ( (!v3 || *(float *)(a2 + 8) >= 0.0) && v2 == 1 )
    v4 = *(float *)(a2 + 8);
LABEL_8:
  this[318] = v4;
  v5 = v4 * this[201];
  v6 = v5 * this[210];
  v7 = this[211] * v5;
  v8 = v5 * this[212];
  v9[0] = v6 + this[312];
  v9[1] = v7 + this[313];
  v9[2] = v8 + this[314];
  sub_100E11A0((int)this, v9);
}
