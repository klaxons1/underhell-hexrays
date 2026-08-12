char __thiscall sub_101BCD80(_DWORD *this, int a2, int a3, void *a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  unsigned int v9; // eax
  int v10; // eax

  v5 = *(_DWORD *)dword_106B31F0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this);
  v7 = (*(int (__thiscall **)(int, int))(v5 + 16))(dword_106B31F0, v6);
  sub_1025F2C0(a4);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD *, _DWORD *, void *))(*(_DWORD *)dword_106BAFF0 + 128))(
    dword_106BAFF0,
    a2,
    *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4 * this[201]),
    this + 145,
    this + 176,
    a4);
  if ( *((float *)a4 + 11) >= 1.0 )
    return 0;
  v9 = this[103];
  if ( v9 == -1 || off_1061BE18[4 * (this[103] & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
  *((_DWORD *)a4 + 19) = v10;
  *((_DWORD *)a4 + 17) = this[203];
  *((_WORD *)a4 + 36) = *((_WORD *)this + 404);
  return 1;
}
