void __thiscall sub_102D25E0(int this)
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
  char v25; // bl
  int *v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // ecx
  int *v32; // eax
  unsigned int v33; // ecx
  int v34; // ecx
  char v35; // bl
  int *v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  float v40; // [esp+0h] [ebp-24h]
  float v41; // [esp+8h] [ebp-1Ch]
  float v42; // [esp+8h] [ebp-1Ch]
  float v43; // [esp+14h] [ebp-10h]
  float v44; // [esp+14h] [ebp-10h]
  float v45; // [esp+14h] [ebp-10h]
  float v46; // [esp+14h] [ebp-10h]
  float v47; // [esp+18h] [ebp-Ch]
  float v48; // [esp+1Ch] [ebp-8h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v41 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0((int *)this, v41, 0);
  if ( *(float *)(this + 812) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v40 = *(float *)(this + 804) - *(float *)(this + 812) + 0.15;
    sub_1023D4B0(4194312, (float *)(this + 580), 437, v40, 0, 0, 0);
    *(float *)(this + 812) = 3.4028235e38;
  }
  v2 = 1.0
     - (*(float *)(this + 804) - *(float *)(dword_106B31C8 + 12)) / (*(float *)(this + 804) - *(float *)(this + 852));
  v3 = 1.0;
  v48 = v2;
  if ( v2 <= 1.0 )
  {
    v3 = v2;
    if ( v2 < 0.0 )
    {
      v3 = 0.0;
      v48 = 0.0;
    }
  }
  else
  {
    v48 = 1.0;
  }
  v42 = v3;
  sub_10422B90(v42, 0.75);
  v47 = v3;
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
        v3 = v47;
      }
    }
    *(_BYTE *)(v5 + 3) = v6;
  }
  v8 = *(_DWORD *)(this + 856);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
  v43 = v3 * 64.0;
  sub_1005C3A0(v9, v43);
  v10 = *(_DWORD *)(this + 856);
  if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(this + 856) & 0xFFF) + 1];
  sub_1005C410(v11, v43);
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
  v44 = v47 * 8.0;
  sub_1005C3A0(v17, v44);
  v18 = *(_DWORD *)(this + 860);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(this + 860) & 0xFFF) + 1];
  sub_1005C410(v19, v44);
  v20 = v48;
  sub_10422B90(v48, 0.1);
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
        v14 = v24 + 116;
        v25 = (int)(255.0 * v20);
        if ( *(_BYTE *)(v24 + 119) != v25 )
        {
          if ( *(_BYTE *)(v24 + 84) )
          {
            *(_BYTE *)(v24 + 88) |= 1u;
          }
          else
          {
            v26 = *(int **)(v24 + 24);
            if ( v26 )
            {
              sub_100194B0(v26, 116);
              v20 = v48;
            }
          }
          *(_BYTE *)(v14 + 3) = v25;
        }
        v27 = *(_DWORD *)(this + 864);
        if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v27 >> 12 )
          v28 = 0;
        else
          v28 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
        v45 = v20 * 32.0;
        sub_1005C3A0(v28, v45);
        v29 = *(_DWORD *)(this + 864);
        if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v29 >> 12 )
          v30 = 0;
        else
          v30 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
        sub_1005C410(v30, v45);
        v20 = v48;
      }
    }
  }
  v31 = *(_DWORD *)(this + 868);
  if ( v31 != -1 )
  {
    v32 = &off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
    v33 = v31 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v33 )
    {
      if ( *v32 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v33 )
          v34 = *v32;
        else
          v34 = 0;
        v14 = v34 + 116;
        v35 = (int)(255.0 * v20);
        if ( *(_BYTE *)(v34 + 119) != v35 )
        {
          if ( *(_BYTE *)(v34 + 84) )
          {
            *(_BYTE *)(v34 + 88) |= 1u;
          }
          else
          {
            v36 = *(int **)(v34 + 24);
            if ( v36 )
            {
              sub_100194B0(v36, 116);
              v20 = v48;
            }
          }
          *(_BYTE *)(v14 + 3) = v35;
        }
        v37 = *(_DWORD *)(this + 868);
        if ( v37 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v37 >> 12 )
          v38 = 0;
        else
          v38 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
        v46 = v20 * 8.0;
        sub_1005C3A0(v38, v46);
        v39 = *(_DWORD *)(this + 868);
        if ( v39 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v39 >> 12 )
          sub_1005C410(0, v46);
        else
          sub_1005C410(off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1], v46);
      }
    }
  }
  if ( !*(_BYTE *)(this + 824) && *(float *)(this + 808) < (double)*(float *)(dword_106B31C8 + 12) )
    sub_102CF410((_DWORD *)this);
  if ( *(float *)(this + 804) < (double)*(float *)(dword_106B31C8 + 12) )
    sub_102D0DE0(this, (int)&savedregs, this, v14);
}
