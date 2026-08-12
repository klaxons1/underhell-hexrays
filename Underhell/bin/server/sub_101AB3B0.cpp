int __cdecl sub_101AB3B0(const char *a1, int a2, int a3, char *String1, char a5)
{
  int v5; // esi
  int v6; // edi
  const char *v7; // ebx
  int v8; // eax
  int v9; // eax
  const char *v10; // eax
  char *v12; // [esp-4h] [ebp-10h]

  v5 = a3;
  v6 = -1;
  if ( !a3 )
    return sub_101AAE70(a1, a2, v5, v6, a5);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 208))(a3) )
    return sub_101AAE70(a1, a2, v5, v6, a5);
  v7 = String1;
  v12 = String1;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
  v6 = sub_100BEF30(v8, v12);
  if ( v6 != -1 )
    return sub_101AAE70(a1, a2, v5, v6, a5);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
  v10 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v9 + 28))(v9, &a3);
  if ( !v10 )
    v10 = String;
  return Warning("Model '%s' doesn't have attachment '%s' to attach particle system '%s' to.\n", v10, v7, a1);
}
