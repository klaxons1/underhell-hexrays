int __thiscall sub_1025F4C0(int this)
{
  int v2; // edi
  int v3; // eax

  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 952) + 768))(
    *(_DWORD *)(this + 952),
    this,
    *(_DWORD *)(this + 964),
    *(_DWORD *)(this + 968),
    0);
  v2 = **(_DWORD **)(this + 952);
  v3 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  (*(void (__thiscall **)(_DWORD, int))(v2 + 904))(*(_DWORD *)(this + 952), v3);
  return sub_1026C7A0(*(_DWORD *)(this + 952));
}
