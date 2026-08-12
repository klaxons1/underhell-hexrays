char *__thiscall sub_103B02E0(int this, int a2)
{
  char *result; // eax

  result = *(char **)(this + 3796);
  if ( result != (char *)-1 )
  {
    result = (char *)((unsigned int)result >> 12);
    if ( (char *)off_1061BE18[4 * (*(_DWORD *)(this + 3796) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3796) & 0xFFF) + 1] )
        return sub_10023CB0((char *)this, 73);
    }
  }
  return result;
}
