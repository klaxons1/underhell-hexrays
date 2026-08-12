int __cdecl sub_1003DB20(int a1, int a2)
{
  void *v2; // esi
  int v3; // esi

  v2 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 1192);
  memset(v2, 0, 0x4A8u);
  if ( !v2 )
    return 0;
  v3 = sub_1003D000((int)v2);
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 160))(v3, a1, a2);
  return v3 + 8;
}
