bool __thiscall sub_10251F10(int (__thiscall ***this)(void *, int *, _BYTE *), int a2)
{
  int v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  ((void (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *), int, int *, _BYTE *))(*this)[251])(
    this,
    a2,
    &a2,
    v5);
  v3 = sub_102374C0(this) - 1;
  return v3 > 0 && a2 >= v3;
}
