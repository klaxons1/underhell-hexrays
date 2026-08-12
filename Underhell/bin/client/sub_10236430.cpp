int __thiscall sub_10236430(int (__thiscall ***this)(void *, int *, int *))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v5; // [esp+4Ch] [ebp-8h] BYREF
  int v6; // [esp+50h] [ebp-4h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v3 = (**this)(this, &v6, &v5);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v3);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
    dword_1047CA6C,
    0,
    0,
    0,
    255);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(dword_1047CA6C, 0, 0, v6, 2);
  (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    0,
    v5 - 2,
    v6,
    v5);
  (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(dword_1047CA6C, 0, 2, 2, v5 - 2);
  return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
           dword_1047CA6C,
           v6 - 2,
           2,
           v6,
           v5 - 2);
}
