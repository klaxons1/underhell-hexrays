char *__cdecl sub_10154010(int a1)
{
  const char *v1; // esi
  char *result; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  sub_1042C820(a1);
  v1 = *(const char **)(v4 + 36);
  if ( !v1 )
    return (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)(v4 + 32));
  if ( (int)strlen(*(const char **)(v4 + 36)) <= 0 )
    return (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)(v4 + 32));
  if ( (unsigned __int8)sub_10429990(*(_DWORD *)(v4 + 36)) )
    return (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)(v4 + 32));
  result = strstr(v1, "..");
  if ( result )
    return (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)(v4 + 32));
  return result;
}
