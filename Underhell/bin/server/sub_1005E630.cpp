char __thiscall sub_1005E630(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  char result; // al
  int i; // edi
  unsigned int v8; // eax
  void *v9; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  this[213] = v3;
  if ( v3 >= 6 )
  {
    DevMsg("Invalid aggressiveness value %d\n", v3);
    v4 = this[213];
    if ( v4 >= 0 )
    {
      if ( v4 > 4 )
        this[213] = 4;
    }
    else
    {
      this[213] = 0;
    }
  }
  v5 = this[212];
  if ( (v5 & 1) != 0 && (v5 & 2) != 0 )
  {
    result = sub_1006DCB0(this);
  }
  else
  {
    result = sub_1006F910(this);
    this[212] |= 2u;
  }
  for ( i = 0; i < this[209]; ++i )
  {
    v8 = *(_DWORD *)(this[206] + 4 * i);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = (void *)off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 1];
    result = sub_1005D0C0(v9, &a2);
    if ( result )
      result = (unsigned __int8)sub_1005D7C0((int)this, a2);
  }
  return result;
}
