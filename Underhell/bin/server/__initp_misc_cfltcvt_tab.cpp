void (__noreturn *_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  void (__noreturn *result)(); // eax

  for ( i = 0; i < 10; ++i )
  {
    result = (void (__noreturn *)())EncodePointer(off_1068EA20[i]);
    off_1068EA20[i] = result;
  }
  return result;
}
