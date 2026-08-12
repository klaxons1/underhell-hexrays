int __thiscall sub_102470A0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CSun::`vftable';
  sub_100C34C0((float *)(this + 800), 0.0, 0.0, 1.0);
  *(float *)(this + 824) = 0.0;
  *(_DWORD *)(this + 820) = 0;
  *(float *)(this + 828) = 0.0;
  if ( *(_DWORD *)(this + 832) != 16 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 832);
    }
    *(_DWORD *)(this + 832) = 16;
  }
  if ( *(_BYTE *)(this + 844) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 844);
    }
    *(_BYTE *)(this + 844) = 1;
  }
  *(_DWORD *)(this + 252) |= 0x80u;
  sub_100D8500((_DWORD *)this);
  *(_DWORD *)(this + 812) = 0;
  *(_DWORD *)(this + 816) = 0;
  result = this;
  if ( *(_DWORD *)(this + 836) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 836) = -1;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 836);
      *(_DWORD *)(this + 836) = -1;
      return this;
    }
  }
  return result;
}
