int __thiscall sub_10385830(_DWORD *this)
{
  int v1; // eax
  unsigned int v2; // eax

  v1 = this[18];
  if ( v1
    && (v2 = this[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v1 - 1)
                + 2],
        v2 != -1)
    && off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 )
  {
    return off_1061BE18[4 * (v2 & 0xFFF) + 1];
  }
  else
  {
    return 0;
  }
}
