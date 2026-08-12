void __thiscall sub_103C96D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax

  v2 = *(_DWORD *)(this + 5704);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 5704) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        *(_DWORD *)(this + 5704) = -1;
      }
    }
  }
  v6 = *(_DWORD *)(this + 5708);
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        sub_1025FAC0(v9);
        *(_DWORD *)(this + 5708) = -1;
      }
    }
  }
  *(float *)(this + 5688) = 0.0;
}
