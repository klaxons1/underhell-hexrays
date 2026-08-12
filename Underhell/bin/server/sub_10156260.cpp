void sub_10156260()
{
  int i; // ebx
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( byte_106B3251 )
  {
    for ( i = dword_106B3494 - 1; i >= 0; --i )
    {
      v1 = *(_DWORD *)(dword_106B3488 + 4 * i);
      if ( v1 != -1 )
      {
        v2 = &off_1061BE18[4 * (*(_DWORD *)(dword_106B3488 + 4 * i) & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*(_DWORD *)(dword_106B3488 + 4 * i) & 0xFFF) + 2] == v1 >> 12 )
        {
          v3 = *v2;
          if ( *v2 )
          {
            if ( !sub_100D62D0((_DWORD *)*v2) )
            {
              v4 = dword_10700AC8;
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
              (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 184))(v3);
              (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
            }
          }
        }
      }
    }
    v5 = dword_106B3488;
    dword_106B3494 = 0;
    if ( dword_106B3490 >= 0 )
    {
      if ( dword_106B3488 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106B3488);
        v5 = 0;
        dword_106B3488 = 0;
      }
      dword_106B348C = 0;
    }
    dword_106B3498 = v5;
    sub_101700A0();
    byte_106B3251 = 0;
    sub_1012CE60();
    sub_10155440(0, 0, 0);
    sub_100E8660(0);
  }
}
