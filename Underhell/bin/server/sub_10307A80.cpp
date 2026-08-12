int *__thiscall sub_10307A80(int this)
{
  int *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  float *v12; // edi
  int *v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // ecx
  unsigned int v21; // eax
  int *v22; // ecx

  result = sub_10243040("sprites/grubflare1.vmt", (float *)(this + 716), 0);
  if ( result )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*result + 8))(result);
    *(_DWORD *)(this + 1120) = *result;
  }
  else
  {
    *(_DWORD *)(this + 1120) = -1;
  }
  v3 = *(_DWORD *)(this + 1120);
  if ( v3 != -1 )
  {
    result = &off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
    v4 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == v4 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == v4 )
          v5 = *result;
        else
          v5 = 0;
        sub_10242BA0(v5);
        v6 = *(_DWORD *)(this + 1120);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        sub_10128950(v7, 9, 156, 169, 121, 164, 14);
        v8 = *(_DWORD *)(this + 1120);
        if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        sub_102428B0(v9, 0.5, 0.0);
        v10 = *(_DWORD *)(this + 1120);
        if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        v12 = (float *)(v11 + 840);
        if ( *(_DWORD *)(v11 + 840) != COERCE_INT(16.0) )
        {
          if ( *(_BYTE *)(v11 + 84) )
          {
            *(_BYTE *)(v11 + 88) |= 1u;
          }
          else
          {
            v13 = *(int **)(v11 + 24);
            if ( v13 )
              sub_100194B0(v13, 840);
          }
          *v12 = 16.0;
        }
        v14 = sub_100BEF30(this, "glow");
        v15 = *(_DWORD *)(this + 1120);
        if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 140))(v16, this, v14);
        v17 = *(_DWORD *)(this + 1120);
        if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v17 >> 12 )
          v18 = 0;
        else
          v18 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        sub_100E10C0(v18, &flt_106F1CA8);
        v19 = *(_DWORD *)(this + 1120);
        if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v19 >> 12 )
          v20 = 0;
        else
          v20 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        sub_100EC3F0(v20, 0, 0.0, 0);
        v21 = *(_DWORD *)(this + 1120);
        if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v21 >> 12 )
          v22 = 0;
        else
          v22 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        return (int *)sub_100EC4A0(v22, -1.0, 0);
      }
    }
  }
  return result;
}
