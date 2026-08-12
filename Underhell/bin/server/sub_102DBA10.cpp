int __thiscall sub_102DBA10(int this)
{
  double v1; // st7
  int v3; // edx
  double v4; // st7
  double (__stdcall *v5)(_DWORD, _DWORD); // eax
  float v7; // [esp+0h] [ebp-68h]
  float v8; // [esp+8h] [ebp-60h] BYREF
  float v9; // [esp+Ch] [ebp-5Ch]
  float v10; // [esp+10h] [ebp-58h]
  float v11; // [esp+14h] [ebp-54h]
  float v12; // [esp+18h] [ebp-50h]
  float v13; // [esp+1Ch] [ebp-4Ch]
  float v14; // [esp+20h] [ebp-48h]
  float v15; // [esp+24h] [ebp-44h]
  float v16; // [esp+28h] [ebp-40h]
  float v17; // [esp+2Ch] [ebp-3Ch]
  float v18; // [esp+30h] [ebp-38h]
  float v19; // [esp+34h] [ebp-34h]
  int v20; // [esp+38h] [ebp-30h]
  int v21; // [esp+3Ch] [ebp-2Ch]
  float v22; // [esp+40h] [ebp-28h]
  float v23; // [esp+44h] [ebp-24h]
  float v24; // [esp+48h] [ebp-20h]
  int v25; // [esp+4Ch] [ebp-1Ch]
  __int16 v26; // [esp+50h] [ebp-18h]
  int v27; // [esp+54h] [ebp-14h]
  int v28; // [esp+58h] [ebp-10h]
  int v29; // [esp+5Ch] [ebp-Ch]
  char v30; // [esp+60h] [ebp-8h]

  v1 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v3 = *(_DWORD *)(this + 252);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v21 = 0;
  v14 = 0.0;
  v25 = 0;
  v15 = 0.0;
  v26 = 0;
  v16 = 0.0;
  v27 = 0;
  v17 = 0.0;
  v28 = 0;
  v18 = 0.0;
  v29 = 0;
  v19 = 0.0;
  v30 = 0;
  v20 = 0;
  v22 = 1.0;
  v23 = 0.0;
  v24 = 0.0;
  if ( (v3 & 0x800) != 0 )
  {
    sub_100DAE60(this);
    v1 = 0.0;
  }
  v8 = *(float *)(this + 580);
  v9 = *(float *)(this + 584);
  v10 = *(float *)(this + 588);
  v14 = v1;
  v15 = v1;
  v16 = 1.0;
  v17 = v1;
  v18 = v1;
  v19 = v1;
  if ( (sub_100E87E0((_BYTE *)this) & 0x10) != 0 )
    v20 |= 1u;
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v7 = *(float *)(this + 480) * *(float *)(this + 480)
     + *(float *)(this + 476) * *(float *)(this + 476)
     + *(float *)(this + 484) * *(float *)(this + 484);
  v4 = off_10689708(v7);
  v5 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
  if ( v4 >= 300.0 )
  {
    v22 = v5(6.0, 8.0);
    return sub_1028E890((int)"watersplash", (int)&v8);
  }
  else
  {
    v22 = v5(10.0, 12.0);
    return sub_1028E890((int)"waterripple", (int)&v8);
  }
}
