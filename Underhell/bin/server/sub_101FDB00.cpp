_DWORD *__thiscall sub_101FDB00(_BYTE *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  bool v5; // zf
  int *v6; // ecx

  result = sub_1012BC90(&dword_1069E3E0, 0, "point_camera");
  v4 = result;
  if ( result )
  {
    do
    {
      v5 = *((_BYTE *)v4 + 836) == 0;
      *((_BYTE *)v4 + 845) = 0;
      if ( !v5 )
      {
        if ( *((_BYTE *)v4 + 84) )
        {
          *((_BYTE *)v4 + 88) |= 1u;
        }
        else
        {
          v6 = (int *)v4[6];
          if ( v6 )
            sub_100194B0(v6, 836);
        }
        *((_BYTE *)v4 + 836) = 0;
        sub_100D8500(v4);
      }
      v4 = sub_1012BC90(&dword_1069E3E0, (int)v4, "point_camera");
    }
    while ( v4 );
    result = this;
    this[845] = 1;
  }
  else
  {
    this[845] = 1;
  }
  return result;
}
