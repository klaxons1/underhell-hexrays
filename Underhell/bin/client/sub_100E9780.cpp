int __stdcall sub_100E9780(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  const char *v6; // eax
  const char *v8; // [esp-10h] [ebp-14h]
  const char *v9; // [esp-Ch] [ebp-10h]

  if ( !a1 || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 164))(a1) )
    return -1;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 164))(a1);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(v3 + 4) + 140))(v3 + 4, a2);
  if ( v4 == -1 )
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 164))(a1, a2, a3);
    v6 = (const char *)sub_10034E90(v5);
    Warning("Model '%s' doesn't have attachment '%s' to attach particle system '%s' to.\n", v6, v8, v9);
  }
  return v4;
}
