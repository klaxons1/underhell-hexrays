void __thiscall sub_100C1130(int this)
{
  _BYTE *v1; // esi
  int *v2; // ecx

  v1 = (_BYTE *)(this + 1024);
  if ( *(_BYTE *)(this + 1024) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v1 = 1;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1024);
      *v1 = 1;
    }
  }
}
