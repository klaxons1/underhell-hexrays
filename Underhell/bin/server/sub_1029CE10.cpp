char *__thiscall sub_1029CE10(_DWORD *this, int a2)
{
  char *result; // eax

  result = (char *)this[5];
  if ( result != (char *)-1 )
  {
    result = (char *)((unsigned int)result >> 12);
    if ( (char *)off_1061BE18[4 * (this[5] & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (this[5] & 0xFFF) + 1] )
        return sub_1029CCC0((int)this);
    }
  }
  return result;
}
