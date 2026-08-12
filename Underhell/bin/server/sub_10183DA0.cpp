int __thiscall sub_10183DA0(int this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // ebx
  _DWORD *v6; // ecx
  int result; // eax
  int *v8; // ecx

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( v4 )
      v5 = v4;
    else
      v5 = (char *)String;
  }
  else
  {
    v5 = (char *)sub_1010D460((int)v3);
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v6 = *(_DWORD **)(this + 24);
    if ( v6 )
    {
      *v6 |= 0x101u;
      *(_WORD *)(sub_10153460(v6) + 2) = 0;
    }
  }
  result = sub_104299C0((char *)(this + 1310), v5, 0xFFu);
  if ( *(_DWORD *)(this + 1600) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1600) = 1;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 1600);
      *(_DWORD *)(this + 1600) = 1;
    }
  }
  return result;
}
