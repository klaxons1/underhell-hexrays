int sub_1002A970()
{
  int result; // eax

  result = dword_104037F8;
  dword_103D7BC0 = -1;
  if ( dword_104037F8 )
  {
    result = Msg("%d entities in bone setup array. Should have been cleaned up by now\n", dword_104037F8);
    dword_104037F8 = 0;
  }
  return result;
}
