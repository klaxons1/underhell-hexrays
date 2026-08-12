void __thiscall sub_1024FC40(int this, float *a2)
{
  double v3; // st7
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  double v7; // st6
  double v8; // st5
  double v9; // rtt
  int v10; // ecx
  float v11[3]; // [esp+Ch] [ebp-4Ch] BYREF
  float v12[3]; // [esp+18h] [ebp-40h] BYREF
  float v13[3]; // [esp+24h] [ebp-34h] BYREF
  float v14[3]; // [esp+30h] [ebp-28h] BYREF
  float v15[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v16; // [esp+48h] [ebp-10h]
  float v17; // [esp+4Ch] [ebp-Ch]
  float v18; // [esp+50h] [ebp-8h]
  float v19; // [esp+54h] [ebp-4h]

  if ( *(float *)(this + 572) < 0.0 )
    v3 = -1.0;
  else
    v3 = *(float *)(this + 572) - *(float *)(this + 564);
  v4 = *(_DWORD *)(this + 252);
  v19 = v3;
  if ( (v4 & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_100DD660(*(_DWORD *)(this + 976), (float *)(this + 476));
  sub_100D7260(*(float **)(this + 976), (float *)(this + 488));
  sub_100D8290(*(float **)(this + 976), v19);
  if ( v19 > 0.0 )
  {
    v5 = *(float **)(this + 976);
    v16 = v5[179] - *(float *)(this + 716);
    v17 = v5[180] - *(float *)(this + 720);
    v18 = v5[181] - *(float *)(this + 724);
    v15[0] = *a2 - *(float *)(this + 728);
    v15[1] = a2[1] - *(float *)(this + 732);
    v15[2] = a2[2] - *(float *)(this + 736);
    sub_10422400(v15, v14, v13, v12);
    v6 = *(_DWORD *)(this + 252) >> 12;
    v7 = v13[1] * v17 + v13[0] * v16 + v13[2] * v18 - v17;
    v8 = v12[1] * v17 + v12[0] * v16 + v12[2] * v18 - v18;
    v9 = 1.0 / v19;
    v16 = (v14[2] * v18 + v14[0] * v16 + v14[1] * v17 - v16) * v9;
    v17 = v7 * v9;
    v18 = v9 * v8;
    if ( (v6 & 1) != 0 )
      sub_100DAFD0(this);
    v10 = *(_DWORD *)(this + 976);
    v11[0] = *(float *)(this + 476) + v16;
    v11[1] = *(float *)(this + 480) + v17;
    v11[2] = *(float *)(this + 484) + v18;
    sub_100DD660(v10, v11);
  }
}
