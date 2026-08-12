int __thiscall sub_1022B0E0(int this, int a2, char *Str, const char *Src)
{
  int v5; // eax

  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_WORD *)(this + 16) = 0;
  *(_WORD *)(this + 18) = 0;
  v5 = KeyValuesSystem();
  *(_DWORD *)this = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 12))(v5, a2, 1);
  sub_1022ABA0((_DWORD *)this, Str, Src);
  return this;
}
