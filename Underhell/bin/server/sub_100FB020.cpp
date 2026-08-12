void __thiscall sub_100FB020(int this, char a2)
{
  int v2; // esi
  int *v3; // ecx

  v2 = this + 116;
  if ( *(_BYTE *)(this + 119) != a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 119) = a2;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 116);
      *(_BYTE *)(v2 + 3) = a2;
    }
  }
}
