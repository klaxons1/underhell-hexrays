char __thiscall sub_1013DD50(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax

  v2 = 0;
  v3 = this + 219;
  if ( this[213] )
  {
    while ( 1 )
    {
      if ( *v3 != -1 )
      {
        v8 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        v9 = *v3 >> 12;
        if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v9 )
        {
          if ( *v8 )
          {
            v10 = off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v9 ? *v8 : 0;
            if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 244))(v10, a2) )
              break;
          }
        }
      }
      ++v2;
      ++v3;
      if ( v2 >= 5 )
        return 0;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      if ( *v3 != -1 )
      {
        v4 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        v5 = *v3 >> 12;
        if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 ? *v4 : 0;
            if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 244))(v6, a2) )
              break;
          }
        }
      }
      ++v2;
      ++v3;
      if ( v2 >= 5 )
        return 1;
    }
    return 0;
  }
}
