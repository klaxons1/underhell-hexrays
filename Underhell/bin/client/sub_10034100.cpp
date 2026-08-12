char __cdecl sub_10034100(char a1)
{
  char result; // al

  result = ThreadInMainThread();
  if ( result )
  {
    result = a1 != 0;
    byte_103D89C2 = a1 != 0;
  }
  return result;
}
