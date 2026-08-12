bool sub_10117A00()
{
  return dword_1069C05C != -1
      && off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 2] == (unsigned int)dword_1069C05C >> 12
      && off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 1] != 0;
}
