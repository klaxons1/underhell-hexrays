char __thiscall sub_1010E630(int this, int a2, int a3)
{
  float v3; // ebx
  int v5; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = *(float *)&a3;
  v5 = sub_1022B4C0("TextureVar", (int)Locale);
  if ( !v5 )
    return 0;
  v7 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v5, (char *)&a3 + 3, 0);
  v8 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 4) = v7;
  if ( v8 )
    return 0;
  v9 = sub_1022B4C0("TextureFrameNumVar", (int)Locale);
  if ( !v9 )
    return 0;
  v10 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v9, (char *)&a3 + 3, 0);
  v8 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 8) = v10;
  if ( v8 )
    return 0;
  v11 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
          a2,
          "$lighting",
          (char *)&a3 + 3,
          0);
  v8 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 12) = v11;
  if ( v8 )
  {
    Warning("Materials using the pupil proxy must have a field called $lighting which has a value of 0.5!\n");
    return 0;
  }
  sub_1009EB90((float *)(this + 16), a2, v3, "PupilCloseRate", COERCE_CHAR_(0.1));
  sub_1009EB90((float *)(this + 28), a2, v3, "PupilOpenRate", COERCE_CHAR_(0.029999999));
  return 1;
}
