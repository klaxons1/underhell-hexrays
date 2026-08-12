int __thiscall sub_10014180(_DWORD *this, int a2)
{
  int (__thiscall **v3)(_DWORD *, _DWORD, int, int, _DWORD); // ebx
  const char *v4; // edi
  int v5; // eax
  int v7; // [esp-10h] [ebp-14h]

  if ( *(_DWORD *)a2 != 3 )
    return Warning("user_context <context id> <context value>\n");
  v3 = (int (__thiscall **)(_DWORD *, _DWORD, int, int, _DWORD))*this;
  v4 = *(const char **)(a2 + 1036);
  v7 = atoi(*(const char **)(a2 + 1040));
  v5 = atoi(v4);
  return (*v3)(this, 0, v5, v7, 0);
}
