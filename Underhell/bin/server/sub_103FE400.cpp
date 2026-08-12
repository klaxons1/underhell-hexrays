void __thiscall sub_103FE400(_DWORD *this)
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
  _DWORD *v11; // esi
  int v12; // edi
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // ebx
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int *v22; // ecx
  _DWORD *v23; // esi
  int v24; // edi
  int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  float v30; // [esp+0h] [ebp-1Ch]
  float v32; // [esp+18h] [ebp-4h]

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
        sub_10242820(v6, 255, 0.1);
        v7 = this[372];
        if ( v7 == -1 || off_1061BE18[4 * (this[372] & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (this[372] & 0xFFF) + 1];
        sub_102428B0(v8, 0.2, 0.2);
        v9 = this[372];
        if ( v9 == -1 || off_1061BE18[4 * (this[372] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[372] & 0xFFF) + 1];
        sub_10242BA0(v10);
      }
    }
  }
  v11 = this + 368;
  v12 = 2;
  do
  {
    if ( *v11 != -1 )
    {
      v13 = &off_1061BE18[4 * (*v11 & 0xFFF) + 1];
      v14 = *v11 >> 12;
      if ( off_1061BE18[4 * (*v11 & 0xFFF) + 2] == v14 )
      {
        if ( *v13 )
        {
          if ( off_1061BE18[4 * (*v11 & 0xFFF) + 2] == v14 )
            v15 = *v13;
          else
            v15 = 0;
          sub_10242BA0(v15);
        }
      }
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v16 = this + 358;
  v17 = 4;
  do
  {
    if ( *v16 != -1 )
    {
      v18 = &off_1061BE18[4 * (*v16 & 0xFFF) + 1];
      v19 = *v16 >> 12;
      if ( off_1061BE18[4 * (*v16 & 0xFFF) + 2] == v19 )
      {
        if ( *v18 )
        {
          v20 = off_1061BE18[4 * (*v16 & 0xFFF) + 2] == v19 ? *v18 : 0;
          v21 = v20 + 116;
          if ( *(_BYTE *)(v20 + 119) != 0x80 )
          {
            if ( *(_BYTE *)(v20 + 84) )
            {
              *(_BYTE *)(v20 + 88) |= 1u;
            }
            else
            {
              v22 = *(int **)(v20 + 24);
              if ( v22 )
                sub_100194B0(v22, 116);
            }
            *(_BYTE *)(v21 + 3) = 0x80;
          }
        }
      }
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v23 = this + 362;
  v24 = 6;
  do
  {
    if ( *v23 != -1 )
    {
      v25 = &off_1061BE18[4 * (*v23 & 0xFFF) + 1];
      v26 = *v23 >> 12;
      if ( off_1061BE18[4 * (*v23 & 0xFFF) + 2] == v26 )
      {
        if ( *v25 )
        {
          if ( off_1061BE18[4 * (*v23 & 0xFFF) + 2] == v26 )
            v27 = *v25;
          else
            v27 = 0;
          sub_10242BA0(v27);
          if ( *v23 == -1 || off_1061BE18[4 * (*v23 & 0xFFF) + 2] != *v23 >> 12 )
            v28 = 0;
          else
            v28 = off_1061BE18[4 * (*v23 & 0xFFF) + 1];
          sub_10242820(v28, 32, 0.2);
          if ( *v23 == -1 || off_1061BE18[4 * (*v23 & 0xFFF) + 2] != *v23 >> 12 )
            v29 = 0;
          else
            v29 = off_1061BE18[4 * (*v23 & 0xFFF) + 1];
          v32 = v2;
          v30 = v32 * 0.25;
          sub_102428B0(v29, v30, 0.2);
        }
      }
    }
    ++v23;
    --v24;
  }
  while ( v24 );
}
