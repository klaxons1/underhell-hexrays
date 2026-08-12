int sub_10337EB0()
{
  if ( dword_1066E9A8 == -1 || off_1061BE18[4 * (dword_1066E9A8 & 0xFFF) + 2] != (unsigned int)dword_1066E9A8 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (dword_1066E9A8 & 0xFFF) + 1];
}
