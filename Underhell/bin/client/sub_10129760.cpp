char __thiscall sub_10129760(int this, int a2, int a3)
{
  float v3; // ebx
  int v5; // eax
  int v7; // eax
  bool v8; // zf

  v3 = *(float *)&a3;
  v5 = sub_1022B4C0("textureScrollVar", (int)Locale);
  if ( !v5 )
    return 0;
  v7 = (*(int (__thiscall **)(int, int, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, v5, (char *)&a3 + 3, 0);
  v8 = HIBYTE(a3) == 0;
  *(_DWORD *)(this + 4) = v7;
  if ( v8 )
    return 0;
  sub_1009EB90((float *)(this + 8), a2, v3, "textureScrollRate", COERCE_CHAR_(1.0));
  sub_1009EB90((float *)(this + 20), a2, v3, "textureScrollAngle", COERCE_CHAR_(0.0));
  sub_1009EB90((float *)(this + 32), a2, v3, "textureScale", COERCE_CHAR_(1.0));
  return 1;
}
