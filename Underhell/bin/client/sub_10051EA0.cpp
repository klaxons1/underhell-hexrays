bool __thiscall sub_10051EA0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v6; // eax
  bool v7; // zf

  v4 = sub_1022B4C0("textureScrollVar", (int)Locale);
  if ( !v4 )
    return 0;
  v6 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v4, (char *)&a3 + 3, 0);
  v7 = HIBYTE(a3) == 0;
  this[1] = v6;
  return !v7;
}
