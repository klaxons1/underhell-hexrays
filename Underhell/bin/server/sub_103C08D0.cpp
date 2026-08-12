int __thiscall sub_103C08D0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax

  v2 = this[954];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[954] & 0xFFF) + 1];
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
        this[954] = -1;
      }
    }
  }
  v6 = this[953];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[953] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[953] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[953] & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        sub_1025FAC0(v9);
        this[953] = -1;
      }
    }
  }
  v10 = this[952];
  if ( v10 != -1 )
  {
    v11 = &off_1061BE18[4 * (this[952] & 0xFFF) + 1];
    v12 = v10 >> 12;
    if ( off_1061BE18[4 * (this[952] & 0xFFF) + 2] == v12 )
    {
      if ( *v11 )
      {
        if ( off_1061BE18[4 * (this[952] & 0xFFF) + 2] == v12 )
          v13 = *v11;
        else
          v13 = 0;
        sub_1025FAC0(v13);
        this[952] = -1;
      }
    }
  }
  return sub_10021F20(this);
}
