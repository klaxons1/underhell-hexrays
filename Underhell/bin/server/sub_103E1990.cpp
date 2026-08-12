int __thiscall sub_103E1990(int this, int a2)
{
  char v3; // bl
  int *v4; // ecx
  int result; // eax
  int v6; // ebx
  int *v7; // ecx

  if ( *(_DWORD *)(a2 + 24) == 6 )
    v3 = *(_BYTE *)(a2 + 8);
  else
    v3 = 0;
  if ( v3 != *(_BYTE *)(this + 1689) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 1689);
    }
    *(_BYTE *)(this + 1689) = v3;
  }
  result = sub_100C1600(this, 1, *(unsigned __int8 *)(this + 1689));
  if ( *(_BYTE *)(this + 1689) )
  {
    v6 = *(_DWORD *)(dword_106EDE44 + 48);
    if ( *(_DWORD *)(this + 1800) != v6 )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 1800) = v6;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          result = sub_100194B0(v7, 1800);
        *(_DWORD *)(this + 1800) = v6;
      }
    }
  }
  return result;
}
