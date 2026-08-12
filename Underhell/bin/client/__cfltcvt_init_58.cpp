int (__cdecl *_cfltcvt_init_58())(int, char *Str, int, int, size_t Size, int)
{
  int (__cdecl *result)(int, char *, int, int, size_t, int); // eax

  result = _cfltcvt;
  off_103FDB44[0] = (void (__noreturn *)())_cfltcvt;
  off_103FDB48[0] = (void (__noreturn *)())_cropzeros;
  off_103FDB4C[0] = (void (__noreturn *)())_fassign;
  off_103FDB50[0] = (void (__noreturn *)())_forcdecpt;
  off_103FDB54[0] = (void (__noreturn *)())_positive;
  off_103FDB58[0] = (void (__noreturn *)())_cfltcvt;
  off_103FDB5C = _cfltcvt_l;
  off_103FDB60 = _fassign_l;
  off_103FDB64 = _cropzeros_l;
  off_103FDB68 = _forcdecpt_l;
  return result;
}
