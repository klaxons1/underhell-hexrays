void __thiscall sub_1006FA60(_DWORD *this, int a2)
{
  int v3; // eax
  int i; // edi
  unsigned int v5; // eax
  int v6; // eax

  if ( (this[212] & 1) == 0 )
  {
    sub_1012D950(this + 200);
    v3 = this[212];
    if ( (v3 & 1) != 0 && (v3 & 2) != 0 )
    {
      sub_1006DCB0(this);
    }
    else
    {
      sub_1006F910(this);
      this[212] |= 2u;
    }
    this[212] |= 1u;
    for ( i = 0; i < this[209]; ++i )
    {
      v5 = *(_DWORD *)(this[206] + 4 * i);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 1];
      (*(void (__thiscall **)(_DWORD *, int))(*this + 732))(this, v6);
    }
  }
}
