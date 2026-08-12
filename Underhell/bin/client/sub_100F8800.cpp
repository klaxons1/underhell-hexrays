void __cdecl sub_100F8800(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // ecx

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 1132) & 1) != 0 )
    {
      if ( dword_10435FEC[0] )
      {
        v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FEC[0] + 4))(dword_10435FEC[0], a2);
        v3 = v2;
        if ( v2 )
        {
          v4 = *(_DWORD **)(v2 + 4);
          if ( v4 != (_DWORD *)v2 )
          {
            while ( 1 )
            {
              v5 = *v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 2) != *v4 >> 12
                 ? 0
                 : *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 1);
              if ( v5 == a1 )
                break;
              v4 = (_DWORD *)v4[1];
              if ( v4 == (_DWORD *)v2 )
                return;
            }
            sub_100F7F30(a2, v4);
            if ( *(_DWORD *)(v3 + 4) == v3 && *(_DWORD *)(v3 + 8) == v3 && (*(_BYTE *)(a2 + 1132) & 1) != 0 )
            {
              if ( dword_10435FEC[0] )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10435FEC[0] + 12))(dword_10435FEC[0], a2);
              *(_DWORD *)(a2 + 1132) &= ~1u;
            }
          }
        }
      }
    }
  }
}
