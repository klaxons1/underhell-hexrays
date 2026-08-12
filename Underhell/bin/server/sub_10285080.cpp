void __thiscall sub_10285080(int this)
{
  int *v2; // ecx

  nullsub_4();
  if ( *(_BYTE *)(this + 824) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 824) = 0;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 824);
      *(_BYTE *)(this + 824) = 0;
    }
  }
}
