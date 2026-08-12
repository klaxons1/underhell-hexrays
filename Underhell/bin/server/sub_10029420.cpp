int __thiscall sub_10029420(int this, float *a2, int a3)
{
  int v4; // eax
  int v6; // edx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  _BYTE v11[12]; // [esp+Ch] [ebp-90h] BYREF
  _BYTE v12[32]; // [esp+18h] [ebp-84h] BYREF
  float v13; // [esp+38h] [ebp-64h]
  char v14; // [esp+42h] [ebp-5Ah]
  char v15; // [esp+43h] [ebp-59h]
  int v16; // [esp+58h] [ebp-44h]
  float v17[3]; // [esp+60h] [ebp-3Ch] BYREF
  float v18[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v19; // [esp+78h] [ebp-24h]
  float v20; // [esp+7Ch] [ebp-20h]
  float v21; // [esp+84h] [ebp-18h] BYREF
  float v22; // [esp+88h] [ebp-14h]
  float v23; // [esp+8Ch] [ebp-10h]
  float v24; // [esp+90h] [ebp-Ch] BYREF
  float v25; // [esp+94h] [ebp-8h]
  float v26; // [esp+98h] [ebp-4h]
  float v27; // [esp+A4h] [ebp+8h]

  v4 = *(_DWORD *)(this + 256);
  if ( (v4 & 0xC00) != 0 )
    return sub_10029360(this, a2, a3);
  if ( (v4 & 1) == 0 )
    return 0;
  v6 = *(_DWORD *)(this + 252);
  v19 = *a2;
  v20 = a2[1];
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = *(float *)(this + 580);
  v21 = *(float *)(this + 580);
  v8 = *(float *)(this + 584);
  v22 = *(float *)(this + 584);
  v9 = *(float *)(this + 588);
  v23 = *(float *)(this + 588);
  v24 = v7 + v19;
  v25 = v8 + v20;
  v26 = v9;
  v27 = *(float *)(dword_106B741C + 44);
  v10 = v9 + v27;
  v26 = v10;
  v18[0] = v24;
  v18[1] = v25;
  v18[2] = v10 - (v27 + v27);
  sub_102659D0(this, &v24, v18, a3, v11);
  if ( v14 )
    return 0;
  if ( v15 )
  {
    v26 = v26 - v27;
    sub_102659D0(this, &v24, v18, a3, v11);
    if ( v14 || v15 )
      return 0;
  }
  if ( 1.0 == v13 )
  {
    if ( (*(_DWORD *)(this + 256) & 0x20000) != 0 )
    {
      v17[0] = v19 + v21;
      v17[1] = v22 + v20;
      v17[2] = v23;
      sub_100E0D20(v17);
      sub_100DCB50(0);
      sub_101C73D0(0);
      return 1;
    }
    return 0;
  }
  sub_100E0D20(v12);
  if ( (unsigned __int8)sub_102616E0(this, 0, LODWORD(v27)) )
  {
    if ( (*(_DWORD *)(this + 256) & 0x20000) != 0 )
      sub_100EA9A0(0x20000);
    sub_101C73D0(v16);
  }
  else if ( (*(_DWORD *)(this + 256) & 0x20000) == 0 )
  {
    sub_100E0D20(&v21);
    return 0;
  }
  sub_100DCB50(0);
  return 1;
}
