void __thiscall sub_1021AEA0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // ecx
  double v9; // st6
  double v10; // st7
  float *v11; // eax
  float *v12; // eax
  float v13[3]; // [esp+8h] [ebp-30h] BYREF
  float v14[3]; // [esp+14h] [ebp-24h] BYREF
  float v15; // [esp+20h] [ebp-18h] BYREF
  float v16; // [esp+24h] [ebp-14h]
  float v17; // [esp+28h] [ebp-10h]
  float v18; // [esp+2Ch] [ebp-Ch] BYREF
  float v19; // [esp+30h] [ebp-8h]
  float v20; // [esp+34h] [ebp-4h]

  v3 = *(_DWORD *)(this + 864);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( !sub_1021A950(v5, *(__int16 *)(this + 872), v14) )
  {
    v10 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
LABEL_20:
    v17 = v10;
    goto LABEL_21;
  }
  v6 = *(_DWORD *)(this + 868);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
  if ( !sub_1021A950(v7, *(__int16 *)(this + 874), v13) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = v14[1] - *(float *)(this + 584);
    v10 = v14[2] - *(float *)(this + 588);
    v18 = v14[0] - *(float *)(this + 580);
    v15 = v18;
    v19 = v9;
    v16 = v9;
    v20 = v10;
    goto LABEL_20;
  }
  sub_100BCAB0(v14, v13, &v15);
  sub_100BCB10(v14, v13, &v18);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v8 = *(_DWORD *)(this + 252) >> 11;
  v15 = v15 - *(float *)(this + 580);
  v16 = v16 - *(float *)(this + 584);
  v17 = v17 - *(float *)(this + 588);
  if ( (v8 & 1) != 0 )
    sub_100DAE60(this);
  v18 = v18 - *(float *)(this + 580);
  v19 = v19 - *(float *)(this + 584);
  v20 = v20 - *(float *)(this + 588);
LABEL_21:
  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  if ( *v11 != v15
    || v11[1] != v16
    || v11[2] != v17
    || (v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320), *v12 != v18)
    || v12[1] != v19
    || v12[2] != v20 )
  {
    sub_1025F360(this, &v15, &v18);
  }
}
