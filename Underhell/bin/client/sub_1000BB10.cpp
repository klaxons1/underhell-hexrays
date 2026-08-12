char __thiscall sub_1000BB10(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edi

  if ( this[508] == -1 && this[509] == -1 || ((*(int (__thiscall **)(_DWORD *))(*this + 1156))(this) & 1) != 0 )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    v3 = this[490];
    if ( v3 != -1
      && (v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (this[490] & 0xFFF) + 2) == v3 >> 12)
      && (v5 = (_DWORD *)*v4) != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(*v5 + 512))(*v4)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 504))(v5) )
    {
      if ( (int)this[510] > 0
        || sub_1000A5F0(v5, this[508])
        || (int)this[511] > 0
        || (v2 = sub_1000A5F0(v5, this[509])) != 0 )
      {
        LOBYTE(v2) = 1;
      }
    }
    else
    {
      LOBYTE(v2) = 0;
    }
  }
  return v2;
}
