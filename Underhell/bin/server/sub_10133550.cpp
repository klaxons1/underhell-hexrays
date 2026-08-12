int __thiscall sub_10133550(int this, int a2)
{
  const char *v3; // eax
  int result; // eax
  int *v5; // ecx
  int *v6; // ecx

  if ( *(_DWORD *)(this + 800) )
  {
    result = *(_DWORD *)(this + 880);
    if ( result != COERCE_INT(-1.0) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          result = sub_100194B0(v5, 880);
      }
      *(float *)(this + 880) = -1.0;
    }
    if ( *(_BYTE *)(this + 888) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 888) = 0;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 888);
        *(_BYTE *)(this + 888) = 0;
      }
    }
  }
  else
  {
    v3 = *(const char **)(this + 260);
    if ( !v3 )
      v3 = String;
    return Warning("env_screenoverlay %s has no overlays to display.\n", v3);
  }
  return result;
}
