int printf(const char *const Format, ...)
{
  int v2; // eax
  FILE *v3; // eax
  int v4; // edi
  FILE *v5; // eax
  FILE *v6; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+38h] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v2 = ((int (*)(void))sub_1029A01C)();
    _lock_file2(1, v2 + 32);
    v3 = (FILE *)((int (*)(void))sub_1029A01C)();
    v4 = _stbuf(v3 + 1);
    v5 = (FILE *)((int (*)(void))sub_1029A01C)();
    v8 = _output_l(v5 + 1, (int)Format, 0, (int)va);
    v6 = (FILE *)((int (*)(void))sub_1029A01C)();
    _ftbuf(v4, v6 + 1);
    v7 = sub_1029A01C(271105432);
    _unlock_file2(1, v7 + 32);
    return v8;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}
