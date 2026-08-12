int __thiscall sub_100C9700(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *i; // ebx
  int *v4; // ecx
  int v5; // esi

  v2 = 0;
  for ( i = this + 477; ; ++i )
  {
    if ( *i != -1 )
    {
      v4 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == *i >> 12 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1284))(*v4) == a2
            || (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1288))(v5) == a2 )
          {
            break;
          }
        }
      }
    }
    if ( ++v2 >= 48 )
      return 0;
  }
  return v5;
}
