char __thiscall sub_100377D0(int this)
{
  int v2; // edi
  _DWORD *v4; // esi
  unsigned int v5; // eax
  _DWORD *v6; // eax

  v2 = *(_DWORD *)(this + 80);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168) == v2 )
    return 1;
  if ( v2 && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
  {
    if ( *(_WORD *)(this + 118) != 0xFFFF )
      return 1;
    v4 = (_DWORD *)sub_1000EFC0((_DWORD *)this);
    if ( v4 )
    {
      while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 552))(v4) )
      {
        v5 = v4[83];
        if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v4[83] & 0xFFF) + 2) != v5 >> 12 )
          v6 = 0;
        else
          v6 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v4[83] & 0xFFF) + 1);
        v4 = v6;
        if ( !v6 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
