char __stdcall sub_10108180(int a1)
{
  int v1; // edi
  char result; // al
  _BYTE *v3; // eax
  const char *v4; // eax

  v1 = *(_DWORD *)(dword_10436B7C + 48);
  if ( v1 != -1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 8) + 36))(a1 + 8);
    return v1 == (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 8) + 36))(a1 + 8);
  }
  if ( (dword_10436BBC & 0x1000) == 0 )
  {
    v3 = *(_BYTE **)(dword_10436BC4 + 36);
    if ( !v3 || !*v3 )
      return 0;
  }
  if ( (dword_10436BBC & 0x1000) != 0 )
  {
    v4 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v4 = *(const char **)(dword_10436BC4 + 36);
    if ( !v4 )
      v4 = Locale;
  }
  result = sub_1000A4D0(a1, v4);
  if ( result )
    return 1;
  return result;
}
