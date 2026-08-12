unsigned int __thiscall sub_101EEE40(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // esi
  int *v8; // ecx
  unsigned int result; // eax
  int v10; // ecx
  int v11; // edi
  _DWORD *v12; // esi
  int *v13; // ecx

  v3 = this[1006];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[1006] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = *v4;
      if ( v5 )
      {
        v6 = *(_DWORD *)(a2 + 24) == 5 ? *(_DWORD *)(a2 + 8) : 0;
        v7 = (_DWORD *)(v5 + 848);
        if ( *(_DWORD *)(v5 + 848) != v6 )
        {
          if ( *(_BYTE *)(v5 + 84) )
          {
            *(_BYTE *)(v5 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v5 + 24);
            if ( v8 )
              sub_100194B0(v8, 848);
          }
          *v7 = v6;
        }
      }
    }
  }
  result = this[1007];
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (this[1007] & 0xFFF) + 2] == result )
    {
      v10 = off_1061BE18[4 * (this[1007] & 0xFFF) + 1];
      if ( v10 )
      {
        result = a2;
        v11 = *(_DWORD *)(a2 + 24) == 5 ? *(_DWORD *)(a2 + 8) : 0;
        v12 = (_DWORD *)(v10 + 848);
        if ( *(_DWORD *)(v10 + 848) != v11 )
        {
          result = off_1061BE18[4 * (this[1007] & 0xFFF) + 1];
          if ( *(_BYTE *)(v10 + 84) )
          {
            *(_BYTE *)(v10 + 88) |= 1u;
            *v12 = v11;
          }
          else
          {
            v13 = *(int **)(v10 + 24);
            if ( v13 )
              result = sub_100194B0(v13, 848);
            *v12 = v11;
          }
        }
      }
    }
  }
  return result;
}
