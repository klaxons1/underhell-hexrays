int (__cdecl *_cfltcvt_init_21())(int, char *Str, int, int, size_t Size, int)
{
  int (__cdecl *result)(int, char *, int, int, size_t, int); // eax

  result = _cfltcvt;
  off_1068EA20[0] = (void (__noreturn *)())_cfltcvt;
  off_1068EA24[0] = (void (__noreturn *)())_cropzeros;
  off_1068EA28[0] = (void (__noreturn *)())_fassign;
  off_1068EA2C[0] = (void (__noreturn *)())_forcdecpt;
  off_1068EA30[0] = (void (__noreturn *)())_positive;
  off_1068EA34[0] = (void (__noreturn *)())_cfltcvt;
  off_1068EA38 = _cfltcvt_l;
  off_1068EA3C = _fassign_l;
  off_1068EA40 = _cropzeros_l;
  off_1068EA44 = _forcdecpt_l;
  return result;
}
