bool __thiscall sub_10037760(int this)
{
  unsigned int v1; // eax
  int v2; // edi
  unsigned int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)(this + 340);
  if ( v1 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 340) & 0xFFF) + 2) != v1 >> 12 )
    v2 = 0;
  else
    v2 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 340) & 0xFFF) + 1);
  v3 = *(_DWORD *)(this + 344);
  if ( v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 344) & 0xFFF) + 2) != v3 >> 12 )
    v4 = 0;
  else
    v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 344) & 0xFFF) + 1);
  return v4 != v2 || *(_BYTE *)(this + 319) != *(_BYTE *)(this + 318);
}
