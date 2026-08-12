void __thiscall sub_100C1A10(int this)
{
  _BYTE *v1; // esi
  char v2; // bl
  int *v3; // ecx

  v1 = (_BYTE *)(this + 1025);
  v2 = *(_BYTE *)(this + 1025) == 0;
  if ( v2 != *(_BYTE *)(this + 1025) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v1 = v2;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1025);
      *v1 = v2;
    }
  }
}
