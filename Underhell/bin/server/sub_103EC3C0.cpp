void __thiscall sub_103EC3C0(int this, int a2)
{
  _BYTE *v2; // esi
  char v3; // bl
  int *v4; // ecx

  v2 = (_BYTE *)(this + 1690);
  v3 = *(_BYTE *)(this + 1690) == 0;
  if ( v3 != *(_BYTE *)(this + 1690) )
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
        sub_100194B0(v4, 1690);
      *v2 = v3;
    }
  }
}
