char __thiscall sub_1000BFA0(_DWORD *this)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1188))(this) && (int)this[511] > 0 )
    return 1;
  if ( this[490] != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[490] & 0xFFF) + 2) == this[490] >> 12 )
    {
      v4 = (_DWORD *)*v3;
      if ( *v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*v4 + 512))(*v3) && sub_1000A5F0(v4, this[509]) > 0 )
          return 1;
      }
    }
  }
  return 0;
}
