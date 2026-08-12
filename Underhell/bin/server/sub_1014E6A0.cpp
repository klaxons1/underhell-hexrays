void __thiscall sub_1014E6A0(int this, int a2)
{
  int *v2; // esi
  int v3; // edi
  int *v4; // ecx

  v2 = (int *)(this + 836);
  if ( (*(_BYTE *)(this + 836) & 1) == 0 )
  {
    v3 = *v2 | 1;
    if ( *v2 != v3 )
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
          sub_100194B0(v4, 836);
        *v2 = v3;
      }
    }
  }
}
