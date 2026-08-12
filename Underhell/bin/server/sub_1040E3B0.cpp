int __thiscall sub_1040E3B0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // eax
  int result; // eax
  int v6; // esi
  int *v7; // ecx
  int *v8; // ecx
  _DWORD *v9; // eax
  int v10; // esi
  int *v11; // ecx

  v2 = *(_DWORD *)(this + 2176);
  if ( *(_DWORD *)(this + 2180) )
  {
    if ( v2 == -1 || (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 2176) & 0xFFF) + 1], v8[1] != v2 >> 12) )
      v9 = 0;
    else
      v9 = (_DWORD *)*v8;
    sub_100FAD20(*(_DWORD *)(this + 2196), (float *)(this + 2184), v9);
    result = sub_100FAD20(
               *(_DWORD *)(this + 2200),
               (float *)(this + 4 * (3 * *(_DWORD *)(this + 2180) + 543)),
               (_DWORD *)this);
    v10 = *(_DWORD *)(this + 2200);
    if ( *(_BYTE *)(v10 + 119) != 0xFF )
    {
      result = v10;
      if ( *(_BYTE *)(v10 + 84) )
      {
        *(_BYTE *)(v10 + 88) |= 1u;
        *(_BYTE *)(v10 + 119) = -1;
      }
      else
      {
        v11 = *(int **)(v10 + 24);
        if ( v11 )
          result = sub_100194B0(v11, 116);
        *(_BYTE *)(v10 + 119) = -1;
      }
    }
  }
  else
  {
    if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2176) & 0xFFF) + 1], v3[1] != v2 >> 12) )
      v4 = 0;
    else
      v4 = (_DWORD *)*v3;
    result = sub_100FAE40(*(_DWORD *)(this + 2196), (_DWORD *)this, v4);
    v6 = *(_DWORD *)(this + 2200);
    if ( *(_BYTE *)(v6 + 119) )
    {
      result = v6;
      if ( *(_BYTE *)(v6 + 84) )
      {
        *(_BYTE *)(v6 + 88) |= 1u;
        *(_BYTE *)(v6 + 119) = 0;
      }
      else
      {
        v7 = *(int **)(v6 + 24);
        if ( v7 )
          result = sub_100194B0(v7, 116);
        *(_BYTE *)(v6 + 119) = 0;
      }
    }
  }
  return result;
}
