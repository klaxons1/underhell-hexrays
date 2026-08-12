char *__thiscall sub_10178AE0(int this)
{
  char *result; // eax
  int *v3; // ecx
  int *v4; // ecx

  result = sub_100E38F0((float *)this);
  if ( *(int *)(this + 812) > 0xFFFF )
  {
    result = (char *)Warning("env_lightglow maxdist too large (%d should be %d).\n", *(_DWORD *)(this + 812), 0xFFFF);
    if ( *(_DWORD *)(this + 812) != 0xFFFF )
    {
      result = (char *)this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          result = (char *)sub_100194B0(v3, 812);
      }
      *(_DWORD *)(this + 812) = 0xFFFF;
    }
  }
  if ( *(int *)(this + 816) > 0xFFFF )
  {
    result = (char *)Warning(
                       "env_lightglow outermaxdist too large (%d should be %d).\n",
                       *(_DWORD *)(this + 816),
                       0xFFFF);
    if ( *(_DWORD *)(this + 816) != 0xFFFF )
    {
      result = (char *)this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 816) = 0xFFFF;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = (char *)sub_100194B0(v4, 816);
        *(_DWORD *)(this + 816) = 0xFFFF;
      }
    }
  }
  return result;
}
