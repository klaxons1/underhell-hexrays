int __thiscall sub_10011710(_DWORD *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  int result; // eax
  unsigned int v6; // ecx
  int *v7; // edx
  unsigned int v8; // ecx
  int v9; // esi

  v2 = this[845];
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[845] & 0xFFF) + 4);
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 512))(*v3) )
          return v4;
      }
    }
  }
  v6 = this[281];
  result = 0;
  if ( v6 != -1 )
  {
    v7 = (int *)((char *)off_103DCD74 + 16 * (this[281] & 0xFFF) + 4);
    v8 = v6 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 2) == v8 )
    {
      if ( *v7 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 2) == v8
          && (v9 = *v7) != 0
          && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 512))(v9) )
        {
          return v9;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
