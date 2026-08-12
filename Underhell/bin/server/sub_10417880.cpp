_DWORD *__usercall sub_10417880@<eax>(
        float a1@<edi>,
        float a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11)
{
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  int *v13; // ecx
  int *v14; // ecx
  _DWORD *result; // eax
  int *v16; // ecx

  if ( a10 )
  {
    v12 = sub_10417750(a1, a2, a3, a4, a5, a6, a7, a8, 360.0);
    v11 = v12;
    if ( v12[535] != a11 )
    {
      if ( *((_BYTE *)v12 + 84) )
      {
        *((_BYTE *)v12 + 88) |= 1u;
      }
      else
      {
        v13 = (int *)v12[6];
        if ( v13 )
          sub_100194B0(v13, 2140);
      }
      v11[535] = a11;
    }
  }
  else
  {
    v11 = sub_10417750(a1, a2, a3, a4, a5, a6, a7, a8, 90.0);
  }
  if ( !v11 )
    return v11;
  if ( *((_BYTE *)v11 + 2135) != 1 )
  {
    if ( *((_BYTE *)v11 + 84) )
    {
      *((_BYTE *)v11 + 88) |= 1u;
    }
    else
    {
      v14 = (int *)v11[6];
      if ( v14 )
        sub_100194B0(v14, 2135);
    }
    *((_BYTE *)v11 + 2135) = 1;
  }
  result = v11;
  if ( a10 != *((_BYTE *)v11 + 2136) )
  {
    if ( *((_BYTE *)v11 + 84) )
    {
      *((_BYTE *)v11 + 88) |= 1u;
      *((_BYTE *)v11 + 2136) = a10;
      return result;
    }
    v16 = (int *)v11[6];
    if ( v16 )
      sub_100194B0(v16, 2136);
    *((_BYTE *)v11 + 2136) = a10;
    return v11;
  }
  return result;
}
