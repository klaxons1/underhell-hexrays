__int16 __thiscall sub_100EF970(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // ebx
  _DWORD *v9; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 148);
  v9 = this;
  if ( (v2 & 2) == 0 )
  {
    *(_DWORD *)(a2 + 148) = v2 | 2;
    v3 = this[21];
    v4 = 0;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(this[18] + 4 * v4);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 4))(v5, *(_DWORD *)(a2 + 140));
        if ( ++v4 >= v3 )
          break;
        this = v9;
      }
    }
    LOWORD(v2) = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 4))(*(unsigned __int16 *)(a2 + 8));
    v6 = *(_DWORD *)(a2 + 140);
    v7 = *(unsigned __int16 *)(a2 + 136);
    if ( v6 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
      sub_1003A300(v9 + 10, v7);
      LOWORD(v2) = *((_WORD *)v9 + 28);
      *(_WORD *)(v9[10] + 8 * v7 + 6) = v2;
      *((_WORD *)v9 + 28) = v7;
    }
  }
  return v2;
}
