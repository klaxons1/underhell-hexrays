char __thiscall sub_1023C660(_DWORD *this)
{
  unsigned int v1; // eax
  bool v2; // zf

  v1 = this[4] & 0xFFFFF;
  if ( v1 > 0x200 )
  {
    if ( (this[4] & 0xFFFFFu) > 0x1000 )
    {
      if ( v1 == 0x2000 )
        return 1;
      v2 = v1 == 0x20000;
    }
    else
    {
      if ( v1 == 4096 || v1 == 1024 )
        return 1;
      v2 = v1 == 2048;
    }
    goto LABEL_16;
  }
  if ( v1 == 512 )
    return 1;
  if ( (this[4] & 0xFFFFFu) > 8 )
  {
    if ( v1 == 16 )
      return 1;
    v2 = v1 == 256;
    goto LABEL_16;
  }
  if ( v1 != 8 )
  {
    if ( (this[4] & 0xFFFFF) == 0 )
      return 0;
    if ( (this[4] & 0xFFFFFu) > 2 )
    {
      v2 = v1 == 4;
LABEL_16:
      if ( !v2 )
        return 0;
    }
  }
  return 1;
}
