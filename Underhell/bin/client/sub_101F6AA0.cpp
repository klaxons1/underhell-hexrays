void __thiscall sub_101F6AA0(_DWORD *this, int a2)
{
  int v3; // ecx
  _BYTE v4[4]; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v5[4]; // [esp+10h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, v5, v4);
  sub_10236F60(v5, v4);
  v3 = this[64];
  if ( v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    this[262] = -1;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 232))(this, 2);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA68 + 24))(dword_1047CA68, this[65], this[66]);
    this[64] = 0;
  }
  nullsub_5(a2);
}
