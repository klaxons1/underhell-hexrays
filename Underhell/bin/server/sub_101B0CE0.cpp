const char *__thiscall sub_101B0CE0(int this, _DWORD *a2)
{
  const char *v3; // eax
  const char *v4; // eax
  bool v5; // al
  int v6; // edx
  const char **i; // edi
  const char *result; // eax

  *(float *)(this + 16) = 0.090000004;
  *(_DWORD *)(this + 64) = 0;
  sub_101B0290((char *)this, a2);
  v3 = *(const char **)(this + 56);
  v5 = 1;
  if ( !v3 || !strlen(v3) )
  {
    v4 = *(const char **)(this + 60);
    if ( !v4 || !strlen(v4) )
      v5 = 0;
  }
  *(_BYTE *)(this + 68) = v5;
  *(_BYTE *)(this + 84) = 0;
  v6 = 0;
  for ( i = (const char **)(this + 72); ; ++i )
  {
    result = *i;
    if ( *i )
    {
      result = (const char *)strlen(result);
      if ( result )
        break;
    }
    if ( ++v6 >= 3 )
      return result;
  }
  *(_BYTE *)(this + 84) = 1;
  return result;
}
