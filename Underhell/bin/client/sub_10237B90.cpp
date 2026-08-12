void __stdcall sub_10237B90(_DWORD *a1)
{
  _DWORD *i; // edi
  int v2; // ebx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+8h] [ebp+4h]

  for ( i = a1; i; i = (_DWORD *)i[3] )
  {
    if ( i[4] )
      break;
    if ( i[3] == 1 )
      i[3] = &off_103FCF04;
    v7 = 0;
    if ( (int)i[1] > 0 )
    {
      v2 = 0;
      do
      {
        v3 = (_DWORD *)(v2 + *i);
        if ( *v3 )
        {
          v4 = KeyValuesSystem();
          v3[13] = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 12))(v4, *v3, 1);
        }
        else
        {
          v3[13] = -1;
        }
        if ( v3[10] )
        {
          v5 = KeyValuesSystem();
          v3[14] = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 12))(v5, v3[10], 1);
        }
        else
        {
          v3[14] = -1;
        }
        if ( v3[12] )
        {
          v6 = KeyValuesSystem();
          v3[15] = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, v3[12], 1);
        }
        else
        {
          v3[15] = -1;
        }
        v2 += 64;
        ++v7;
      }
      while ( v7 < i[1] );
    }
    i[4] = 1;
  }
}
