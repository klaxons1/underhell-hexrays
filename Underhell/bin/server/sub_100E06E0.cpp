void __thiscall sub_100E06E0(int this, char a2)
{
  _BYTE *v2; // esi
  int *v3; // ecx

  v2 = (_BYTE *)(this + 605);
  if ( a2 != *(_BYTE *)(this + 605) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = a2;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 605);
      *v2 = a2;
    }
  }
}
