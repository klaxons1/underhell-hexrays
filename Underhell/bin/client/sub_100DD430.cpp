char __thiscall sub_100DD430(int this, int a2, int a3)
{
  int v3; // ebx
  _BYTE *v5; // eax
  char result; // al

  v3 = a3;
  *(_DWORD *)(this + 24) = 0;
  v5 = (_BYTE *)sub_1022B4C0("axisVar", (int)Locale);
  if ( v5 && *v5 )
    *(_DWORD *)(this + 24) = (*(int (__thiscall **)(int, _BYTE *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
                               a2,
                               v5,
                               (char *)&a3 + 3,
                               0);
  result = sub_1009EB90((float *)(this + 12), a2, *(float *)&v3, "angle", COERCE_CHAR_(0.0));
  if ( result )
    return sub_1009E900((_DWORD *)this, a2, v3);
  return result;
}
