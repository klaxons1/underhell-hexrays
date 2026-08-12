int __thiscall sub_1013C780(_DWORD *this)
{
  _DWORD *v2; // eax
  _BYTE v4[96]; // [esp+8h] [ebp-60h] BYREF

  byte_1043BD08 = 1;
  if ( this )
    v2 = this + 2;
  else
    v2 = 0;
  (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)dword_10413168 + 152))(
    dword_10413168,
    v2,
    0,
    0,
    v4);
  sub_1014A8C0(this != 0, 1, 1, 0, 0);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, v4);
  byte_1043BD08 = 0;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413168 + 80))(
           dword_10413168,
           this[35],
           *(_DWORD *)(dword_1043A774 + 48));
}
