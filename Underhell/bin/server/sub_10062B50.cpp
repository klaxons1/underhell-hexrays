void __thiscall sub_10062B50(int *this, int a2)
{
  int v3; // esi
  double v4; // st7
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  float v9; // eax
  float v10; // esi
  double v11; // st7
  double v12; // st6
  int v13; // eax
  double v14; // st5
  double v15; // st4
  int v16; // ecx
  float *v17; // esi
  float *v18; // eax
  long double v19; // st7
  long double v20; // st7
  double v21; // st7
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  long double v26; // st7
  int v27; // ecx
  long double v28; // st6
  double v29; // st7
  double v30; // st7
  int i; // esi
  float v32; // [esp+8h] [ebp-80h]
  float v33; // [esp+8h] [ebp-80h]
  float v34[14]; // [esp+18h] [ebp-70h] BYREF
  _BYTE v35[12]; // [esp+50h] [ebp-38h] BYREF
  float v36[2]; // [esp+5Ch] [ebp-2Ch] BYREF
  float v37; // [esp+64h] [ebp-24h]
  float v38[2]; // [esp+68h] [ebp-20h] BYREF
  float v39; // [esp+70h] [ebp-18h]
  float v40; // [esp+74h] [ebp-14h]
  int v41; // [esp+78h] [ebp-10h]
  int v42; // [esp+7Ch] [ebp-Ch]
  float v43; // [esp+80h] [ebp-8h]
  int v44; // [esp+84h] [ebp-4h]

  memset(v34, 0, sizeof(v34));
  v3 = this[1];
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  v34[11] = *(float *)(v3 + 580);
  v34[12] = *(float *)(v3 + 584);
  v4 = *(float *)(v3 + 588);
  v5 = this[1];
  v6 = *(_DWORD *)(v5 + 252);
  v34[13] = v4;
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60(v5);
  v7 = this[32];
  v34[4] = *(float *)(v5 + 708);
  sub_100616E0(this + 29, v7, v34);
  v8 = 0;
  v42 = 0;
  if ( this[27] > 0 )
  {
    v44 = 0;
    v41 = 0;
    do
    {
      LODWORD(v9) = this[24] + v8;
      v10 = *(float *)(LODWORD(v9) + 32);
      v43 = v9;
      if ( v10 != 0.0 )
      {
        memset(v34, 0, sizeof(v34));
        v11 = *(float *)LODWORD(v10);
        v34[11] = *(float *)LODWORD(v10);
        v12 = *(float *)(LODWORD(v10) + 4);
        v13 = this[29];
        v34[12] = *(float *)(LODWORD(v10) + 4);
        v34[8] = v10;
        v14 = *(float *)(LODWORD(v10) + 8);
        v34[13] = *(float *)(LODWORD(v10) + 8);
        v15 = *(float *)(LODWORD(v43) + 4);
        v16 = v44;
        v34[1] = *(float *)(LODWORD(v43) + 4);
        *(float *)(v13 + v44) = v15 - *(float *)(v13 + v44 + 4);
        v17 = *(float **)(LODWORD(v10) + 40);
        if ( v17 )
        {
          v18 = (float *)(this[29] + v16 + 44);
          v38[0] = *v17 - v11;
          v38[1] = v17[1] - v12;
          v39 = v17[2] - v14;
          v36[0] = v11 - *v18;
          v36[1] = v12 - v18[1];
          v37 = v14 - v18[2];
          v39 = 0.0;
          off_10689714();
          v37 = 0.0;
          off_10689714();
          v43 = sub_10265030(v38);
          v40 = sub_10265030(v36);
          v19 = v43;
          sub_10424C10(v43, v40);
          v20 = fabs(v19);
          if ( v20 > 0.1 )
          {
            v32 = v20 * 0.8;
            v21 = v43;
            sub_10424B50(v43, v40, v32);
            v22 = this[32];
            v34[4] = v21;
            sub_100616E0(this + 29, v22, v34);
            v44 += 56;
          }
        }
        else
        {
          sub_10078330(this);
          sub_1007E6A0(v35);
          v34[4] = sub_10265030(v35);
          sub_100616E0(this + 29, this[32], v34);
          v44 += 56;
        }
      }
      v8 = v41 + 56;
      ++v42;
      v41 += 56;
    }
    while ( v42 < this[27] );
  }
  v23 = this[32] - 1;
  if ( v23 > 1 )
  {
    v24 = 56 * v23;
    v41 = this[32] - 2;
    do
    {
      v25 = this[29];
      v26 = *(float *)(v25 + v24 - 40);
      sub_10424C10(*(float *)(v25 + v24 - 40), *(float *)(v25 + v24 + 16));
      v27 = this[29];
      v28 = v26;
      v29 = *(float *)(v27 + v24 - 56) * 150.0;
      if ( fabs(v28) > v29 )
      {
        v33 = v29;
        v30 = *(float *)(v27 + v24 - 40);
        sub_10424B50(*(float *)(v27 + v24 - 40), *(float *)(v27 + v24 + 16), v33);
        *(float *)(this[29] + v24 - 40) = v30;
      }
      v24 -= 56;
      --v41;
    }
    while ( v41 );
  }
  for ( i = 0; i < this[32] - 1; i += sub_10061A20(this, i, i + 1) + 1 )
    ;
}
