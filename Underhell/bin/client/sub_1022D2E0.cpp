int __thiscall sub_1022D2E0(int this, int a2)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  sub_1022CF40((char **)this, *(char **)a2, *(_DWORD *)(a2 + 12));
  return this;
}
