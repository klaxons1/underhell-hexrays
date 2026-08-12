_DWORD *__thiscall sub_10133360(int this, int a2)
{
  const char *v3; // eax
  _DWORD *result; // eax
  int v5; // edi
  int *v6; // ecx
  int *v7; // ecx
  int i; // esi
  int *v9; // ecx

  if ( *(_DWORD *)(this + 800) )
  {
    v5 = dword_106B31C8;
    if ( *(_DWORD *)(this + 880) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 880);
      }
      *(float *)(this + 880) = *(float *)(v5 + 12);
    }
    if ( *(_BYTE *)(this + 888) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 888);
      }
      *(_BYTE *)(this + 888) = 1;
    }
    result = sub_1012BC90(&dword_1069E3E0, 0, "env_screenoverlay");
    for ( i = (int)result; result; i = (int)result )
    {
      if ( i != this && *(_BYTE *)(i + 888) )
      {
        if ( *(_BYTE *)(i + 84) )
        {
          *(_BYTE *)(i + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(i + 24);
          if ( v9 )
            sub_100194B0(v9, 888);
        }
        *(_BYTE *)(i + 888) = 0;
      }
      result = sub_1012BC90(&dword_1069E3E0, i, "env_screenoverlay");
    }
  }
  else
  {
    v3 = *(const char **)(this + 260);
    if ( !v3 )
      v3 = String;
    return (_DWORD *)Warning("env_screenoverlay %s has no overlays to display.\n", v3);
  }
  return result;
}
