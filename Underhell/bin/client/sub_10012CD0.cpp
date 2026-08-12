bool __thiscall sub_10012CD0(_DWORD *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // ecx
  bool result; // al

  v1 = this[1032];
  result = v1 != -1
        && (v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1032] & 0xFFF) + 4), v2[1] == v1 >> 12)
        && *v2 != 0;
  return result;
}
