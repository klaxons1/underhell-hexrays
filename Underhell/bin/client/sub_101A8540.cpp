bool __thiscall sub_101A8540(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v3)(int, const char *, char *, _DWORD); // edx
  int v5; // eax
  bool v6; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // [esp+Bh] [ebp-1h] BYREF

  v3 = *(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44);
  v13 = 0;
  v5 = v3(a2, "$FleshEffectCenterRadius1", &v13, 0);
  v6 = v13 == 0;
  this[1] = v5;
  if ( v6 )
    return 0;
  v8 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
         a2,
         "$FleshEffectCenterRadius2",
         &v13,
         0);
  v6 = v13 == 0;
  this[2] = v8;
  if ( v6 )
    return 0;
  v9 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
         a2,
         "$FleshEffectCenterRadius3",
         &v13,
         0);
  v6 = v13 == 0;
  this[3] = v9;
  if ( v6 )
    return 0;
  v10 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
          a2,
          "$FleshEffectCenterRadius4",
          &v13,
          0);
  v6 = v13 == 0;
  this[4] = v10;
  if ( v6 )
    return 0;
  v11 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
          a2,
          "$FleshGlobalOpacity",
          &v13,
          0);
  v6 = v13 == 0;
  this[5] = v11;
  if ( v6 )
    return 0;
  v12 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
          a2,
          "$FleshSubsurfaceTint",
          &v13,
          0);
  v6 = v13 == 0;
  this[6] = v12;
  return !v6;
}
