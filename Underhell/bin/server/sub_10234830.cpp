unsigned int __cdecl sub_10234830(int a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int result; // eax

  result = (unsigned int)a3;
  if ( a3
    && (result = *a3, *a3 != -1)
    && (result >>= 12, off_1061BE18[4 * (*a3 & 0xFFF) + 2] == result)
    && off_1061BE18[4 * (*a3 & 0xFFF) + 1] )
  {
    result = *a3 & 0xFFF | ((result & 0x3FF) << 11);
    *a4 = result;
  }
  else
  {
    *a4 = 0x1FFFFF;
  }
  return result;
}
