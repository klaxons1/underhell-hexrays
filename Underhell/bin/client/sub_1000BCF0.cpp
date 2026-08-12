bool __thiscall sub_1000BCF0(int *this)
{
  bool result; // al
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edi

  if ( this[525] >= 1 )
    return 0;
  v3 = this[490];
  result = 0;
  if ( v3 != -1 )
  {
    v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    if ( *((_DWORD *)off_103DCD74 + 4 * (v3 & 0xFFF) + 2) == v3 >> 12 )
    {
      v5 = (_DWORD *)*v4;
      if ( *v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*v5 + 512))(*v4)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 504))(v5)
          && (*(unsigned __int8 (__thiscall **)(int *))(*this + 1184))(this)
          && this[510] < (*(int (__thiscall **)(int *))(*this + 1128))(this) / 2
          && sub_1000A5F0(v5, this[508]) > 0 )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
