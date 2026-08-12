char __thiscall sub_10011260(int *this, float a2, int a3)
{
  int v4; // edi
  bool v5; // zf
  int v6; // edi
  char result; // al
  int v8; // eax

  if ( -1.0 == a2 )
    v4 = -1;
  else
    v4 = (int)(a2 / *((float *)off_103DC81C + 7) + 0.5);
  if ( a3 )
  {
    v8 = sub_1000F270(this, a3);
    if ( v8 == -1 )
      v8 = sub_100110F0(this, a3);
    *(_DWORD *)(this[49] + 32 * v8 + 20) = v4;
  }
  else
  {
    this[31] = v4;
  }
  v5 = v4 == -1;
  v6 = this[78];
  result = (v6 & 0x400000) != 0;
  if ( (v6 & 0x400000) != 0 )
  {
    if ( !v5 )
    {
      this[78] = v6 & 0xFFBFFFFF;
      return result;
    }
  }
  else if ( !v5 )
  {
    return result;
  }
  if ( (this[78] & 0x400000) == 0 )
  {
    result = sub_1000F310(this);
    if ( !result )
      this[78] = v6 | 0x400000;
  }
  return result;
}
