int __thiscall sub_100384E0(int this, int a2)
{
  int v2; // edi
  int *v3; // esi
  int *v4; // ecx
  int result; // eax
  int v6; // edi
  int *v7; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  v3 = (int *)(this + 3604);
  if ( *(_DWORD *)(this + 3604) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 3604);
    }
    *v3 = v2;
  }
  result = *v3;
  v6 = result * result;
  if ( result != result * result )
  {
    result = (int)(v3 - 901);
    if ( *((_BYTE *)v3 - 3520) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v3 = v6;
    }
    else
    {
      v7 = *(int **)(result + 24);
      if ( v7 )
        result = sub_100194B0(v7, 3604);
      *v3 = v6;
    }
  }
  return result;
}
