void __thiscall sub_102C9D70(int this)
{
  double v2; // st7
  int v3; // edx
  float *v4; // edi
  int v5; // eax
  double v6; // st7
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // [esp+Ch] [ebp-30h] BYREF
  float v17; // [esp+10h] [ebp-2Ch]
  float v18; // [esp+14h] [ebp-28h]
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+1Ch] [ebp-20h]
  float v21; // [esp+20h] [ebp-1Ch]
  float v22; // [esp+24h] [ebp-18h] BYREF
  float v23; // [esp+28h] [ebp-14h]
  float v24; // [esp+2Ch] [ebp-10h]
  float v25; // [esp+30h] [ebp-Ch] BYREF
  float v26; // [esp+34h] [ebp-8h]
  float v27; // [esp+38h] [ebp-4h]

  v2 = *(float *)(this + 944);
  v25 = 0.0;
  v27 = 0.0;
  v26 = v2;
  sub_10422220(&v25, &v22);
  v3 = *(_DWORD *)(this + 252) >> 11;
  v19 = v22 * 64.0;
  v20 = v23 * 64.0;
  v21 = 64.0 * v24;
  if ( (v3 & 1) != 0 )
    sub_100DAE60(this);
  v4 = (float *)(this + 580);
  v5 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v16 = v19 + *(float *)(this + 580);
  v17 = v20 + *(float *)(this + 584);
  v18 = v21 + *(float *)(this + 588);
  if ( (v5 & 1) != 0 )
    sub_100DAE60(this);
  sub_1011BC50((float *)(this + 580), (float *)&v16, 255, 255, 255, 1, 0.1);
  v6 = *(float *)(this + 952) + *(float *)(this + 944);
  v25 = 0.0;
  v27 = 0.0;
  v26 = v6;
  sub_10422220(&v25, &v22);
  v7 = *(_DWORD *)(this + 252) >> 11;
  v19 = v22 * 128.0;
  v20 = v23 * 128.0;
  v21 = 128.0 * v24;
  if ( (v7 & 1) != 0 )
    sub_100DAE60(this);
  v8 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v16 = v19 + *v4;
  v17 = v20 + *(float *)(this + 584);
  v18 = v21 + *(float *)(this + 588);
  if ( (v8 & 1) != 0 )
    sub_100DAE60(this);
  sub_1011BC50((float *)(this + 580), (float *)&v16, 0, 255, 0, 1, 0.1);
  v9 = *(float *)(this + 944) - *(float *)(this + 952);
  v25 = 0.0;
  v27 = 0.0;
  v26 = v9;
  sub_10422220(&v25, &v22);
  v10 = *(_DWORD *)(this + 252) >> 11;
  v19 = v22 * 128.0;
  v20 = v23 * 128.0;
  v21 = 128.0 * v24;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(this);
  v11 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v16 = v19 + *v4;
  v17 = v20 + *(float *)(this + 584);
  v18 = v21 + *(float *)(this + 588);
  if ( (v11 & 1) != 0 )
    sub_100DAE60(this);
  sub_1011BC50((float *)(this + 580), (float *)&v16, 0, 255, 0, 1, 0.1);
  v25 = *(float *)(this + 964) + *(float *)(this + 972);
  v26 = 0.0;
  v27 = 0.0;
  sub_10422220(&v25, &v22);
  v12 = *(_DWORD *)(this + 252) >> 11;
  v19 = v22 * 128.0;
  v20 = v23 * 128.0;
  v21 = 128.0 * v24;
  if ( (v12 & 1) != 0 )
    sub_100DAE60(this);
  v13 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v16 = v19 + *v4;
  v17 = v20 + *(float *)(this + 584);
  v18 = v21 + *(float *)(this + 588);
  if ( (v13 & 1) != 0 )
    sub_100DAE60(this);
  sub_1011BC50((float *)(this + 580), (float *)&v16, 255, 0, 0, 1, 0.1);
  v25 = *(float *)(this + 964) - *(float *)(this + 972);
  v26 = 0.0;
  v27 = 0.0;
  sub_10422220(&v25, &v22);
  v14 = *(_DWORD *)(this + 252) >> 11;
  v19 = v22 * 128.0;
  v20 = v23 * 128.0;
  v21 = 128.0 * v24;
  if ( (v14 & 1) != 0 )
    sub_100DAE60(this);
  v15 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v16 = v19 + *v4;
  v17 = v20 + *(float *)(this + 584);
  v18 = v21 + *(float *)(this + 588);
  if ( (v15 & 1) != 0 )
    sub_100DAE60(this);
  sub_1011BC50((float *)(this + 580), (float *)&v16, 255, 0, 0, 1, 0.1);
  sub_100DF330((float *)this);
}
