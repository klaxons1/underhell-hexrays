char __thiscall sub_10083D40(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  bool v6; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v3 = a2;
  v5 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
         a2,
         "$basetexture",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  this[1] = v5;
  if ( v6 )
    return 0;
  v8 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
         v3,
         "$basetextureoffset",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  this[2] = v8;
  if ( v6 )
    return 0;
  v9 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
         v3,
         "$basetexturescale",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  this[3] = v9;
  if ( v6 )
    return 0;
  v10 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
          v3,
          "$basetexturetransform",
          (char *)&a2 + 3,
          0);
  v6 = HIBYTE(a2) == 0;
  this[4] = v10;
  if ( v6 )
    return 0;
  v11 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
          v3,
          "$falloffoffset",
          (char *)&a2 + 3,
          0);
  v6 = HIBYTE(a2) == 0;
  this[5] = v11;
  if ( v6 )
    return 0;
  v12 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
          v3,
          "$falloffdistance",
          (char *)&a2 + 3,
          0);
  v6 = HIBYTE(a2) == 0;
  this[6] = v12;
  if ( v6 )
    return 0;
  this[7] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(
              v3,
              "$falloffamount",
              (char *)&a2 + 3,
              0);
  return HIBYTE(a2);
}
