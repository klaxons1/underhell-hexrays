int __thiscall sub_100E0C10(int this, int a2)
{
  int *v3; // ecx
  int *v4; // ecx
  char **v5; // eax

  if ( *(_BYTE *)(this + 305) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 305);
    }
    *(_BYTE *)(this + 305) = 0;
  }
  v4 = (int *)a2;
  v5 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v5 = (char **)&a2;
  }
  return sub_100D7D60((_DWORD *)this, *v5, *v4, -1);
}
