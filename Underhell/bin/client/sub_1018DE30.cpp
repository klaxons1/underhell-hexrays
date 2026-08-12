char __thiscall sub_1018DE30(int this, int a2, int a3)
{
  bool v4; // zf
  char result; // al

  *(_DWORD *)(this + 4) = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
                            a2,
                            "$alpha",
                            (char *)&a2 + 3,
                            0);
  v4 = sub_1022A800("$fadeout", 0) == 0;
  result = HIBYTE(a2);
  *(_BYTE *)(this + 8) = !v4;
  return result;
}
