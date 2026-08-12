int __thiscall sub_1026DBB0(int this, _DWORD *a2, int *a3)
{
  int result; // eax

  *a2 = *(_DWORD *)(this + 232) + 2;
  result = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this);
  *a3 = result;
  return result;
}
