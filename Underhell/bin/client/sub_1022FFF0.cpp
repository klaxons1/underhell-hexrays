bool __thiscall sub_1022FFF0(int this, unsigned __int16 *a2, unsigned __int16 *a3)
{
  const char *v3; // eax
  const char *v4; // edx
  int v5; // kr00_4

  if ( *(_DWORD *)a2 == -1 )
    v3 = *(const char **)(this + 32);
  else
    v3 = (const char *)(*(_DWORD *)(*(_DWORD *)(this + 36) + 4 * *a2) + a2[1] + 8);
  if ( *(_DWORD *)a3 == -1 )
    v4 = *(const char **)(this + 32);
  else
    v4 = (const char *)(*(_DWORD *)(*(_DWORD *)(this + 36) + 4 * *a3) + a3[1] + 8);
  if ( *(_BYTE *)(this + 28) )
    return _stricmp(v3, v4) < 0;
  v5 = strcmp(v3, v4);
  return v5 && -(v5 < 0) - ((v5 < 0) - 1) < 0;
}
