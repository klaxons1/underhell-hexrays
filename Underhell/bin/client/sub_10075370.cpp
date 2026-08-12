int __stdcall sub_10075370(float a1, int a2)
{
  int v2; // esi
  char v4; // [esp+Fh] [ebp-1h] BYREF

  sub_1002E560(&v4, 1, 0);
  v2 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  (*(void (__stdcall **)(_DWORD, int))(*off_103ED0D8 + 40))(LODWORD(a1), a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return sub_1002B550();
}
