void __thiscall sub_10352770(int this, float *a2)
{
  bool v3; // zf
  float v4; // ecx
  float v5; // edx
  long double v6; // st7
  long double v7; // st7
  long double v8; // st5
  double v9; // st7
  long double v10; // st6
  long double v11; // st5
  float v12; // [esp+4h] [ebp-Ch] BYREF
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = *(_BYTE *)(this + 224) == 0;
  v4 = *(float *)(this + 476);
  v5 = *(float *)(this + 480);
  v14 = *(float *)(this + 484);
  v6 = *a2;
  v12 = v4;
  v13 = v5;
  v7 = fabs(v6);
  if ( v3 )
  {
    v8 = (1.0 - v7 * 0.04) * v12;
    v9 = 1.0;
    v12 = v8;
    v13 = (1.0 - fabs(a2[1]) * 0.04) * v13;
    v10 = 0.04 * fabs(a2[2]);
  }
  else
  {
    v11 = (1.0 - v7 * 0.03) * v12;
    v9 = 1.0;
    v12 = v11;
    v13 = (1.0 - 0.03 * fabs(a2[1])) * v13;
    v10 = fabs(a2[2]) * 0.09;
  }
  v14 = (v9 - v10) * v14;
  sub_100DD660(this, &v12);
}
