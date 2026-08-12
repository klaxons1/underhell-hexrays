void __cdecl sub_101C5B20(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // edx
  int v5; // ecx

  if ( a2 )
  {
    if ( (a2[191] & 2) != 0 )
    {
      if ( dword_106BA7D0 )
      {
        v2 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 4))(dword_106BA7D0, a2);
        v3 = v2;
        if ( v2 )
        {
          v4 = *(_DWORD **)(v2 + 8);
          if ( v4 != (_DWORD *)v2 )
          {
            while ( 1 )
            {
              v5 = *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12
                 ? 0
                 : off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              if ( v5 == a1 )
                break;
              v4 = (_DWORD *)v4[2];
              if ( v4 == (_DWORD *)v2 )
                return;
            }
            sub_101C4C90((int)a2, a2, (int)v4);
            if ( byte_10638738 && *(_DWORD *)(v3 + 8) == v3 && *(_DWORD *)(v3 + 12) == v3 && (a2[191] & 2) != 0 )
            {
              if ( dword_106BA7D0 )
                (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 12))(dword_106BA7D0, a2);
              a2[191] &= ~2u;
            }
          }
        }
      }
    }
  }
}
