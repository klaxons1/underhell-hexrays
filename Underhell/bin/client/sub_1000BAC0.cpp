int __thiscall sub_1000BAC0(_DWORD *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi

  v1 = this[490];
  if ( v1 != -1
    && (v2 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4), v2[1] == v1 >> 12)
    && (v3 = *v2) != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 512))(*v2) )
  {
    return v3;
  }
  else
  {
    return 0;
  }
}
