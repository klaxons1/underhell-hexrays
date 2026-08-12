int __thiscall sub_1026AE40(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 124))(*(_DWORD *)(this + 228), 1);
  *(_BYTE *)(this + 348) |= 1u;
  return result;
}
