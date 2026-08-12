int __usercall sub_104179C0@<eax>(
        float a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        char a10,
        int a11)
{
  _DWORD *v11; // eax
  int v12; // edi
  int *v13; // ecx
  int *v14; // ecx
  int result; // eax
  int *v16; // ecx

  v11 = sub_10417750(a1, *(float *)&a2, a3, a4, *(float *)&a5, a6, a7, a8, a9);
  v12 = (int)v11;
  if ( a10 && v11[535] != a11 )
  {
    if ( *((_BYTE *)v11 + 84) )
    {
      *((_BYTE *)v11 + 88) |= 1u;
    }
    else
    {
      v13 = (int *)v11[6];
      if ( v13 )
        sub_100194B0(v13, 2140);
    }
    *(_DWORD *)(v12 + 2140) = a11;
  }
  if ( !v12 )
    return v12;
  if ( *(_BYTE *)(v12 + 2135) != 1 )
  {
    if ( *(_BYTE *)(v12 + 84) )
    {
      *(_BYTE *)(v12 + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(v12 + 24);
      if ( v14 )
        sub_100194B0(v14, 2135);
    }
    *(_BYTE *)(v12 + 2135) = 1;
  }
  result = v12;
  if ( a10 != *(_BYTE *)(v12 + 2136) )
  {
    if ( *(_BYTE *)(v12 + 84) )
    {
      *(_BYTE *)(v12 + 88) |= 1u;
      *(_BYTE *)(v12 + 2136) = a10;
      return result;
    }
    v16 = *(int **)(v12 + 24);
    if ( v16 )
      sub_100194B0(v16, 2136);
    *(_BYTE *)(v12 + 2136) = a10;
    return v12;
  }
  return result;
}
