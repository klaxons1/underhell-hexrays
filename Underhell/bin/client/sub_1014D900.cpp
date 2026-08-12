bool __thiscall sub_1014D900(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  bool v6; // zf
  int v8; // eax

  v3 = a2;
  v5 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
         a2,
         "$CHEAPWATERSTARTDISTANCE",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  this[1] = v5;
  if ( v6 )
    return 0;
  v8 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
         v3,
         "$CHEAPWATERENDDISTANCE",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  this[2] = v8;
  return !v6;
}
