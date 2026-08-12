int sub_10131D80()
{
  int result; // eax

  if ( (dword_10439600 & 1) != 0 )
    return dword_104395FC;
  dword_10439600 |= 1u;
  result = sub_10242540("ImageButton");
  dword_104395FC = result;
  return result;
}
