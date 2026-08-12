int __thiscall sub_10200650(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  float *v8; // esi
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // esi
  char v13; // bl
  int *v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  double v17; // st7
  int v18; // ecx
  int v19; // esi
  int *v20; // ecx
  unsigned int v21; // eax
  double v22; // st7
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int result; // eax
  float *v28; // esi
  int *v29; // ecx
  int v30; // ecx
  float *v31; // esi
  int *v32; // ecx
  float v33; // [esp+0h] [ebp-14h]
  float v34; // [esp+0h] [ebp-14h]
  float v35; // [esp+10h] [ebp-4h]
  float v36; // [esp+10h] [ebp-4h]
  float v37; // [esp+10h] [ebp-4h]

  if ( *(float *)(this + 852) + *(float *)(this + 852) >= *(float *)(this + 856) )
  {
    v10 = *(_DWORD *)(this + 848);
    if ( *(float *)(this + 852) >= (double)*(float *)(this + 856) )
    {
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] != v10 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
      v19 = v18 + 116;
      if ( *(_BYTE *)(v18 + 119) != 1 )
      {
        if ( *(_BYTE *)(v18 + 84) )
        {
          *(_BYTE *)(v18 + 88) |= 1u;
        }
        else
        {
          v20 = *(int **)(v18 + 24);
          if ( v20 )
            sub_100194B0(v20, 116);
        }
        *(_BYTE *)(v19 + 3) = 1;
      }
      v21 = *(_DWORD *)(this + 844);
      if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 2] != v21 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 1];
      v17 = *(float *)(this + 856);
    }
    else
    {
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
      v12 = v11 + 116;
      v13 = (int)(1.0 - (*(float *)(this + 856) - *(float *)(this + 852)) / *(float *)(this + 852));
      if ( *(_BYTE *)(v11 + 119) != v13 )
      {
        if ( *(_BYTE *)(v11 + 84) )
        {
          *(_BYTE *)(v11 + 88) |= 1u;
        }
        else
        {
          v14 = *(int **)(v11 + 24);
          if ( v14 )
            sub_100194B0(v14, 116);
        }
        *(_BYTE *)(v12 + 3) = v13;
      }
      v15 = *(_DWORD *)(this + 844);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 2] != v15 >> 12 )
      {
        v17 = *(float *)(this + 852);
        v16 = 0;
      }
      else
      {
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 1];
        v17 = *(float *)(this + 852);
      }
    }
    v33 = v17;
    sub_100FA740(v16, v33);
  }
  else
  {
    v2 = *(_DWORD *)(this + 848);
    if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
    v4 = v3 + 116;
    if ( *(_BYTE *)(v3 + 119) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(v3 + 24);
        if ( v5 )
          sub_100194B0(v5, 116);
      }
      *(_BYTE *)(v4 + 3) = 0;
    }
    v6 = *(_DWORD *)(this + 844);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 1];
    v8 = (float *)(v7 + 920);
    v35 = *(float *)(this + 852);
    if ( *(_DWORD *)(v7 + 920) != LODWORD(v35) )
    {
      if ( *(_BYTE *)(v7 + 84) )
      {
        *(_BYTE *)(v7 + 88) |= 1u;
        *v8 = v35;
      }
      else
      {
        v9 = *(int **)(v7 + 24);
        if ( v9 )
          sub_100194B0(v9, 920);
        *v8 = v35;
      }
    }
  }
  v22 = *(float *)(this + 856) / *(float *)(this + 852) * *(float *)(this + 860);
  v36 = v22;
  if ( v22 <= 102.3 )
  {
    if ( v22 < 0.0 )
    {
      v22 = 0.0;
      v36 = 0.0;
    }
  }
  else
  {
    v22 = 102.3;
    v36 = 102.3;
  }
  v23 = *(_DWORD *)(this + 844);
  if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 2] != v23 >> 12 )
    v24 = 0;
  else
    v24 = off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 1];
  v34 = v22;
  sub_1005C410(v24, v34);
  v25 = *(_DWORD *)(this + 848);
  if ( (*(_BYTE *)(this + 248) & 2) != 0 )
  {
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
    result = *(_DWORD *)(v26 + 800);
    v28 = (float *)(v26 + 800);
    if ( result != COERCE_INT(0.0) )
    {
      result = v26;
      if ( *(_BYTE *)(v26 + 84) )
      {
        *(_BYTE *)(v26 + 88) |= 1u;
        *v28 = 0.0;
      }
      else
      {
        v29 = *(int **)(v26 + 24);
        if ( v29 )
          result = sub_100194B0(v29, 800);
        *v28 = 0.0;
      }
    }
  }
  else
  {
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] != v25 >> 12 )
      v30 = 0;
    else
      v30 = off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1];
    result = *(_DWORD *)(v30 + 800);
    v37 = v36 * 1.8;
    v31 = (float *)(v30 + 800);
    if ( result != LODWORD(v37) )
    {
      result = v30;
      if ( *(_BYTE *)(v30 + 84) )
      {
        *(_BYTE *)(v30 + 88) |= 1u;
        *v31 = v37;
      }
      else
      {
        v32 = *(int **)(v30 + 24);
        if ( v32 )
          result = sub_100194B0(v32, 800);
        *v31 = v37;
      }
    }
  }
  return result;
}
