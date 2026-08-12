void __thiscall sub_101ABE40(int this)
{
  _BYTE *v1; // esi
  int *v2; // ecx

  v1 = (_BYTE *)(this + 808);
  if ( *(_BYTE *)(this + 808) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v1 = 0;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 808);
      *v1 = 0;
    }
  }
}
