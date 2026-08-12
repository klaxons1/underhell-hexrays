int __thiscall sub_1026AE60(int this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 228) + 124))(*(_DWORD *)(this + 228), 0);
  *(_BYTE *)(this + 348) &= ~1u;
  return result;
}
