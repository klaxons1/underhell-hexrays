_DWORD *__thiscall sub_1025DC00(_DWORD *this, int a2, const char *a3)
{
  int v4; // eax
  int (__thiscall ***v5)(_DWORD); // eax
  int (__thiscall ***v6)(void *, _DWORD, int, int, int, int); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  *this = &vgui::Tooltip::`vftable';
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  if ( !sub_10237C80(dword_103FD3B0) )
  {
    v4 = sub_100DDA40(944);
    if ( v4 )
      v5 = (int (__thiscall ***)(_DWORD))sub_10256110(v4, 0, "tooltip");
    else
      v5 = 0;
    sub_102393F0(dword_103FD3B0, v5);
  }
  ++dword_1047FB00;
  v6 = (int (__thiscall ***)(void *, _DWORD, int, int, int, int))sub_10237C80(dword_103FD3B0);
  sub_10237000(v6, 0, 1);
  v7 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 524))(v7, 0);
  v8 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 520))(v8, 0);
  sub_1025DAD0((int)this, a3);
  v9 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 768))(v9, this[1]);
  v10 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 920))(v10, 0);
  v11 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 936))(v11, 1);
  v12 = sub_10237C80(dword_103FD3B0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 124))(v12, 0);
  *((_BYTE *)this + 32) &= 0xF8u;
  this[6] = 0;
  this[7] = 500;
  return this;
}
