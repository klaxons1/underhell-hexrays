int __thiscall sub_103459C0(int this)
{
  int v1; // edi
  unsigned int v3; // eax
  int result; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // esi
  int *v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  double v18; // st7
  int v19; // eax
  float *v20; // esi
  int *v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  float *v25; // esi
  int *v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // eax
  float *v30; // esi
  int *v31; // ecx
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // eax
  float *v35; // esi
  int *v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  float *v40; // esi
  int *v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  int *v44; // esi
  int v45; // edi
  int *v46; // ecx
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // eax
  float *v50; // esi
  int *v51; // ecx
  unsigned int v52; // eax
  int v53; // ecx
  float v54[3]; // [esp+10h] [ebp-14h] BYREF
  float v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]

  v1 = 0;
  v56 = 0;
  do
  {
    v3 = *(_DWORD *)(this + 4 * v1 + 3648);
    if ( v3 == -1
      || (result = v3 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != result)
      || !off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1] )
    {
      v5 = sub_100FB5C0((const char *)off_1060E764, 2.0);
      if ( v5 )
        *(_DWORD *)(this + 4 * v1 + 3648) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      else
        *(_DWORD *)(this + 4 * v1 + 3648) = -1;
      v6 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      sub_1005C620((_BYTE *)(v7 + 116), 0, 100, 255, HIBYTE(*(_DWORD *)(v7 + 116)));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v8 = *(float *)(this + 584);
      v9 = *(float *)(this + 588);
      v54[0] = *(float *)(this + 580);
      v10 = *(_DWORD *)(this + 4 * v1 + 3648);
      v54[1] = v8;
      v54[2] = v9;
      if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
      sub_100FAC00(v11, &flt_106F1CA8, v54);
      v12 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v12 >> 12 )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v14 = v13 + 116;
      if ( *(_BYTE *)(v13 + 119) != 0xFF )
      {
        if ( *(_BYTE *)(v13 + 84) )
        {
          *(_BYTE *)(v13 + 88) |= 1u;
        }
        else
        {
          v15 = *(int **)(v13 + 24);
          if ( v15 )
            sub_100194B0(v15, 116);
        }
        *(_BYTE *)(v14 + 3) = -1;
      }
      v16 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v18 = 0.0;
      v19 = *(_DWORD *)(v17 + 928);
      v20 = (float *)(v17 + 928);
      v55 = 0.0;
      if ( v19 != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(v17 + 84) )
        {
          *(_BYTE *)(v17 + 88) |= 1u;
        }
        else
        {
          v21 = *(int **)(v17 + 24);
          if ( v21 )
          {
            sub_100194B0(v21, 928);
            v18 = 0.0;
          }
        }
        *v20 = v18;
      }
      v22 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v22 >> 12 )
        v23 = 0;
      else
        v23 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v24 = *(_DWORD *)(v23 + 912);
      v25 = (float *)(v23 + 912);
      v55 = 1.0;
      if ( v24 != COERCE_INT(1.0) )
      {
        if ( *(_BYTE *)(v23 + 84) )
        {
          *(_BYTE *)(v23 + 88) |= 1u;
        }
        else
        {
          v26 = *(int **)(v23 + 24);
          if ( v26 )
          {
            sub_100194B0(v26, 912);
            v18 = 0.0;
          }
        }
        *v25 = 1.0;
      }
      v27 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v27 >> 12 )
        v28 = 0;
      else
        v28 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v29 = *(_DWORD *)(v28 + 916);
      v55 = v18;
      v30 = (float *)(v28 + 916);
      if ( v29 != LODWORD(v55) )
      {
        if ( *(_BYTE *)(v28 + 84) )
        {
          *(_BYTE *)(v28 + 88) |= 1u;
        }
        else
        {
          v31 = *(int **)(v28 + 24);
          if ( v31 )
          {
            sub_100194B0(v31, 916);
            v18 = 0.0;
          }
        }
        *v30 = v18;
      }
      v32 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v32 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v32 >> 12 )
        v33 = 0;
      else
        v33 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v34 = *(_DWORD *)(v33 + 936);
      v55 = v18;
      v35 = (float *)(v33 + 936);
      if ( v34 != LODWORD(v55) )
      {
        if ( *(_BYTE *)(v33 + 84) )
        {
          *(_BYTE *)(v33 + 88) |= 1u;
        }
        else
        {
          v36 = *(int **)(v33 + 24);
          if ( v36 )
          {
            sub_100194B0(v36, 936);
            v18 = 0.0;
          }
        }
        *v35 = v18;
      }
      v37 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v37 >> 12 )
        v38 = 0;
      else
        v38 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v39 = *(_DWORD *)(v38 + 920);
      v55 = v18;
      v40 = (float *)(v38 + 920);
      if ( v39 != LODWORD(v55) )
      {
        if ( *(_BYTE *)(v38 + 84) )
        {
          *(_BYTE *)(v38 + 88) |= 1u;
          *v40 = v18;
        }
        else
        {
          v41 = *(int **)(v38 + 24);
          if ( v41 )
          {
            sub_100194B0(v41, 920);
            v18 = 0.0;
          }
          *v40 = v18;
        }
      }
      v42 = *(_DWORD *)(this + 4 * v1 + 3648);
      if ( v42 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 2] != v42 >> 12 )
        v43 = 0;
      else
        v43 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v1 + 3648) & 0xFFF) + 1];
      v44 = (int *)(v43 + 820);
      v45 = dword_106E65D8;
      if ( *(_DWORD *)(v43 + 820) != dword_106E65D8 )
      {
        if ( *(_BYTE *)(v43 + 84) )
        {
          *(_BYTE *)(v43 + 88) |= 1u;
        }
        else
        {
          v46 = *(int **)(v43 + 24);
          if ( v46 )
            sub_100194B0(v46, 820);
        }
        *v44 = v45;
      }
      v47 = *(_DWORD *)(this + 4 * v56 + 3648);
      if ( v47 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v56 + 3648) & 0xFFF) + 2] != v47 >> 12 )
        v48 = 0;
      else
        v48 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v56 + 3648) & 0xFFF) + 1];
      v49 = *(_DWORD *)(v48 + 924);
      v50 = (float *)(v48 + 924);
      v55 = 16.0;
      if ( v49 != COERCE_INT(16.0) )
      {
        if ( *(_BYTE *)(v48 + 84) )
        {
          *(_BYTE *)(v48 + 88) |= 1u;
        }
        else
        {
          v51 = *(int **)(v48 + 24);
          if ( v51 )
            sub_100194B0(v51, 924);
        }
        *v50 = 16.0;
      }
      v52 = *(_DWORD *)(this + 4 * v56 + 3648);
      if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4 * v56 + 3648) & 0xFFF) + 2] != v52 >> 12 )
        v53 = 0;
      else
        v53 = off_1061BE18[4 * (*(_DWORD *)(this + 4 * v56 + 3648) & 0xFFF) + 1];
      result = sub_100FB0C0(v53);
      v1 = v56;
    }
    v56 = ++v1;
  }
  while ( v1 < 4 );
  return result;
}
