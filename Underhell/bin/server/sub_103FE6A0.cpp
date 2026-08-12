void __thiscall sub_103FE6A0(_DWORD *this)
{
  double v2; // st7
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  float *v11; // esi
  int v12; // edi
  int **v13; // ecx
  int *v14; // ecx
  _DWORD *v15; // edi
  int v16; // ebx
  int *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int *v21; // ecx
  _DWORD *v22; // esi
  int v23; // edi
  int *v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  float v29; // [esp+0h] [ebp-1Ch]
  float v31; // [esp+18h] [ebp-4h]

  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    v2 = 1.5;
  else
    v2 = 1.0;
  v3 = this[372];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[372] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_10242820(v6, 128, 0.2);
        v7 = this[372];
        if ( v7 == -1 || off_1061BE18[4 * (this[372] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[372] & 0xFFF) + 1];
        sub_102428B0(v8, 0.15000001, 0.2);
        v9 = this[372];
        if ( v9 == -1 || off_1061BE18[4 * (this[372] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[372] & 0xFFF) + 1];
        sub_10242BA0(v10);
      }
    }
  }
  v11 = (float *)(this + 368);
  v12 = 2;
  do
  {
    if ( *(_DWORD *)v11 != -1 )
    {
      v13 = (int **)&off_1061BE18[4 * (*(_DWORD *)v11 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)v11 & 0xFFF) + 2] == *(_DWORD *)v11 >> 12
        && *v13
        && *(float *)(dword_106B31C8 + 12) > (double)v11[2] )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)v11 & 0xFFF) + 2] == *(_DWORD *)v11 >> 12 )
          v14 = *v13;
        else
          v14 = 0;
        sub_10242060(v14);
      }
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v15 = this + 358;
  v16 = 4;
  do
  {
    if ( *v15 != -1 )
    {
      v17 = &off_1061BE18[4 * (*v15 & 0xFFF) + 1];
      v18 = *v15 >> 12;
      if ( off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v18 )
      {
        if ( *v17 )
        {
          v19 = off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v18 ? *v17 : 0;
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
        }
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v22 = this + 362;
  v23 = 6;
  do
  {
    if ( *v22 != -1 )
    {
      v24 = &off_1061BE18[4 * (*v22 & 0xFFF) + 1];
      v25 = *v22 >> 12;
      if ( off_1061BE18[4 * (*v22 & 0xFFF) + 2] == v25 )
      {
        if ( *v24 )
        {
          if ( off_1061BE18[4 * (*v22 & 0xFFF) + 2] == v25 )
            v26 = *v24;
          else
            v26 = 0;
          sub_10242BA0(v26);
          if ( *v22 == -1 || off_1061BE18[4 * (*v22 & 0xFFF) + 2] != *v22 >> 12 )
            v27 = 0;
          else
            v27 = off_1061BE18[4 * (*v22 & 0xFFF) + 1];
          sub_10242820(v27, 24, 0.2);
          if ( *v22 == -1 || off_1061BE18[4 * (*v22 & 0xFFF) + 2] != *v22 >> 12 )
            v28 = 0;
          else
            v28 = off_1061BE18[4 * (*v22 & 0xFFF) + 1];
          v31 = v2;
          v29 = 0.2 * v31;
          sub_102428B0(v28, v29, 0.2);
        }
      }
    }
    ++v22;
    --v23;
  }
  while ( v23 );
}
