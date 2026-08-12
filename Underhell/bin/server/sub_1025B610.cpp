char __thiscall sub_1025B610(char *this, _DWORD *a2)
{
  char *v2; // esi
  _DWORD *v4; // esi
  int v5; // eax
  _BYTE v6[8192]; // [esp+8h] [ebp-2018h] BYREF
  _BYTE v7[12]; // [esp+2008h] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+2014h] [ebp-Ch] BYREF

  v2 = this + 1124;
  if ( !sub_102595B0(a2, this + 1124) )
    return 0;
  v4 = sub_10254F80(v2);
  if ( !v4 )
    return 0;
  if ( (v4[63] & 0x800) != 0 )
    sub_100DAE60((int)v4);
  v5 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B31D0 + 44))(dword_106B31D0, v4 + 145);
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 48))(dword_106B31D0, v5, 0x2000, v6);
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(a2[80] + 60))(a2 + 80, v8, v7);
  return (*(int (__thiscall **)(int, _BYTE *, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_106B31D0 + 56))(
           dword_106B31D0,
           v8,
           v7,
           v6,
           0x2000);
}
