char __thiscall sub_102482F0(int *this, const char *a2)
{
  int v2; // edi
  int v4; // ebx
  char *v5; // esi
  int v6; // ebx

  v2 = (*(int (__thiscall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
         dword_1047C968 + 4,
         a2,
         "rt",
         0);
  if ( v2 )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 28))(dword_1047C968 + 4, v2);
    v5 = (char *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v4 + 1);
    v6 = (*(int (__thiscall **)(int, char *, int, int, int))(*(_DWORD *)dword_1047C968 + 272))(
           dword_1047C968,
           v5,
           v4 + 1,
           v4,
           v2);
    v5[v6] = 0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v2);
    LOBYTE(v6) = sub_102476F0(this, v5, v6);
    (*(void (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
    return v6;
  }
  else
  {
    Warning("Couldn't find script file %s\n", a2);
    return 0;
  }
}
