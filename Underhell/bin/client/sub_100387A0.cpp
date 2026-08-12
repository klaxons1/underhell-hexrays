int __thiscall sub_100387A0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 52))(this);
  v4 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 8))(a2, this, v3);
  sub_101EDA20(this + 125, 3, this + 165);
  v5 = this[122];
  if ( v5 != -1 )
  {
    v6 = v5 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[122] & 0xFFF) + 2) == v6 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[122] & 0xFFF) + 1) )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[122] & 0xFFF) + 2) == v6 )
        {
          sub_100F7DF0(this);
          return v4;
        }
        sub_100F7DF0(this);
      }
    }
  }
  return v4;
}
