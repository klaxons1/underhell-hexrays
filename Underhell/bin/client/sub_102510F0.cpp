char __thiscall sub_102510F0(_BYTE *this, int a2, int a3)
{
  int v4; // eax
  int v6; // [esp+14h] [ebp-8h] BYREF
  int v7; // [esp+18h] [ebp-4h] BYREF

  if ( this[292] )
    return 0;
  (*(void (__thiscall **)(_BYTE *, _DWORD, int *, int *))(*(_DWORD *)this + 1004))(
    this,
    *((_DWORD *)this + 70),
    &v7,
    &v6);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *((_DWORD *)this + 87));
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *((_DWORD *)this + 83));
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
    dword_1047CA6C,
    v7,
    v6,
    v7 + 1,
    v6 + v4);
  return 1;
}
