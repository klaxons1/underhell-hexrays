char sub_10034180()
{
  char result; // al

  result = ThreadInMainThread();
  if ( result )
  {
    result = word_10404B64;
    if ( word_10404B64 )
    {
      result = byte_10404B50[(unsigned __int16)--word_10404B64];
      byte_103D89C3 = result;
    }
  }
  return result;
}
