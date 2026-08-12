void __thiscall sub_10128880(int this)
{
  int *v2; // ecx

  sub_102467A0();
  if ( *(_BYTE *)(this + 113) != 5 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 113);
    }
    *(_BYTE *)(this + 113) = 5;
  }
  sub_100C35E0((_BYTE *)(this + 116), 255, 255, 255);
}
