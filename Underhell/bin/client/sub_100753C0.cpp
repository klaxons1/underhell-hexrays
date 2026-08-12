int __stdcall sub_100753C0(int a1, float a2, int a3)
{
  int v3; // esi
  char v5; // [esp+Fh] [ebp-1h] BYREF

  sub_1002E560(&v5, 1, 0);
  v3 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  (*(void (__stdcall **)(int, _DWORD, int))(*off_103ED0D8 + 36))(a1, LODWORD(a2), a3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  return sub_1002B550();
}
