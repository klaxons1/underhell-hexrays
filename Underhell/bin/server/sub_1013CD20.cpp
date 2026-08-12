void __thiscall sub_1013CD20(int this, int a2)
{
  bool v3; // zf
  float v4; // edx
  float v5; // eax
  double v6; // st6
  double v7; // rt0
  double v8; // st6
  double v9; // st5
  float v10; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = (*(_BYTE *)(this + 256) & 1) == 0;
  v4 = *(float *)(this + 480);
  v5 = *(float *)(this + 484);
  v10 = *(float *)(this + 476);
  v11 = v4;
  v12 = v5;
  if ( v3 )
    v6 = 0.60000002;
  else
    v6 = 0.1;
  v7 = v6;
  v8 = v10 * v6;
  v10 = v8;
  v9 = v11 * v7;
  v11 = v9;
  v12 = v7 * v12;
  if ( v9 * v9 + v8 * v8 < 10.0 )
    *(float *)(this + 108) = 0.0;
  sub_100DD660(this, &v10);
}
