char __thiscall sub_1000A8E0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  char result; // al
  int v6; // edi
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // [esp-Ch] [ebp-10h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 504))(this)
    || (v3 = this[1032], v3 == -1)
    || *((_DWORD *)off_103DCD74 + 4 * (this[1032] & 0xFFF) + 2) != v3 >> 12
    || (v4 = *((_DWORD *)off_103DCD74 + 4 * (this[1032] & 0xFFF) + 1)) == 0
    || !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 332))(v4)
    || (result = sub_10012EB0(this)) != 0 )
  {
    result = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 876))(a2)
      || (v6 = a2[508], v6 != -1)
      && ((v12 = a2[508], v7 = (_DWORD *)sub_101AB1E0(), sub_100082F0(v7, v12) == -2) || this[v6 + 756]) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 896))(a2) )
      {
        v8 = this[836];
        if ( v8 == -1 )
          return 1;
        v9 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[836] & 0xFFF) + 4);
        v10 = v8 >> 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 2) != v10 || !*v9 )
          return 1;
        v11 = *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 2) == v10 ? *v9 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 888))(v11) )
          return 1;
      }
    }
  }
  return result;
}
