void __thiscall sub_1027BC70(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx

  *(_BYTE *)(this + 1409) = 0;
  v2 = *(_DWORD *)(this + 1412);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_10403E50(v5);
        v6 = *(_DWORD *)(this + 1412);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1];
        sub_1025FAC0(v7);
        *(_DWORD *)(this + 1412) = -1;
      }
    }
  }
}
