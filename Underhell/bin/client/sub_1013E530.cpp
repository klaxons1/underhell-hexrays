bool __thiscall sub_1013E530(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v4)(int, const char *, char *, _DWORD); // eax
  int v5; // eax
  bool v6; // zf
  char v8; // [esp+7h] [ebp-1h] BYREF

  v4 = *(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44);
  v8 = 0;
  v5 = v4(a2, "$MotionBlurInternal", &v8, 0);
  v6 = v8 == 0;
  this[1] = v5;
  return !v6;
}
