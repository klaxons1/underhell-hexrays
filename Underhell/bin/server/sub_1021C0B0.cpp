bool __thiscall sub_1021C0B0(unsigned int this)
{
  int v2; // eax
  int v3; // ebx
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  bool result; // al

  sub_100E11A0(this, &flt_106F1CB4);
  sub_1021BB20(this);
  v2 = *(_DWORD *)(this + 824);
  if ( v2 <= 10 )
  {
    v3 = 2;
    if ( v2 >= 2 )
      v3 = *(_DWORD *)(this + 824);
  }
  else
  {
    v3 = 10;
  }
  if ( v2 != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 824);
    }
    *(_DWORD *)(this + 824) = v3;
  }
  sub_1021AEA0(this, 1);
  v5 = *(_DWORD *)(this + 864);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
  *(_BYTE *)(this + 860) = v6 != 0;
  v7 = *(_DWORD *)(this + 868);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v7 >> 12 )
  {
    result = 0;
    *(_BYTE *)(this + 861) = 0;
  }
  else
  {
    result = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1] != 0;
    *(_BYTE *)(this + 861) = result;
  }
  return result;
}
