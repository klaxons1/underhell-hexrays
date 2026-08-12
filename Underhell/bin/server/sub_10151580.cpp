void __thiscall sub_10151580(int this, int a2)
{
  _BYTE *v2; // esi
  char v3; // bl
  int *v4; // ecx

  v2 = (_BYTE *)(this + 800);
  v3 = *(_BYTE *)(this + 800) == 0;
  if ( v3 != *(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = v3;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 800);
      *v2 = v3;
    }
  }
}
