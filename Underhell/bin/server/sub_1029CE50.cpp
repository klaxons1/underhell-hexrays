char *__thiscall sub_1029CE50(int this)
{
  char *result; // eax

  result = *(char **)(this + 20);
  if ( result != (char *)-1 )
  {
    result = (char *)((unsigned int)result >> 12);
    if ( (char *)off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1] )
        return sub_1029CCC0(this);
    }
  }
  return result;
}
