char __cdecl sub_10034140(char a1)
{
  char result; // al
  int v2; // ecx

  result = ThreadInMainThread();
  if ( result )
  {
    result = word_10404B64;
    if ( (unsigned __int16)word_10404B64 < 8u )
    {
      v2 = (unsigned __int16)word_10404B64++;
      result = a1;
      byte_10404B50[v2] = byte_103D89C3;
      byte_103D89C3 = a1;
    }
  }
  return result;
}
