bool __thiscall sub_101AB990(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  bool result; // al

  v2 = *(_DWORD *)(this[1] + 5228);
  result = v2 != -1
        && (v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this[1] + 5228) & 0xFFF) + 4), v3[1] == v2 >> 12)
        && *v3 != 0;
  return result;
}
