char __thiscall sub_10011320(int *this, int a2, float a3)
{
  double v3; // st7
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  char result; // al

  v3 = a3;
  if ( -1.0 == a3 )
    v5 = -1;
  else
    v5 = (int)(v3 / *((float *)off_103DC81C + 7) + 0.5);
  if ( a2 >= 0 )
  {
    *(_DWORD *)(this[49] + 32 * a2 + 20) = v5;
  }
  else
  {
    if ( v3 == -1.0 )
      v6 = -1;
    else
      v6 = (int)(v3 / *((float *)off_103DC81C + 7) + 0.5);
    v7 = this[78];
    this[31] = v6;
    if ( (v7 & 0x400000) != 0 )
    {
      if ( v6 != -1 )
      {
        this[78] = v7 & 0xFFBFFFFF;
        goto LABEL_16;
      }
    }
    else if ( v6 != -1 )
    {
      goto LABEL_16;
    }
    if ( (v7 & 0x400000) == 0 && !sub_1000F310(this) )
      this[78] = v7 | 0x400000;
  }
LABEL_16:
  v8 = this[78];
  result = (v8 & 0x400000) != 0;
  if ( (v8 & 0x400000) != 0 )
  {
    if ( v5 != -1 )
    {
      this[78] = v8 & 0xFFBFFFFF;
      return result;
    }
  }
  else if ( v5 != -1 )
  {
    return result;
  }
  if ( (this[78] & 0x400000) == 0 )
  {
    result = sub_1000F310(this);
    if ( !result )
      this[78] = v8 | 0x400000;
  }
  return result;
}
