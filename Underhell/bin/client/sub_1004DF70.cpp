int __thiscall sub_1004DF70(_DWORD *this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  int v5; // ecx

  if ( !a2
    || a2 == 1
    && (this[298] == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[298] & 0xFFF) + 2) != this[298] >> 12
      ? (v3 = 0)
      : (v3 = *((_DWORD *)off_103DCD74 + 4 * (this[298] & 0xFFF) + 1)),
        (v4 = this[297], v4 == -1) || *((_DWORD *)off_103DCD74 + 4 * (this[297] & 0xFFF) + 2) != v4 >> 12
      ? (v5 = 0)
      : (v5 = *((_DWORD *)off_103DCD74 + 4 * (this[297] & 0xFFF) + 1)),
        v5 != v3) )
  {
    sub_1004DA40(this - 2);
  }
  return sub_1003CD40(this, a2);
}
