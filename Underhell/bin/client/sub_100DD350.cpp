bool __thiscall sub_100DD350(_DWORD *this, int a2, int a3)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char v9; // [esp+Fh] [ebp-1h] BYREF

  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  v4 = (_BYTE *)sub_1022B4C0("centerVar", (int)Locale);
  if ( v4 && *v4 )
    this[3] = (*(int (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v4, &v9, 0);
  v5 = (_BYTE *)sub_1022B4C0("scaleVar", (int)Locale);
  if ( v5 && *v5 )
    this[4] = (*(int (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v5, &v9, 0);
  v6 = (_BYTE *)sub_1022B4C0("rotateVar", (int)Locale);
  if ( v6 && *v6 )
    this[5] = (*(int (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v6, &v9, 0);
  v7 = (_BYTE *)sub_1022B4C0("translateVar", (int)Locale);
  if ( v7 && *v7 )
    this[6] = (*(int (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v7, &v9, 0);
  return sub_1009E900(this, a2, a3);
}
