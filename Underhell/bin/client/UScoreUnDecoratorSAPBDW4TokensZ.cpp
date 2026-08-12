int __cdecl UnDecorator::UScore(int a1)
{
  int result; // eax

  result = (int)*(&off_103B6788 + a1);
  if ( (dword_10482870 & 1) != 0 )
    result += 2;
  return result;
}
