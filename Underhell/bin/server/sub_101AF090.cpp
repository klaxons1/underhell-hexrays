int __thiscall sub_101AF090(int this)
{
  int v2; // edi
  int *v3; // ecx
  unsigned int v4; // edi
  int *v5; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 248) | 0x14;
  if ( *(_DWORD *)(this + 248) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
    }
    *(_DWORD *)(this + 248) = v2;
  }
  v4 = *(_DWORD *)(this + 248) & 0xFFFFFFFD;
  if ( *(_DWORD *)(this + 248) != v4 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 248);
    }
    *(_DWORD *)(this + 248) = v4;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 880) = *(float *)(this + 880) - *(float *)(this + 580);
  *(float *)(this + 884) = *(float *)(this + 884) - *(float *)(this + 584);
  *(float *)(this + 888) = *(float *)(this + 888) - *(float *)(this + 588);
  off_10689714();
  result = sub_1025F3D0(this + 880, 0.0020000001);
  *(_DWORD *)(this + 828) = (~*(_BYTE *)(this + 248) & 8 | 4u) >> 2;
  return result;
}
