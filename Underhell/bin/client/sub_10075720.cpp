int sub_10075720()
{
  int v0; // esi
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // edi
  char v5; // al
  int v6; // esi
  void (__thiscall ***v7)(_DWORD, _DWORD); // ecx
  int v9; // [esp+8h] [ebp-4h]

  v0 = dword_1047CA8C;
  v9 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v1 = off_103DCD78;
  v2 = *((unsigned __int16 *)off_103DCD78 + 49202);
  if ( v2 != 0xFFFF )
  {
    do
    {
      v3 = v1[24598];
      v4 = 16 * (unsigned __int16)v2;
      v5 = *(_BYTE *)(v3 + v4 + 8);
      v6 = v4 + v3;
      if ( (v5 & 1) != 0 )
      {
        if ( (v5 & 2) != 0 )
        {
          if ( (v5 & 4) != 0 )
            (***(void (__thiscall ****)(_DWORD, int))v6)(*(_DWORD *)v6, 1);
          *(_BYTE *)(v6 + 8) &= 0xF9u;
        }
        else
        {
          v7 = *(void (__thiscall ****)(_DWORD, _DWORD))v6;
          *(_BYTE *)(v6 + 8) = v5 & 0xFE;
          (**v7)(v7, 0);
        }
      }
      v2 = *(unsigned __int16 *)(v1[24598] + v4 + 14);
    }
    while ( v2 != 0xFFFF );
    v0 = v9;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 104))(v0);
}
