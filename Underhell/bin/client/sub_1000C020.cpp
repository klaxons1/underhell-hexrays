int __thiscall sub_1000C020(_DWORD *this, char a2)
{
  unsigned int v3; // eax
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // ebx
  int result; // eax

  v3 = this[490];
  v4 = 0;
  if ( v3 != -1 )
  {
    v5 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
    if ( v5[1] == v3 >> 12 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 512))(*v5)
          && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6) )
        {
          v4 = sub_10045780(this[492]);
        }
      }
    }
  }
  if ( a2 )
  {
    this[28] &= ~0x20u;
    result = sub_10039310(this);
    if ( v4 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 772))(v4, 32);
  }
  else
  {
    result = sub_1000DF30(32);
    if ( v4 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 768))(v4, 32);
  }
  return result;
}
