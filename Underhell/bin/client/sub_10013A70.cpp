void __thiscall sub_10013A70(_DWORD *this)
{
  int i; // edi
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  _BYTE *v5; // ebx
  int j; // edi
  int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  _BYTE *v10; // ebx

  for ( i = this[1073] - 1; i >= 0; --i )
  {
    v3 = *(_DWORD *)(this[1070] + 4 * i);
    if ( v3 != -1
      && (v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this[1070] + 4 * i) & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this[1070] + 4 * i) & 0xFFF) + 2) == v3 >> 12)
      && (v5 = (_BYTE *)*v4) != 0
      && v5[1108] )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 428))(*v4)
        || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC)
        || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 60))(off_103ED0FC) )
      {
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 496))(v5);
      }
    }
    else
    {
      if ( this[1073] - i - 1 > 0 )
        memcpy((void *)(this[1070] + 4 * i), (const void *)(this[1070] + 4 * i + 4), 4 * (this[1073] - i - 1));
      --this[1073];
    }
  }
  for ( j = this[1073] - 1; j >= 0; --j )
  {
    v7 = this[1070];
    v8 = *(_DWORD *)(v7 + 4 * j);
    if ( v8 != -1
      && (v9 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v7 + 4 * j) & 0xFFF) + 4), v9[1] == v8 >> 12)
      && (v10 = (_BYTE *)*v9) != 0
      && v10[1108] )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 428))(*v9)
        || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC)
        || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 60))(off_103ED0FC) )
      {
        if ( (unsigned __int8)sub_100F7090(v10) )
          sub_100F8700(v10);
      }
    }
    else
    {
      if ( this[1073] - j - 1 > 0 )
        memcpy((void *)(this[1070] + 4 * j), (const void *)(this[1070] + 4 * j + 4), 4 * (this[1073] - j - 1));
      --this[1073];
    }
  }
}
