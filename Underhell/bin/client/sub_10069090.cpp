int __stdcall sub_10069090(int a1, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(dword_10411108 + 24);
  sub_1022A940(0, 0.0);
  (*(void (__thiscall **)(int, _DWORD))(v2 + 4))(dword_10411108 + 24, 0.0);
  result = a2;
  *(_BYTE *)(a2 + 22) = 1;
  return result;
}
