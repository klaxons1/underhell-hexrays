char __thiscall sub_100E1270(int this, int a2)
{
  int v2; // edx
  char v4; // bl
  int *v5; // ecx
  char result; // al

  v2 = a2;
  if ( *(_DWORD *)(a2 + 24) == 6 )
    v4 = *(_BYTE *)(a2 + 8);
  else
    v4 = 0;
  if ( v4 != *(_BYTE *)(this + 769) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 769);
        v2 = a2;
      }
    }
    *(_BYTE *)(this + 769) = v4;
  }
  if ( *(_DWORD *)(v2 + 24) == 6 )
  {
    result = *(_BYTE *)(v2 + 8);
    *(_BYTE *)(this + 770) = result;
  }
  else
  {
    result = 0;
    *(_BYTE *)(this + 770) = 0;
  }
  return result;
}
