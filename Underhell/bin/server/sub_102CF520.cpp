void __thiscall sub_102CF520(int this)
{
  double v2; // st6
  double v3; // st7
  int v4; // ecx
  int v5; // esi
  char v6; // bl
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // esi
  int *v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  double v20; // st7
  unsigned int v21; // eax
  int *v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // esi
  char v26; // bl
  int *v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // ecx
  int *v33; // eax
  unsigned int v34; // ecx
  int v35; // ecx
  int v36; // esi
  char v37; // bl
  int *v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  int v49; // ecx
  float v50; // [esp+8h] [ebp-1Ch]
  float v51; // [esp+8h] [ebp-1Ch]
  float v52; // [esp+14h] [ebp-10h]
  float v53; // [esp+14h] [ebp-10h]
  float v54; // [esp+14h] [ebp-10h]
  float v55; // [esp+14h] [ebp-10h]
  float v56; // [esp+18h] [ebp-Ch]
  float v57; // [esp+1Ch] [ebp-8h]

  v50 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0((int *)this, v50, 0);
  v2 = 1.0 - (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 800));
  v3 = 1.0;
  v57 = v2;
  if ( v2 <= 1.0 )
  {
    v3 = 0.0;
    if ( v2 >= 0.0 )
      v3 = v2;
    else
      v57 = 0.0;
  }
  else
  {
    v57 = 1.0;
  }
  v51 = v3;
  sub_10422B90(v51, 0.1);
  v56 = v3;
  if ( *(_DWORD *)(this + 856) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != *(_DWORD *)(this + 856) >> 12 )
  {
    v4 = 0;
  }
  else
  {
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
  }
  v5 = v4 + 116;
  v6 = (int)(255.0 * v3);
  if ( *(_BYTE *)(v4 + 119) != v6 )
  {
    if ( *(_BYTE *)(v4 + 84) )
    {
      *(_BYTE *)(v4 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v4 + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 116);
        v3 = v56;
      }
    }
    *(_BYTE *)(v5 + 3) = v6;
  }
  v8 = *(_DWORD *)(this + 856);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
  v52 = v3 * 64.0;
  sub_1005C3A0(v9, v52);
  v10 = *(_DWORD *)(this + 856);
  if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
  sub_1005C410(v11, v52);
  v12 = *(_DWORD *)(this + 860);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
  v14 = v13 + 116;
  if ( *(_BYTE *)(v13 + 119) != v6 )
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
    *(_BYTE *)(v14 + 3) = v6;
  }
  v16 = *(_DWORD *)(this + 860);
  if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
  v53 = v56 * 8.0;
  sub_1005C3A0(v17, v53);
  v18 = *(_DWORD *)(this + 860);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
  sub_1005C410(v19, v53);
  v20 = v57;
  sub_10422B90(v57, 0.25);
  v21 = *(_DWORD *)(this + 864);
  if ( v21 != -1 )
  {
    v22 = &off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
    v23 = v21 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] == v23 )
    {
      if ( *v22 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] == v23 )
          v24 = *v22;
        else
          v24 = 0;
        v25 = v24 + 116;
        v26 = (int)(255.0 * v20);
        if ( *(_BYTE *)(v24 + 119) != v26 )
        {
          if ( *(_BYTE *)(v24 + 84) )
          {
            *(_BYTE *)(v24 + 88) |= 1u;
          }
          else
          {
            v27 = *(int **)(v24 + 24);
            if ( v27 )
            {
              sub_100194B0(v27, 116);
              v20 = v57;
            }
          }
          *(_BYTE *)(v25 + 3) = v26;
        }
        v28 = *(_DWORD *)(this + 864);
        if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v28 >> 12 )
          v29 = 0;
        else
          v29 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
        v54 = v20 * 32.0;
        sub_1005C3A0(v29, v54);
        v30 = *(_DWORD *)(this + 864);
        if ( v30 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v30 >> 12 )
          v31 = 0;
        else
          v31 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
        sub_1005C410(v31, v54);
        v20 = v57;
      }
    }
  }
  v32 = *(_DWORD *)(this + 868);
  if ( v32 != -1 )
  {
    v33 = &off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
    v34 = v32 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v34 )
    {
      if ( *v33 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v34 )
          v35 = *v33;
        else
          v35 = 0;
        v36 = v35 + 116;
        v37 = (int)(255.0 * v20);
        if ( *(_BYTE *)(v35 + 119) != v37 )
        {
          if ( *(_BYTE *)(v35 + 84) )
          {
            *(_BYTE *)(v35 + 88) |= 1u;
          }
          else
          {
            v38 = *(int **)(v35 + 24);
            if ( v38 )
            {
              sub_100194B0(v38, 116);
              v20 = v57;
            }
          }
          *(_BYTE *)(v36 + 3) = v37;
        }
        v39 = *(_DWORD *)(this + 868);
        if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v39 >> 12 )
          v40 = 0;
        else
          v40 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
        v55 = v20 * 8.0;
        sub_1005C3A0(v40, v55);
        v41 = *(_DWORD *)(this + 868);
        if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v41 >> 12 )
          sub_1005C410(0, v55);
        else
          sub_1005C410(off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1], v55);
      }
    }
  }
  if ( *(float *)(this + 800) + 1.0 < *(float *)(dword_106B31C8 + 12) )
  {
    v42 = *(_DWORD *)(this + 856);
    if ( v42 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != v42 >> 12 )
      v43 = 0;
    else
      v43 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
    sub_1025FAC0(v43);
    v44 = *(_DWORD *)(this + 860);
    if ( v44 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 2] != v44 >> 12 )
      v45 = 0;
    else
      v45 = off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
    sub_1025FAC0(v45);
    v46 = *(_DWORD *)(this + 864);
    if ( v46 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v46 >> 12 )
      v47 = 0;
    else
      v47 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
    sub_1025FAC0(v47);
    v48 = *(_DWORD *)(this + 868);
    if ( v48 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v48 >> 12 )
      v49 = 0;
    else
      v49 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
    sub_1025FAC0(v49);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    sub_1025FAC0(this);
  }
}
