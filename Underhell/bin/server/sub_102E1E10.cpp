int __thiscall sub_102E1E10(int this, int a2)
{
  int v2; // edi
  int *v3; // esi
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  v3 = (int *)(this + 5044);
  if ( *(_DWORD *)(this + 5044) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 5044);
    }
    *v3 = v2;
  }
  result = *v3;
  if ( *v3 >= 0 )
  {
    if ( result > 20 )
    {
      a2 = 20;
      return (int)sub_102E0260(v3, &a2);
    }
  }
  else
  {
    result = (int)(v3 - 1261);
    if ( *((_BYTE *)v3 - 4960) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v3 = 0;
    }
    else
    {
      v6 = *(int **)(result + 24);
      if ( v6 )
        result = sub_100194B0(v6, 5044);
      *v3 = 0;
    }
  }
  return result;
}
