char __thiscall sub_100288D0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // eax
  char *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // ecx

  v3 = this[483];
  if ( v3 != -1 )
  {
    v4 = (char *)off_103DCD74 + 16 * (this[483] & 0xFFF) + 4;
    v5 = v3 >> 12;
    if ( *((_DWORD *)v4 + 1) == v5 )
    {
      if ( *(_DWORD *)v4 )
      {
        if ( *((_DWORD *)v4 + 1) == v5 )
          v6 = *(_DWORD **)v4;
        else
          v6 = 0;
        sub_10027920(v6, a2 + 17);
        a2[9] = a2 + 17;
      }
    }
  }
  v7 = this[482];
  if ( v7 != -1 )
  {
    v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[482] & 0xFFF) + 4);
    v9 = v7 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[482] & 0xFFF) + 2) == v9 )
    {
      if ( *v8 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[482] & 0xFFF) + 2) == v9 )
        {
          a2[10] = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 36))(*v8);
          return 1;
        }
        a2[10] = (*(int (__thiscall **)(_DWORD))(MEMORY[0] + 36))(0);
      }
    }
  }
  return 1;
}
