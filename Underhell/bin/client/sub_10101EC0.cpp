int __cdecl sub_10101EC0(const char *a1, int a2, int *a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // ebx
  void *v6; // esp
  _BYTE *v7; // eax
  _BYTE v9[12]; // [esp+0h] [ebp-14h] BYREF
  _BYTE *v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v3 = a3 + 1;
  v4 = (*(int (__thiscall **)(int *, const char *, const char *, const char *))(a3[1] + 8))(a3 + 1, a1, "rb", "GAME");
  if ( !v4 )
    return Error("Unable to load surface prop file '%s' (referenced by manifest file '%s')\n", a1, off_103E214C);
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 28))(v3, v4);
  v6 = alloca(v5 + 1);
  v11 = *a3;
  v10 = v9;
  (*(void (__thiscall **)(int *, _BYTE *, int, int, int))(v11 + 272))(a3, v9, v5 + 1, v5, v4);
  (*(void (__thiscall **)(_DWORD *, int))(*v3 + 12))(v3, v4);
  v7 = v10;
  v10[v5] = 0;
  return (*(int (__thiscall **)(int, const char *, _BYTE *))(*(_DWORD *)a2 + 4))(a2, a1, v7);
}
