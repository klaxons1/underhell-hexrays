void __thiscall sub_100351D0(int this, int a2)
{
  _BYTE *v2; // esi
  int *v3; // ecx

  v2 = (_BYTE *)(this + 3600);
  if ( *(_BYTE *)(this + 3600) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = 1;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 3600);
      *v2 = 1;
    }
  }
}
