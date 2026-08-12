unsigned int __thiscall sub_1019FA50(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int result; // eax

  sub_1002F9F0(this, a2);
  v3 = *(_DWORD *)(this + 1964);
  if ( v3 == -1
    || (result = v3 >> 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1964) & 0xFFF) + 2) != result)
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1964) & 0xFFF) + 1) )
  {
    result = *(_DWORD *)(this + 1968);
    if ( result != -1 )
    {
      result >>= 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1968) & 0xFFF) + 2) == result )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1968) & 0xFFF) + 1) )
          *(_BYTE *)(this + 2054) = 0;
      }
    }
  }
  return result;
}
