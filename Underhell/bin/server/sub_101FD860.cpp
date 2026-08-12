bool __thiscall sub_101FD860(int this)
{
  int *v2; // ecx
  bool result; // al

  nullsub_4();
  if ( *(_DWORD *)(this + 840) && *(_BYTE *)(this + 844) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 844);
    }
    *(_BYTE *)(this + 844) = 1;
  }
  result = (*(_BYTE *)(this + 248) & 1) == 0;
  *(_BYTE *)(this + 845) = result;
  return result;
}
