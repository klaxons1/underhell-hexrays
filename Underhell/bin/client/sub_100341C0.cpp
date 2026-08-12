char __cdecl sub_100341C0(char a1)
{
  char result; // al

  result = ThreadInMainThread();
  if ( result )
  {
    result = a1;
    byte_103D89C3 = a1;
  }
  return result;
}
