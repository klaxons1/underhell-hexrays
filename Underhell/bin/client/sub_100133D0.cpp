unsigned int __thiscall sub_100133D0(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // [esp-Ch] [ebp-10h]

  result = this[1069];
  if ( result != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1069] & 0xFFF) + 4);
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*this + 788))(this)
          || (v4 = (*(int (__thiscall **)(_DWORD *))(*this + 788))(this),
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 888))(v4),
              (_BYTE)result) )
        {
          v5 = this[1069];
          if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[1069] & 0xFFF) + 2) != this[1069] >> 12 )
            v6 = 0;
          else
            v6 = *((_DWORD *)off_103DCD74 + 4 * (this[1069] & 0xFFF) + 1);
          if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[1069] & 0xFFF) + 2) != this[1069] >> 12 )
            v7 = 0;
          else
            v7 = *((_DWORD *)off_103DCD74 + 4 * (this[1069] & 0xFFF) + 1);
          v8 = *this;
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 764))(v6);
          v9 = sub_10034D90(v7);
          return (*(int (__thiscall **)(_DWORD *, int, int))(v8 + 944))(this, v9, v10);
        }
      }
    }
  }
  return result;
}
