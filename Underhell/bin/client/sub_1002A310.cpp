bool __thiscall sub_1002A310(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v9; // esi
  int v10; // eax
  bool v11; // c0
  bool v12; // c3
  int v13; // [esp+Ch] [ebp-4h]

  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, this[298]);
  v13 = *(_DWORD *)dword_10436250;
  v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 40))(this, a4);
  v7 = (*(int (__thiscall **)(_DWORD *, int))(*this + 36))(this, v6);
  (*(void (__thiscall **)(int, int, _DWORD, int))(v13 + 128))(
    dword_10436250,
    a2,
    *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * this[299]),
    v7);
  if ( *(float *)(a4 + 44) >= 1.0 )
    return 0;
  v9 = this[281];
  if ( v9 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 2) != v9 >> 12 )
    v10 = 0;
  else
    v10 = *((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 1);
  v11 = *(float *)(a4 + 44) > 1.0;
  v12 = 1.0 == *(float *)(a4 + 44);
  *(_DWORD *)(a4 + 76) = v10;
  *(_WORD *)(a4 + 72) = 0;
  *(_DWORD *)(a4 + 68) = 0;
  return !v11 && !v12 || *(_BYTE *)(a4 + 54) || *(_BYTE *)(a4 + 55);
}
