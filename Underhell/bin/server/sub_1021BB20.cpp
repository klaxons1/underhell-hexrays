unsigned int __thiscall sub_1021BB20(unsigned int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // esi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  unsigned int v10; // edi
  int *v11; // ecx
  int *v12; // ecx
  float v13; // [esp+0h] [ebp-10h]

  result = *(_DWORD *)(this + 868);
  if ( result != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1],
        off_1061BE18[4 * (result & 0xFFF) + 2] == result >> 12)
    && *v3 )
  {
    if ( *(_DWORD *)(this + 864) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 2] != *(_DWORD *)(this + 864) >> 12 )
    {
      v4 = 0;
    }
    else
    {
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 864) & 0xFFF) + 1];
    }
    if ( v3[1] == result >> 12 )
      v5 = *v3;
    else
      v5 = 0;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v6 = *(float *)(v4 + 580) - *(float *)(v5 + 580);
    v7 = v6 * v6;
    v8 = *(float *)(v4 + 584) - *(float *)(v5 + 584);
    v9 = *(float *)(v4 + 588) - *(float *)(v5 + 588);
    v13 = v9 * v9 + v8 * v8 + v7;
    result = (int)off_10689708(v13);
    v10 = result;
    if ( *(_DWORD *)(this + 844) != result )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 844) = v10;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          result = sub_100194B0(v11, 844);
        *(_DWORD *)(this + 844) = v10;
      }
    }
  }
  else if ( *(_DWORD *)(this + 844) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 844) = 0;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        result = sub_100194B0(v12, 844);
      *(_DWORD *)(this + 844) = 0;
    }
  }
  return result;
}
