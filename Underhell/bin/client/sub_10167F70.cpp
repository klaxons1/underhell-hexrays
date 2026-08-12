int __thiscall sub_10167F70(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int v3; // eax

  v2 = this[11];
  if ( v2 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[11] & 0xFFF) + 2) != v2 >> 12 )
    v3 = 0;
  else
    v3 = *((_DWORD *)off_103DCD74 + 4 * (this[11] & 0xFFF) + 1);
  return ((int (__thiscall *)(void ***, _DWORD *, _DWORD *, float *, _DWORD, _DWORD, int, _DWORD, _DWORD))(*off_103E9C2C)[30])(
           off_103E9C2C,
           this + 3,
           this + 6,
           &flt_10459240,
           this[9],
           this[10],
           v3,
           0,
           0);
}
