unsigned int __thiscall sub_103F3CA0(_BYTE *this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx

  result = sub_10267DA0((int)this, a2);
  if ( this[228] )
  {
    result = (unsigned int)(this - 1484);
    if ( *(this - 1400) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      this[228] = 0;
    }
    else
    {
      v4 = *(int **)(result + 24);
      if ( v4 )
        result = sub_100194B0(v4, 1712);
      this[228] = 0;
    }
  }
  return result;
}
