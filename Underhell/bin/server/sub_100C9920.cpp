void sub_100C9920()
{
  int i; // esi
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int j; // edx

  if ( !dword_106966F4 )
  {
    dword_106966F4 = sub_10184390(104);
    for ( i = 0; i < 104; i += 4 )
    {
      v1 = (_DWORD *)sub_10184390(416);
      if ( v1 )
      {
        v2 = v1;
        for ( j = 25; j >= 0; --j )
        {
          *v2 = -1;
          v2 += 4;
        }
      }
      else
      {
        v1 = 0;
      }
      *(_DWORD *)(i + dword_106966F4) = v1;
    }
  }
}
