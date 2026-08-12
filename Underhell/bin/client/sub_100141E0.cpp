int __thiscall sub_100141E0(int *this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  int v6; // [esp-Ch] [ebp-10h]

  if ( *(_DWORD *)a2 != 3 )
    return Warning("user_property <property id> <property value>\n");
  v3 = *this;
  v6 = *(_DWORD *)(a2 + 1040);
  v4 = strtoul(*(const char **)(a2 + 1036), 0, 0);
  return (*(int (__thiscall **)(int *, _DWORD, unsigned int, int, int, _DWORD))(v3 + 4))(this, 0, v4, 4, v6, 0);
}
