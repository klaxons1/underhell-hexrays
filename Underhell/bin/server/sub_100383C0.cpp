int __thiscall sub_100383C0(int this, __int16 a2)
{
  int *v4; // ecx

  if ( a2 != *(_WORD *)(this + 114) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_WORD *)(this + 114) = a2;
      return sub_100D8500(this);
    }
    v4 = *(int **)(this + 24);
    if ( v4 )
      sub_100194B0(v4, 114);
    *(_WORD *)(this + 114) = a2;
  }
  return sub_100D8500(this);
}
