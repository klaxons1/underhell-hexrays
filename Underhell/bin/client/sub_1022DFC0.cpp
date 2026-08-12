void *__thiscall sub_1022DFC0(void *this)
{
  bool v2; // zf
  void *result; // eax

  v2 = (unsigned __int8)ThreadInMainThread() == 0;
  result = this;
  if ( !v2 )
  {
    ++dword_1047A4B0;
    byte_103FC768 = 0;
  }
  return result;
}
