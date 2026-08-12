void __thiscall sub_10204670(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // edi
  int v6; // ecx
  float *v7; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  float *v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  _BYTE v20[12]; // [esp+Ch] [ebp-54h] BYREF
  float v21[3]; // [esp+18h] [ebp-48h] BYREF
  float v22; // [esp+24h] [ebp-3Ch] BYREF
  float v23; // [esp+28h] [ebp-38h]
  float v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h] BYREF
  float v26; // [esp+34h] [ebp-2Ch]
  float v27; // [esp+38h] [ebp-28h]
  int v28; // [esp+3Ch] [ebp-24h] BYREF
  float v29; // [esp+40h] [ebp-20h]
  float v30; // [esp+44h] [ebp-1Ch]
  float v31; // [esp+48h] [ebp-18h] BYREF
  float v32; // [esp+4Ch] [ebp-14h]
  float v33; // [esp+50h] [ebp-10h]
  float v34; // [esp+54h] [ebp-Ch]
  float v35; // [esp+58h] [ebp-8h]
  float v36; // [esp+5Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        sub_104222B0(v5 + 704, &v31, &v25, &v22);
        v6 = *(_DWORD *)(this + 252) >> 11;
        v34 = v31 * 64.0;
        v35 = v32 * 64.0;
        v36 = 64.0 * v33;
        if ( (v6 & 1) != 0 )
          sub_100DAE60(this);
        v7 = (float *)(this + 580);
        v8 = *(_DWORD *)(this + 252) >> 11;
        *(float *)&v28 = *(float *)(this + 580) + v34;
        v29 = *(float *)(this + 584) + v35;
        v30 = *(float *)(this + 588) + v36;
        if ( (v8 & 1) != 0 )
          sub_100DAE60(this);
        sub_1011BC50((float *)(this + 580), (float *)&v28, 255, 0, 0, 0, 0.0);
        v9 = *(_DWORD *)(this + 252) >> 11;
        v34 = *(float *)&v25 * 64.0;
        v35 = v26 * 64.0;
        v36 = 64.0 * v27;
        if ( (v9 & 1) != 0 )
          sub_100DAE60(this);
        v10 = *(_DWORD *)(this + 252) >> 11;
        *(float *)&v28 = *v7 + v34;
        v29 = *(float *)(this + 584) + v35;
        v30 = *(float *)(this + 588) + v36;
        if ( (v10 & 1) != 0 )
          sub_100DAE60(this);
        sub_1011BC50((float *)(this + 580), (float *)&v28, 0, 255, 0, 0, 0.0);
        v11 = *(_DWORD *)(this + 252) >> 11;
        v34 = v22 * 64.0;
        v35 = v23 * 64.0;
        v36 = 64.0 * v24;
        if ( (v11 & 1) != 0 )
          sub_100DAE60(this);
        v12 = *(_DWORD *)(this + 252) >> 11;
        *(float *)&v28 = *v7 + v34;
        v29 = *(float *)(this + 584) + v35;
        v30 = *(float *)(this + 588) + v36;
        if ( (v12 & 1) != 0 )
          sub_100DAE60(this);
        sub_1011BC50((float *)(this + 580), (float *)&v28, 0, 0, 255, 0, 0.0);
      }
    }
  }
  if ( *(_BYTE *)(this + 852) == 1 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = (float *)(this + 580);
    v31 = *(float *)(this + 840) - *(float *)(this + 580);
    v32 = *(float *)(this + 844) - *(float *)(this + 584);
    v33 = *(float *)(this + 848) - *(float *)(this + 588);
    off_10689714();
    sub_10422540(&v31, v20);
    sub_104222B0(v20, &v22, &v28, v21);
    v14 = *(_DWORD *)(this + 252) >> 11;
    v34 = v22 * 64.0;
    v35 = v23 * 64.0;
    v36 = 64.0 * v24;
    if ( (v14 & 1) != 0 )
      sub_100DAE60(this);
    v15 = *(_DWORD *)(this + 252) >> 11;
    *(float *)&v25 = *v13 + v34;
    v26 = *(float *)(this + 584) + v35;
    v27 = *(float *)(this + 588) + v36;
    if ( (v15 & 1) != 0 )
      sub_100DAE60(this);
    sub_1011BC50((float *)(this + 580), (float *)&v25, 255, 0, 0, 0, 0.0);
    v16 = *(_DWORD *)(this + 252) >> 11;
    v34 = *(float *)&v28 * 64.0;
    v35 = v29 * 64.0;
    v36 = 64.0 * v30;
    if ( (v16 & 1) != 0 )
      sub_100DAE60(this);
    v17 = *(_DWORD *)(this + 252) >> 11;
    *(float *)&v25 = *v13 + v34;
    v26 = *(float *)(this + 584) + v35;
    v27 = *(float *)(this + 588) + v36;
    if ( (v17 & 1) != 0 )
      sub_100DAE60(this);
    sub_1011BC50((float *)(this + 580), (float *)&v25, 0, 255, 0, 0, 0.0);
    v18 = *(_DWORD *)(this + 252) >> 11;
    v34 = v21[0] * 64.0;
    v35 = v21[1] * 64.0;
    v36 = 64.0 * v21[2];
    if ( (v18 & 1) != 0 )
      sub_100DAE60(this);
    v19 = *(_DWORD *)(this + 252) >> 11;
    *(float *)&v25 = *v13 + v34;
    v26 = *(float *)(this + 584) + v35;
    v27 = *(float *)(this + 588) + v36;
    if ( (v19 & 1) != 0 )
      sub_100DAE60(this);
    sub_1011BC50((float *)(this + 580), (float *)&v25, 0, 0, 255, 0, 0.0);
  }
}
