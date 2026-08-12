int __usercall sub_102AB320@<eax>(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  float *v7; // eax
  double v8; // st7
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  float *v14; // eax
  unsigned int v15; // eax
  float *v16; // eax
  double v17; // st7
  unsigned int v18; // eax
  int v19; // eax
  int v20; // esi
  int *v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  float *v25; // esi
  double v26; // st7
  int *v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // esi
  char v31; // bl
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  double v35; // st7
  int v36; // ecx
  int v37; // esi
  int *v38; // ecx
  unsigned int v39; // eax
  double v40; // st7
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // ecx
  int result; // eax
  float *v48; // esi
  int *v49; // ecx
  int v50; // ecx
  float *v51; // esi
  double v52; // st7
  int *v53; // ecx
  float v54; // [esp+0h] [ebp-3Ch]
  float v55; // [esp+0h] [ebp-3Ch]
  float v56[3]; // [esp+Ch] [ebp-30h] BYREF
  float v57; // [esp+18h] [ebp-24h]
  float v58; // [esp+1Ch] [ebp-20h]
  float v59; // [esp+20h] [ebp-1Ch]
  float v60; // [esp+24h] [ebp-18h] BYREF
  float v61; // [esp+28h] [ebp-14h]
  float v62; // [esp+2Ch] [ebp-10h]
  float v63; // [esp+30h] [ebp-Ch]
  float v64; // [esp+34h] [ebp-8h]
  float v65; // [esp+38h] [ebp-4h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
    sub_102AA950(a1, a2);
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v7 = (float *)sub_100F9650(v6);
  v60 = *v7;
  v61 = v7[1];
  v62 = v7[2];
  sub_102AA6F0(a1, COERCE_FLOAT(&savedregs), a2, &v60, v56);
  v57 = v56[0] - v60;
  v58 = v56[1] - v61;
  v59 = v56[2] - v62;
  v8 = off_10689714();
  v9 = *(_DWORD *)(a1 + 12);
  v64 = v8;
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  sub_100E0D20(v10, v56);
  v11 = *(_DWORD *)(a1 + 12);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  sub_100DD660(v12, &flt_106F1CA8);
  v13 = *(_DWORD *)(a1 + 12);
  if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = (float *)off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  v14[205] = v60;
  v14[206] = v61;
  v14[207] = v62;
  v15 = *(_DWORD *)(a1 + 12);
  if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v15 >> 12 )
    v16 = 0;
  else
    v16 = (float *)off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
  v16[202] = v57;
  v16[203] = v58;
  v16[204] = v59;
  v17 = (v64 - *(float *)(a1 + 40)) * 0.2 + *(float *)(a1 + 40);
  *(float *)(a1 + 40) = v17;
  if ( *(float *)(a1 + 44) + *(float *)(a1 + 44) >= v17 )
  {
    v28 = *(_DWORD *)(a1 + 12);
    if ( v17 <= *(float *)(a1 + 44) )
    {
      if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v28 >> 12 )
        v36 = 0;
      else
        v36 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
      v37 = v36 + 116;
      if ( *(_BYTE *)(v36 + 119) != 1 )
      {
        if ( *(_BYTE *)(v36 + 84) )
        {
          *(_BYTE *)(v36 + 88) |= 1u;
        }
        else
        {
          v38 = *(int **)(v36 + 24);
          if ( v38 )
            sub_100194B0(v38, 116);
        }
        *(_BYTE *)(v37 + 3) = 1;
      }
      v39 = *(_DWORD *)(a1 + 8);
      if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v39 >> 12 )
        v34 = 0;
      else
        v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
      v35 = *(float *)(a1 + 40);
    }
    else
    {
      if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v28 >> 12 )
        v29 = 0;
      else
        v29 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
      v30 = v29 + 116;
      LODWORD(v63) = (int)(1.0 - (v17 - *(float *)(a1 + 44)) / *(float *)(a1 + 44));
      v31 = LOBYTE(v63);
      if ( *(_BYTE *)(v29 + 119) != LOBYTE(v63) )
      {
        if ( *(_BYTE *)(v29 + 84) )
        {
          *(_BYTE *)(v29 + 88) |= 1u;
        }
        else
        {
          v32 = *(int **)(v29 + 24);
          if ( v32 )
            sub_100194B0(v32, 116);
        }
        *(_BYTE *)(v30 + 3) = v31;
      }
      v33 = *(_DWORD *)(a1 + 8);
      if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v33 >> 12 )
      {
        v35 = *(float *)(a1 + 44);
        v34 = 0;
      }
      else
      {
        v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
        v35 = *(float *)(a1 + 44);
      }
    }
    v54 = v35;
    sub_100FA740(v34, v54);
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 12);
    if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v18 >> 12 )
      v19 = 0;
    else
      v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
    v20 = v19 + 116;
    if ( *(_BYTE *)(v19 + 119) )
    {
      if ( *(_BYTE *)(v19 + 84) )
      {
        *(_BYTE *)(v19 + 88) |= 1u;
      }
      else
      {
        v21 = *(int **)(v19 + 24);
        if ( v21 )
          sub_100194B0(v21, 116);
      }
      *(_BYTE *)(v20 + 3) = 0;
    }
    v22 = *(_DWORD *)(a1 + 8);
    if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
    v24 = *(_DWORD *)(v23 + 920);
    v25 = (float *)(v23 + 920);
    v65 = *(float *)(a1 + 44);
    if ( v24 != LODWORD(v65) )
    {
      if ( *(_BYTE *)(v23 + 84) )
      {
        v26 = v65;
        *(_BYTE *)(v23 + 88) |= 1u;
        *v25 = v26;
      }
      else
      {
        v27 = *(int **)(v23 + 24);
        if ( v27 )
          sub_100194B0(v27, 920);
        *v25 = v65;
      }
    }
  }
  v40 = v64 / *(float *)(a1 + 44) * 96.0;
  v65 = v40;
  if ( v40 > 100.0 )
  {
    v40 = 100.0;
    v65 = 100.0;
  }
  v41 = *(_DWORD *)(a1 + 8);
  if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v41 >> 12 )
    v42 = 0;
  else
    v42 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v55 = v40;
  sub_1005C3A0(v42, v55);
  v43 = *(_DWORD *)(a1 + 8);
  if ( v43 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v43 >> 12 )
    v44 = 0;
  else
    v44 = off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  sub_1005C410(v44, v65);
  v45 = *(_DWORD *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
  {
    if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v45 >> 12 )
      v46 = 0;
    else
      v46 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
    result = *(_DWORD *)(v46 + 800);
    v48 = (float *)(v46 + 800);
    v63 = 0.0;
    if ( result != COERCE_INT(0.0) )
    {
      result = v46;
      if ( *(_BYTE *)(v46 + 84) )
      {
        *(_BYTE *)(v46 + 88) |= 1u;
        *v48 = 0.0;
      }
      else
      {
        v49 = *(int **)(v46 + 24);
        if ( v49 )
          result = sub_100194B0(v49, 800);
        *v48 = 0.0;
      }
    }
  }
  else
  {
    if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 2] != v45 >> 12 )
      v50 = 0;
    else
      v50 = off_1061BE18[4 * (*(_DWORD *)(a1 + 12) & 0xFFF) + 1];
    result = *(_DWORD *)(v50 + 800);
    v51 = (float *)(v50 + 800);
    if ( result != LODWORD(v65) )
    {
      result = v50;
      if ( *(_BYTE *)(v50 + 84) )
      {
        v52 = v65;
        *(_BYTE *)(v50 + 88) |= 1u;
        *v51 = v52;
      }
      else
      {
        v53 = *(int **)(v50 + 24);
        if ( v53 )
          result = sub_100194B0(v53, 800);
        *v51 = v65;
      }
    }
  }
  return result;
}
