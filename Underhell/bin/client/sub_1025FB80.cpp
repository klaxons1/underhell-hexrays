int __thiscall sub_1025FB80(int this, int a2, int a3)
{
  int v3; // edi

  v3 = a2;
  sub_102565B0((int *)this, a2, a3);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 508))(this);
  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 956), (int)&a3, (int)&a2);
  return sub_10252580((_DWORD *)this, v3 - a3);
}
