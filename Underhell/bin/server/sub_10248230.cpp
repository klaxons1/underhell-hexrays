unsigned int __cdecl sub_10248230()
{
  unsigned int result; // eax
  int (__stdcall **v1)(char); // esi
  int *v2; // ecx

  result = dword_1064EDD0;
  if ( dword_1064EDD0 != -1 )
  {
    result = (unsigned int)dword_1064EDD0 >> 12;
    if ( off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] == (unsigned int)dword_1064EDD0 >> 12 )
    {
      if ( off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 1] )
      {
        if ( (int)off_1065C5EC[4] <= 0 )
          v1 = off_1065C5EC[3];
        else
          v1 = 0;
        off_1065C5EC[3] = 0;
        if ( dword_1064EDD0 == -1
          || off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] != (unsigned int)dword_1064EDD0 >> 12 )
        {
          v2 = 0;
        }
        else
        {
          v2 = (int *)off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 1];
        }
        sub_100D9E70(v2, (int)v1, &byte_1064ED80);
        off_1065C5EC[3] = v1;
        return sub_10247FD0();
      }
    }
  }
  return result;
}
