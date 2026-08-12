void __cdecl sub_101C5DE0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // ecx

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 764) & 1) != 0 )
    {
      if ( dword_106BA7CC[0] )
      {
        v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7CC[0] + 4))(dword_106BA7CC[0], a2);
        v3 = v2;
        if ( v2 )
        {
          v4 = *(_DWORD **)(v2 + 4);
          if ( v4 != (_DWORD *)v2 )
          {
            while ( 1 )
            {
              v5 = *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12
                 ? 0
                 : off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              if ( v5 == a1 )
                break;
              v4 = (_DWORD *)v4[1];
              if ( v4 == (_DWORD *)v2 )
                return;
            }
            sub_101C4F30(a2, v4);
            if ( *(_DWORD *)(v3 + 4) == v3 && *(_DWORD *)(v3 + 8) == v3 && (*(_BYTE *)(a2 + 764) & 1) != 0 )
            {
              if ( dword_106BA7CC[0] )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7CC[0] + 12))(dword_106BA7CC[0], a2);
              *(_DWORD *)(a2 + 764) &= ~1u;
            }
          }
        }
      }
    }
  }
}
