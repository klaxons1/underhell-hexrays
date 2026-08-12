int sub_1022DFE0()
{
  int result; // eax

  result = ThreadInMainThread();
  if ( (_BYTE)result )
  {
    result = 1;
    if ( !--dword_1047A4B0 )
      byte_103FC768 = 1;
  }
  return result;
}
