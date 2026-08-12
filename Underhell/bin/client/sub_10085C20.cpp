char __thiscall sub_10085C20(_DWORD *this, unsigned __int16 a2, int a3)
{
  int v3; // esi
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // eax
  _DWORD *v10; // esi
  unsigned int v11; // eax
  _DWORD *v12; // eax

  v3 = this[9] + 168 * a2;
  v4 = *(_DWORD *)(v3 + 160);
  if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 160) & 0xFFF) + 2) != v4 >> 12 )
    v5 = 0;
  else
    v5 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 160) & 0xFFF) + 1);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5) == a3 )
    return 1;
  v7 = *(_DWORD *)(v3 + 160);
  if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) != v7 >> 12 )
    v8 = 0;
  else
    v8 = *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 1);
  v9 = *(_DWORD *)(v8 + 328);
  if ( v9 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 2) != v9 >> 12 )
    v10 = 0;
  else
    v10 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 1);
  if ( v10 )
  {
    while ( (*(int (__thiscall **)(_DWORD *))(*v10 + 20))(v10) != a3 )
    {
      v11 = v10[83];
      if ( v11 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v10[83] & 0xFFF) + 2) != v11 >> 12 )
        v12 = 0;
      else
        v12 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v10[83] & 0xFFF) + 1);
      v10 = v12;
      if ( !v12 )
        return 0;
    }
    return 1;
  }
  return 0;
}
