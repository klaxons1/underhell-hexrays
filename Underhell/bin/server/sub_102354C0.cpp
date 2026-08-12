int __thiscall sub_102354C0(int this, int a2)
{
  *(_BYTE *)(this + 76) &= ~1u;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_WORD *)(this + 18) = 0;
  *(_DWORD *)(this + 8) = a2;
  return sub_1024D8C0(&unk_106B3290, this + 4);
}
