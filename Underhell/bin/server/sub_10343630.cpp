float *__thiscall sub_10343630(int this, int a2, float *a3, float a4, float *a5)
{
  float v6; // ecx
  float v7; // edx
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st6
  double v13; // st7
  float *result; // eax
  int v15[4]; // [esp+Ch] [ebp-6Ch] BYREF
  int v16[4]; // [esp+1Ch] [ebp-5Ch] BYREF
  int v17[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  _BYTE v18[12]; // [esp+3Ch] [ebp-3Ch] BYREF
  _BYTE v19[12]; // [esp+48h] [ebp-30h] BYREF
  float v20[3]; // [esp+54h] [ebp-24h] BYREF
  float v21; // [esp+60h] [ebp-18h] BYREF
  float v22; // [esp+64h] [ebp-14h]
  float v23; // [esp+68h] [ebp-10h]
  float v24; // [esp+6Ch] [ebp-Ch]
  float v25; // [esp+70h] [ebp-8h]
  float v26; // [esp+74h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 580);
  v7 = *(float *)(this + 584);
  v26 = *(float *)(this + 588);
  v8 = *a3;
  v24 = v6;
  v25 = v7;
  v9 = a3[1] - v7;
  v10 = v8 - v6;
  v11 = a3[2] - v26;
  v20[0] = v10;
  v20[1] = v9;
  v20[2] = v11;
  off_10689714();
  sub_10422540(v20, v18);
  v12 = *(float *)(this + 3676) - v25;
  v13 = *(float *)(this + 3680) - v26;
  v21 = *(float *)(this + 3672) - v24;
  v22 = v12;
  v23 = v13;
  off_10689714();
  sub_10422540(&v21, v19);
  sub_10423260(v18, v17);
  sub_10423260(v19, v16);
  sub_104251E0((int)v16, (int)v17, a4, (int)v15);
  sub_104252C0(v15, v19);
  sub_10422220(v19, &v21);
  result = a5;
  *a5 = v21;
  a5[1] = v22;
  a5[2] = v23;
  return result;
}
