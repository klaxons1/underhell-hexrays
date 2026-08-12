int __thiscall sub_10133470(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // esi
  const char *v5; // ebx
  int result; // eax
  int *v7; // ecx
  int v8; // edi
  int *v9; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = abs32(v3 - 1);
  if ( *(_DWORD *)(this + 4 * v4 + 800) )
  {
    if ( *(_DWORD *)(this + 884) != v4 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 884);
      }
      *(_DWORD *)(this + 884) = v4;
    }
    v8 = dword_106B31C8;
    result = *(_DWORD *)(this + 880);
    if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 880) = *(float *)(v8 + 12);
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          result = sub_100194B0(v9, 880);
        *(float *)(this + 880) = *(float *)(v8 + 12);
      }
    }
  }
  else
  {
    v5 = *(const char **)(this + 260);
    if ( !v5 )
      v5 = String;
    return Warning("env_screenoverlay %s has no overlays to display.\n", v5);
  }
  return result;
}
