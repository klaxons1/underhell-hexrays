int __cdecl sub_10076C00(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[4]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-4h]

  v7[3] = a5;
  v7[2] = a2;
  v7[1] = a1;
  v7[0] = &CFlaggedEntitiesEnum::`vftable';
  v8 = 0;
  (*(void (__thiscall **)(int, int, int, int, _DWORD, _DWORD *))(*(_DWORD *)dword_10413184 + 48))(
    dword_10413184,
    a6,
    a3,
    a4,
    0,
    v7);
  return v8;
}
