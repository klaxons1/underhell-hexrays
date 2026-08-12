char __thiscall sub_101B96F0(int this, int a2, int a3)
{
  int v3; // edi
  int v5; // eax
  bool v6; // zf
  int v8; // eax
  int v9; // eax

  v3 = a2;
  v5 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
         a2,
         "$translucency",
         (char *)&a2 + 3,
         0);
  v6 = HIBYTE(a2) == 0;
  *(_DWORD *)(this + 4) = v5;
  if ( v6 )
    return 0;
  v8 = sub_1022B4C0("textureScrollVar", (int)Locale);
  if ( !v8 )
    return 0;
  v9 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)v3 + 44))(v3, v8, (char *)&a2 + 3, 0);
  v6 = HIBYTE(a2) == 0;
  *(_DWORD *)(this + 8) = v9;
  if ( v6 )
    return 0;
  sub_1022A940("textureScrollRate", 1.0);
  *(float *)(this + 12) = 1.0;
  sub_1022A940("textureScrollAngle", 0.0);
  *(float *)(this + 16) = 0.0;
  return 1;
}
