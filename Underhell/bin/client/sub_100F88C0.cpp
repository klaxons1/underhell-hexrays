void __cdecl sub_100F88C0(int a1)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // [esp+Ch] [ebp+8h]

  if ( (*(_BYTE *)(a1 + 1132) & 1) != 0 )
  {
    if ( dword_10435FEC[0] )
    {
      v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FEC[0] + 4))(dword_10435FEC[0], a1);
      v6 = v2;
      if ( v2 )
      {
        v3 = *(_DWORD **)(v2 + 4);
        if ( v3 )
        {
          while ( v3 != (_DWORD *)v2 )
          {
            v4 = (_DWORD *)v3[1];
            if ( *v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v3 & 0xFFF) + 2) != *v3 >> 12 )
              v5 = 0;
            else
              v5 = *((_DWORD *)off_103DCD74 + 4 * (*v3 & 0xFFF) + 1);
            sub_100F8800(a1, v5);
            --dword_10435EFC;
            sub_1022FD10(v3);
            v3 = v4;
            if ( !v4 )
              break;
            v2 = v6;
          }
        }
        if ( (*(_BYTE *)(a1 + 1132) & 1) != 0 )
        {
          if ( dword_10435FEC[0] )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10435FEC[0] + 12))(dword_10435FEC[0], a1);
          *(_DWORD *)(a1 + 1132) &= ~1u;
        }
      }
    }
  }
}
