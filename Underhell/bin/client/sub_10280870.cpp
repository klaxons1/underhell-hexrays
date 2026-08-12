int __thiscall sub_10280870(_DWORD *this)
{
  int i; // edi
  int v3; // ebx
  _BYTE *v4; // eax
  int v5; // eax
  int j; // edi
  int v7; // ecx

  for ( i = 0; i < this[32]; ++i )
  {
    v3 = 4 * i;
    v4 = (_BYTE *)sub_10237C80((_DWORD *)(4 * i + this[29]));
    if ( sub_102370C0(v4) )
    {
      v5 = sub_10237C80((_DWORD *)(v3 + this[29]));
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 120))(v5, 1);
      if ( this[32] - i - 1 > 0 )
        memcpy((void *)(v3 + this[29]), (const void *)(v3 + this[29] + 4), 4 * (this[32] - i - 1));
      --this[32];
      --i;
    }
  }
  for ( j = 0; j < this[22]; ++j )
  {
    if ( !sub_10237C80((_DWORD *)(4 * j + this[19])) )
    {
      if ( this[22] - j - 1 > 0 )
        memcpy((void *)(4 * j + this[19]), (const void *)(4 * j + this[19] + 4), 4 * (this[22] - j - 1));
      --this[22];
      --j;
    }
  }
  v7 = this[27];
  this[18] = v7;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v7 + 244))(v7, 0, 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[27] + 16))(this[27]);
}
