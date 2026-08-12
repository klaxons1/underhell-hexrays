char sub_10089790()
{
  char result; // al

  result = *(_DWORD *)(dword_1042C13C + 48) != 0;
  if ( result != byte_1042C608 )
  {
    byte_1042C608 = *(_DWORD *)(dword_1042C13C + 48) != 0;
    return sub_10086FF0(&dword_1042C4C8);
  }
  return result;
}
