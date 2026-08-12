int __thiscall sub_100258E0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v6; // [esp-Ch] [ebp-44h]
  _BYTE v7[48]; // [esp+8h] [ebp-30h] BYREF

  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, this[297]);
  if ( v3 )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
    v4 = (*(int (__thiscall **)(_DWORD *))(*(this - 1) + 40))(this - 1);
    sub_101F0B70(v4, v6, v7);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _BYTE *, void *))(*(_DWORD *)dword_1041315C + 288))(
      dword_1041315C,
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * this[298]),
      0,
      v7,
      &unk_103D7F9C);
  }
  return 1;
}
