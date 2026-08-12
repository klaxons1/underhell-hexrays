unsigned int __thiscall sub_1000C380(_DWORD *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // ecx

  result = this[490];
  if ( result != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( v4 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 512))(v4);
        if ( (_BYTE)result )
        {
          if ( this[490] != -1
            && (v5 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4),
                *((_DWORD *)off_103DCD74 + 4 * (this[490] & 0xFFF) + 2) == this[490] >> 12)
            && (v6 = *v5) != 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 512))(*v5) )
          {
            v7 = v6;
          }
          else
          {
            v7 = 0;
          }
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 788))(v7);
          if ( (_DWORD *)result == this )
            return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 912))(this, 0);
        }
      }
    }
  }
  return result;
}
