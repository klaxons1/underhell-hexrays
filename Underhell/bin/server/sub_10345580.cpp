int __fastcall sub_10345580(int a1)
{
  unsigned int v2; // eax
  int *v3; // ecx
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
  int v18; // eax
  float *v19; // esi
  int *v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  double v27; // st7
  int v28; // eax
  float *v29; // esi
  int *v30; // ecx
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // eax
  float *v34; // esi
  int *v35; // ecx
  unsigned int v36; // eax
  int v37; // eax
  int *v38; // esi
  int v39; // edi
  int *v40; // ecx
  int *v41; // edi
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // eax
  float *v45; // esi
  int *v46; // ecx
  float v47; // [esp+0h] [ebp-24h]
  float v48[3]; // [esp+10h] [ebp-14h] BYREF
  float v49; // [esp+1Ch] [ebp-8h]
  float v50; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a1 + 3644);
  v49 = *(float *)&a1;
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], result = v2 >> 12, v3[1] != result) || !*v3 )
  {
    v5 = sub_100FB5C0((const char *)off_1060E764, 2.0);
    if ( v5 )
      *(_DWORD *)(a1 + 3644) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      *(_DWORD *)(a1 + 3644) = -1;
    v6 = *(_DWORD *)(a1 + 3644);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    sub_1005C620((_BYTE *)(v7 + 116), 0, 100, 255, HIBYTE(*(_DWORD *)(v7 + 116)));
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v8 = *(float *)(a1 + 584);
    v9 = *(float *)(a1 + 588);
    v48[0] = *(float *)(a1 + 580);
    v10 = *(_DWORD *)(a1 + 3644);
    v48[1] = v8;
    v48[2] = v9;
    if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
    sub_100FAC00(v11, &flt_106F1CA8, v48);
    v12 = *(_DWORD *)(a1 + 3644);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
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
    v16 = *(_DWORD *)(a1 + 3644);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v16 >> 12 )
      v17 = 0;
    else
      v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    v18 = *(_DWORD *)(v17 + 928);
    v19 = (float *)(v17 + 928);
    v50 = 0.0;
    if ( v18 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v17 + 84) )
      {
        *(_BYTE *)(v17 + 88) |= 1u;
      }
      else
      {
        v20 = *(int **)(v17 + 24);
        if ( v20 )
          sub_100194B0(v20, 928);
      }
      *v19 = 0.0;
    }
    v21 = *(_DWORD *)(a1 + 3644);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    sub_1005C3A0(v22, 1.0);
    v23 = *(_DWORD *)(a1 + 3644);
    if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v23 >> 12 )
      v24 = 0;
    else
      v24 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    sub_1005C410(v24, 0.0);
    v25 = *(_DWORD *)(a1 + 3644);
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    v27 = 0.0;
    v28 = *(_DWORD *)(v26 + 936);
    v29 = (float *)(v26 + 936);
    v50 = 0.0;
    if ( v28 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(v26 + 84) )
      {
        *(_BYTE *)(v26 + 88) |= 1u;
      }
      else
      {
        v30 = *(int **)(v26 + 24);
        if ( v30 )
        {
          sub_100194B0(v30, 936);
          v27 = 0.0;
        }
      }
      *v29 = v27;
    }
    v31 = *(_DWORD *)(a1 + 3644);
    if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v31 >> 12 )
      v32 = 0;
    else
      v32 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    v33 = *(_DWORD *)(v32 + 920);
    v50 = v27;
    v34 = (float *)(v32 + 920);
    if ( v33 != LODWORD(v50) )
    {
      if ( *(_BYTE *)(v32 + 84) )
      {
        *(_BYTE *)(v32 + 88) |= 1u;
        *v34 = v27;
      }
      else
      {
        v35 = *(int **)(v32 + 24);
        if ( v35 )
        {
          sub_100194B0(v35, 920);
          v27 = 0.0;
        }
        *v34 = v27;
      }
    }
    v36 = *(_DWORD *)(a1 + 3644);
    if ( v36 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v36 >> 12 )
      v37 = 0;
    else
      v37 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
    v38 = (int *)(v37 + 820);
    v39 = dword_106E65D8;
    if ( *(_DWORD *)(v37 + 820) != dword_106E65D8 )
    {
      if ( *(_BYTE *)(v37 + 84) )
      {
        *(_BYTE *)(v37 + 88) |= 1u;
      }
      else
      {
        v40 = *(int **)(v37 + 24);
        if ( v40 )
          sub_100194B0(v40, 820);
      }
      *v38 = v39;
    }
    v41 = (int *)LODWORD(v49);
    v42 = *(_DWORD *)(LODWORD(v49) + 3644);
    if ( v42 == -1 || off_1061BE18[4 * (*(_DWORD *)(LODWORD(v49) + 3644) & 0xFFF) + 2] != v42 >> 12 )
      v43 = 0;
    else
      v43 = off_1061BE18[4 * (*(_DWORD *)(LODWORD(v49) + 3644) & 0xFFF) + 1];
    v44 = *(_DWORD *)(v43 + 924);
    v45 = (float *)(v43 + 924);
    v49 = 16.0;
    if ( v44 != COERCE_INT(16.0) )
    {
      if ( *(_BYTE *)(v43 + 84) )
      {
        *(_BYTE *)(v43 + 88) |= 1u;
      }
      else
      {
        v46 = *(int **)(v43 + 24);
        if ( v46 )
          sub_100194B0(v46, 924);
      }
      *v45 = 16.0;
    }
    v47 = *(float *)(dword_106B31C8 + 12) + 0.02;
    return sub_100EC4A0(v41, v47, 0);
  }
  return result;
}
