_DWORD *__thiscall sub_100C0010(_DWORD **this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edi
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v11; // [esp-8h] [ebp-14h]

  v3 = a2;
  (*(void (__thiscall **)(_DWORD *, int, int))(*this[1] + 20))(this[1], a2[4] + 24, 1);
  v5 = sub_100DDA40(24);
  v6 = 0;
  if ( v5 )
  {
    *(_BYTE *)(v5 + 16) &= 0xFCu;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)v5 = -1;
    *(_DWORD *)(v5 + 8) = -1;
    v6 = (_DWORD *)v5;
  }
  *v6 = v3[2];
  v6[2] = v3[1];
  v7 = v3[4];
  v6[3] = v7;
  v8 = sub_100DDA40(v7);
  v11 = a3;
  v9 = v6[3];
  v6[1] = v8;
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int, int, _DWORD **))(*this[1] + 116))(
    this[1],
    v6,
    v6,
    v9 + 24,
    v11,
    &a2);
  return a2;
}
