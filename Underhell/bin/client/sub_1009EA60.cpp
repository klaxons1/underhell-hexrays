char __thiscall sub_1009EA60(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  bool v6; // zf
  _BYTE *v7; // eax
  int v8; // eax

  if ( !sub_1009E900(this, a2, a3) )
    return 0;
  v4 = sub_1022B4C0("srcVar1", (int)Locale);
  if ( !v4 )
    return 0;
  v5 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)a2 + 44))(a2, v4, (char *)&a3 + 3, 1);
  v6 = HIBYTE(a3) == 0;
  this[3] = v5;
  if ( v6 )
    return 0;
  v7 = (_BYTE *)sub_1022B4C0("srcVar2", (int)Locale);
  if ( v7 && *v7 )
  {
    v8 = (*(int (__thiscall **)(int, _BYTE *, char *, int))(*(_DWORD *)a2 + 44))(a2, v7, (char *)&a3 + 3, 1);
    v6 = HIBYTE(a3) == 0;
    this[4] = v8;
    if ( v6 )
      return 0;
  }
  else
  {
    this[4] = 0;
  }
  return 1;
}
