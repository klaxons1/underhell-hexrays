BOOL __thiscall sub_10037870(int this)
{
  unsigned int v1; // eax
  _DWORD *v2; // ecx
  BOOL result; // eax

  result = 0;
  if ( (*(_BYTE *)(this + 112) & 1) != 0 && !*(_BYTE *)(this + 316) )
  {
    v1 = *(_DWORD *)(this + 324);
    if ( v1 != -1 )
    {
      v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4);
      if ( v2[1] == v1 >> 12 )
      {
        if ( *v2 )
          return 1;
      }
    }
  }
  return result;
}
