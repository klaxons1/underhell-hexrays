char sub_100341E0()
{
  bool v0; // zf
  char result; // al

  v0 = (unsigned __int8)ThreadInMainThread() == 0;
  result = 1;
  if ( !v0 )
    return byte_103D89C3;
  return result;
}
