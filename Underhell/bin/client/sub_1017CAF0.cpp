int __thiscall sub_1017CAF0(int this, int a2, int a3)
{
  int v4; // ecx
  int (__thiscall *v5)(int, const char *, char *, _DWORD); // edx
  int result; // eax

  v4 = a3;
  *(_DWORD *)(this + 4) = a2;
  v5 = *(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v4 + 44);
  HIBYTE(a2) = 0;
  result = v5(v4, "$USINGPIXELSHADER", (char *)&a2 + 3, 0);
  *(_BYTE *)(this + 76) = HIBYTE(a2)
                       && result
                       && (result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 104))(result)) != 0;
  return result;
}
