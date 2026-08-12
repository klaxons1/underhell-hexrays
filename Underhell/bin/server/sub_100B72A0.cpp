void __thiscall sub_100B72A0(int this, float a2, float a3, float *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // esi
  int v9; // ebx
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // esi
  double v21; // st7
  float *v22; // esi
  double v23; // st4
  double v24; // st6
  int v25; // esi
  double v26; // st7
  double v27; // st4
  double v28; // st7
  double v29; // st6
  int v30; // [esp+4h] [ebp-34h]
  float v31; // [esp+8h] [ebp-30h]
  float v32; // [esp+8h] [ebp-30h]
  float v33[3]; // [esp+18h] [ebp-20h] BYREF
  float v34; // [esp+24h] [ebp-14h] BYREF
  float v35; // [esp+28h] [ebp-10h]
  float v36; // [esp+2Ch] [ebp-Ch]
  int v37; // [esp+30h] [ebp-8h]
  int v38; // [esp+34h] [ebp-4h]
  int v39; // [esp+48h] [ebp+10h]

  v38 = this;
  sub_100B6940(this, v33);
  *a4 = v33[0];
  a4[1] = v33[1];
  a4[2] = v33[2];
  v6 = *(_DWORD *)(this + 3644);
  if ( 0.0 == a2 )
  {
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v6 >> 12 )
      v25 = 0;
    else
      v25 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
      sub_100DAE60(v25);
    v34 = *(float *)(v25 + 580) - *(float *)(this + 3708);
    v35 = *(float *)(v25 + 584) - *(float *)(this + 3712);
    v36 = *(float *)(v25 + 588) - *(float *)(this + 3716);
    off_10689714();
  }
  else
  {
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v6 >> 12 )
      v39 = 0;
    else
      v39 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    v7 = *(_DWORD *)(this + 3648);
    v8 = v39;
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v7 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
    v10 = *(_BYTE *)(v38 + 3732) == 0;
    v37 = v9;
    if ( v10 )
    {
      v11 = sub_101ACCC0(v9);
      if ( sub_101ACC70(v11, 1) )
      {
        v12 = sub_101ACCC0(v9);
        v37 = sub_101ACC70(v12, 1);
      }
    }
    if ( sub_101ACC70(v39, 1) )
    {
      while ( 1 )
      {
        if ( v8 == v37 )
        {
          v30 = v8;
          v20 = v38;
          sub_100B5730(v30, &v34);
          v21 = *a4 - *(float *)(v20 + 3620);
          v22 = (float *)(v20 + 3620);
          v23 = a4[1] - v22[1];
          v24 = a4[2] - v22[2];
          v32 = v21 * v21 + v23 * v23 + v24 * v24;
          if ( a2 <= off_10689708(v32) )
          {
            sub_100B5400(a4, a2, v22, a4);
          }
          else
          {
            *a4 = *v22;
            a4[1] = v22[1];
            a4[2] = v22[2];
          }
          goto LABEL_38;
        }
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        v13 = *a4 - *(float *)(v8 + 580);
        v14 = v13 * v13;
        v15 = a4[1] - *(float *)(v8 + 584);
        v16 = a4[2] - *(float *)(v8 + 588);
        v31 = v16 * v16 + v15 * v15 + v14;
        v17 = off_10689708(v31);
        if ( a2 < v17 )
          break;
        a2 = a2 - v17;
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        v18 = v38;
        *a4 = *(float *)(v8 + 580);
        a4[1] = *(float *)(v8 + 584);
        a4[2] = *(float *)(v8 + 588);
        if ( *(_BYTE *)(v18 + 3732) )
          v19 = sub_101ACC90(v8);
        else
          v19 = sub_101ACCC0(v8);
        v8 = sub_101ACC70(v19, 1);
        if ( !sub_101ACC70(v8, 1) )
          goto LABEL_38;
      }
      sub_100B5730(v8, &v34);
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      sub_100B5400(a4, a2, (float *)(v8 + 580), a4);
    }
  }
LABEL_38:
  v26 = v36 * 0.0;
  v27 = v35 - v26;
  v28 = v26 - v34;
  v29 = v34 * 0.0 - 0.0 * v35;
  *a4 = v27 * a3 + *a4;
  a4[1] = v28 * a3 + a4[1];
  a4[2] = a3 * v29 + a4[2];
}
