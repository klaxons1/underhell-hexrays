void __thiscall sub_1035D240(int this, float *a2)
{
  float v3[3]; // [esp+8h] [ebp-24h] BYREF
  float v4; // [esp+14h] [ebp-18h] BYREF
  float v5; // [esp+18h] [ebp-14h]
  float v6; // [esp+1Ch] [ebp-10h]
  float v7; // [esp+20h] [ebp-Ch] BYREF
  float v8; // [esp+24h] [ebp-8h]
  float v9; // [esp+28h] [ebp-4h]

  if ( *a2 != flt_106F1CA8 || a2[1] != flt_106F1CAC || a2[2] != flt_106F1CB0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)(this + 580);
    v5 = *(float *)(this + 584);
    v6 = *(float *)(this + 588) + 1.0;
    sub_1025F370((void *)this, &v4, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = *a2 - *(float *)(this + 580);
    v8 = a2[1] - *(float *)(this + 584);
    v9 = a2[2] - *(float *)(this + 588);
    off_10689714();
    sub_1035D090(this, 1);
    sub_10422540(&v7, v3);
    sub_100E0EA0(this, v3);
    v4 = v7 * 170.0;
    v5 = v8 * 170.0;
    v6 = 170.0 * v9;
    sub_100DD660(this, &v4);
  }
}
