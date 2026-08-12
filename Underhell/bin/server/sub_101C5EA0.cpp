void __cdecl sub_101C5EA0(int a1)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // [esp+Ch] [ebp+8h]

  if ( (*(_BYTE *)(a1 + 764) & 1) != 0 )
  {
    if ( dword_106BA7CC[0] )
    {
      v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7CC[0] + 4))(dword_106BA7CC[0], a1);
      v6 = v2;
      if ( v2 )
      {
        v3 = *(_DWORD **)(v2 + 4);
        if ( v3 )
        {
          while ( v3 != (_DWORD *)v2 )
          {
            v4 = (_DWORD *)v3[1];
            if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
              v5 = 0;
            else
              v5 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
            sub_101C5DE0(a1, v5);
            --dword_106BA694;
            sub_1042FBE0(v3);
            v3 = v4;
            if ( !v4 )
              break;
            v2 = v6;
          }
        }
        if ( (*(_BYTE *)(a1 + 764) & 1) != 0 )
        {
          if ( dword_106BA7CC[0] )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7CC[0] + 12))(dword_106BA7CC[0], a1);
          *(_DWORD *)(a1 + 764) &= ~1u;
        }
      }
    }
  }
}
