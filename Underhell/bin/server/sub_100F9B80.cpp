int __thiscall sub_100F9B80(int this)
{
  float *v2; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  double v10; // st7
  double v11; // st5
  double v12; // st3
  double v13; // st7
  int v14; // ecx
  int v15; // edx
  float v17[3]; // [esp+4h] [ebp-30h] BYREF
  float v18; // [esp+10h] [ebp-24h] BYREF
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+18h] [ebp-1Ch]
  float v21; // [esp+1Ch] [ebp-18h]
  float v22; // [esp+20h] [ebp-14h]
  float v23; // [esp+24h] [ebp-10h]
  float v24; // [esp+28h] [ebp-Ch]
  float v25; // [esp+2Ch] [ebp-8h]
  float v26; // [esp+30h] [ebp-4h]

  v2 = (float *)sub_100F9650((_DWORD *)this);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v18 = v3;
  v19 = v4;
  v20 = v5;
  v6 = (float *)sub_100F9A90((_DWORD *)this);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v24 = v7;
  v10 = v7;
  v26 = v9;
  v25 = v8;
  if ( v18 >= (double)v7 )
    v21 = v7;
  else
    v21 = v18;
  v11 = v25;
  if ( v19 >= (double)v25 )
    v22 = v25;
  else
    v22 = v19;
  if ( v20 >= (double)v26 )
    v23 = v26;
  else
    v23 = v20;
  if ( v18 > v10 )
    v10 = v18;
  v12 = v10;
  v13 = v26;
  v24 = v12;
  if ( v19 > v11 )
    v11 = v19;
  v25 = v11;
  if ( v20 > v13 )
    v13 = v20;
  v14 = *(_DWORD *)(this + 252);
  v26 = v13;
  if ( (v14 & 0x800) != 0 )
    sub_100DAE60(this);
  v15 = *(_DWORD *)(this + 252) >> 11;
  v18 = v24 - *(float *)(this + 580);
  v19 = v25 - *(float *)(this + 584);
  v20 = v26 - *(float *)(this + 588);
  if ( (v15 & 1) != 0 )
    sub_100DAE60(this);
  v17[0] = v21 - *(float *)(this + 580);
  v17[1] = v22 - *(float *)(this + 584);
  v17[2] = v23 - *(float *)(this + 588);
  return sub_100D5D10((int)v17, (int)&v18);
}
