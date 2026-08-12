char __thiscall sub_1000A200(int this, int a2, int a3)
{
  int v4; // eax
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  int v9; // eax

  v4 = sub_1022B4C0("animatedTextureVar", (int)Locale);
  if ( !v4 )
    return 0;
  v6 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v4, (char *)&a3 + 3, 0);
  v7 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 4) = v6;
  if ( v7 )
    return 0;
  v8 = sub_1022B4C0("animatedTextureFrameNumVar", (int)Locale);
  if ( !v8 )
    return 0;
  v9 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v8, (char *)&a3 + 3, 0);
  v7 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 8) = v9;
  if ( v7 )
    return 0;
  sub_1022A940("animatedTextureFrameRate", 15.0);
  *(float *)(this + 12) = 15.0;
  *(_BYTE *)(this + 16) = sub_1022A800("animationNoWrap", 0) == 0;
  return 1;
}
