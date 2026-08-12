unsigned int __thiscall sub_1040FDC0(_DWORD *this, float a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int result; // eax
  int *v6; // ecx
  unsigned int v7; // ecx
  float *v8; // esi
  int *v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  float *v13; // esi
  int *v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // eax
  float *v18; // esi
  int *v19; // ecx
  float v20; // [esp+8h] [ebp-4h]
  float v21; // [esp+8h] [ebp-4h]
  float v22; // [esp+14h] [ebp+8h]

  v3 = this[536];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[536] & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
    sub_1040FB00(this);
  result = this[536];
  if ( result != -1 )
  {
    v6 = &off_1061BE18[4 * (this[536] & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (this[536] & 0xFFF) + 2] == result )
    {
      if ( *v6 )
      {
        v7 = off_1061BE18[4 * (this[536] & 0xFFF) + 2] == result ? *v6 : 0;
        result = *(_DWORD *)(v7 + 832);
        v20 = a2 * 0.1;
        v8 = (float *)(v7 + 832);
        if ( result != LODWORD(v20) )
        {
          result = v7;
          if ( *(_BYTE *)(v7 + 84) )
          {
            *(_BYTE *)(v7 + 88) |= 1u;
          }
          else
          {
            v9 = *(int **)(v7 + 24);
            if ( v9 )
              result = sub_100194B0(v9, 832);
          }
          *v8 = v20;
        }
      }
    }
  }
  v10 = this[537];
  if ( v10 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (this[537] & 0xFFF) + 1];
    v11 = v10 >> 12;
    if ( off_1061BE18[4 * (this[537] & 0xFFF) + 2] == v11 )
    {
      if ( *(_DWORD *)result )
      {
        v12 = off_1061BE18[4 * (this[537] & 0xFFF) + 2] == v11 ? *(_DWORD *)result : 0;
        v13 = (float *)(v12 + 832);
        v21 = a2 * 0.2;
        result = *(_DWORD *)(v12 + 832);
        if ( result != LODWORD(v21) )
        {
          result = (unsigned int)(v13 - 208);
          if ( *((_BYTE *)v13 - 748) )
          {
            *(_BYTE *)(result + 88) |= 1u;
          }
          else
          {
            v14 = *(int **)(result + 24);
            if ( v14 )
              result = sub_100194B0(v14, 832);
          }
          *v13 = v21;
        }
      }
    }
  }
  v15 = this[538];
  if ( v15 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (this[538] & 0xFFF) + 1];
    v16 = v15 >> 12;
    if ( off_1061BE18[4 * (this[538] & 0xFFF) + 2] == v16 )
    {
      if ( *(_DWORD *)result )
      {
        v17 = off_1061BE18[4 * (this[538] & 0xFFF) + 2] == v16 ? *(_DWORD *)result : 0;
        v18 = (float *)(v17 + 832);
        v22 = a2 * 3.0;
        result = *(_DWORD *)(v17 + 832);
        if ( result != LODWORD(v22) )
        {
          result = (unsigned int)(v18 - 208);
          if ( *((_BYTE *)v18 - 748) )
          {
            *(_BYTE *)(result + 88) |= 1u;
            *v18 = v22;
          }
          else
          {
            v19 = *(int **)(result + 24);
            if ( v19 )
              result = sub_100194B0(v19, 832);
            *v18 = v22;
          }
        }
      }
    }
  }
  return result;
}
