int __thiscall sub_10249960(int this, int a2, int a3)
{
  int v4; // ecx

  v4 = a3;
  *(_DWORD *)(this + 240) = a2;
  *(_DWORD *)(this + 244) = v4;
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)&a3);
  return sub_1027CD50(a2 - *(_DWORD *)(this + 240));
}
