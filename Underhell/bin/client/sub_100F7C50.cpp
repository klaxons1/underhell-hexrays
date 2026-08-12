void __cdecl sub_100F7C50(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 1132) & 2) != 0 )
    {
      if ( dword_10435FF0 )
      {
        v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 4))(dword_10435FF0, a2);
        v3 = (_DWORD *)v2;
        if ( v2 )
        {
          v4 = *(_DWORD **)(v2 + 8);
          if ( v4 != v3 )
          {
            while ( *v4 != a1 )
            {
              v4 = (_DWORD *)v4[2];
              if ( v4 == v3 )
                return;
            }
            sub_100F7560(a2, (int)v4);
            if ( byte_103E1B48 && (_DWORD *)v3[2] == v3 && (_DWORD *)v3[3] == v3 && (*(_DWORD *)(a2 + 1132) & 2) != 0 )
            {
              if ( dword_10435FF0 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 12))(dword_10435FF0, a2);
              *(_DWORD *)(a2 + 1132) &= ~2u;
            }
          }
        }
      }
    }
  }
}
