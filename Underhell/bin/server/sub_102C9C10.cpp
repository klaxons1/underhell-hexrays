int __thiscall sub_102C9C10(_DWORD *this)
{
  bool v2; // zf
  const char *v3; // ecx
  int v4; // eax
  char *v6; // [esp-4h] [ebp-8h]

  v2 = this[264] == 0;
  *this = &CFuncTank::`vftable';
  if ( !v2 && (this[62] & 0x10000) != 0 )
  {
    v3 = (const char *)this[264];
    if ( !v3 )
      v3 = String;
    v6 = (char *)v3;
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023AF30(v4, 6, v6);
  }
  sub_1010BB10(this + 336);
  sub_1010BB10(this + 330);
  sub_1010BB10(this + 324);
  sub_1010BB10(this + 318);
  sub_1010BB10(this + 312);
  sub_1010BB10(this + 306);
  sub_1010BB10(this + 300);
  sub_1010BB10(this + 294);
  sub_1010BB10(this + 288);
  return sub_100DF1D0(this);
}
