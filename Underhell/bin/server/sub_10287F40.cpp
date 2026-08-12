char __thiscall sub_10287F40(int this)
{
  char result; // al
  int *v3; // ecx
  int *v4; // ecx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  if ( (*(char **)(this + 92) == "env_steamjet" || (result = sub_100D6240((_DWORD *)this, "env_steamjet")) != 0)
    && *(_BYTE *)(this + 828) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 828);
    }
    *(_BYTE *)(this + 828) = 1;
  }
  if ( *(_BYTE *)(this + 829) && *(_DWORD *)(this + 824) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 824) = 1;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 824);
      *(_DWORD *)(this + 824) = 1;
    }
  }
  return result;
}
