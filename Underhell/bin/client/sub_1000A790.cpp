char __thiscall sub_1000A790(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax

  if ( !a2 )
    return 0;
  v4 = this[836];
  v5 = this + 836;
  if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 2) != this[836] >> 12 )
    v6 = 0;
  else
    v6 = *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 1);
  if ( v6 != a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 784))(this, a2) )
    {
      if ( *v5 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 2) != *v5 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 1)
        || (v9 = sub_1006BE10(v5), (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v9 + 904))(v9, a2)) )
      {
        *v5 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
        return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 900))(a2);
      }
    }
    return 0;
  }
  if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 2) != this[836] >> 12 )
    v7 = 0;
  else
    v7 = *((_DWORD *)off_103DCD74 + 4 * (this[836] & 0xFFF) + 1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 916))(v7) )
    return 0;
  if ( *v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 2) != *v5 >> 12 )
    return (*(int (**)(void))(MEMORY[0] + 900))();
  v8 = *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 900))(v8);
}
