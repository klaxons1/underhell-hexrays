int *__stdcall sub_101F6F30(void *Src)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)sub_102AA770(Src);
  if ( v1 )
    return sub_101F6B90(v1);
  if ( (dword_10465640 & 1) == 0 )
  {
    dword_10465640 |= 1u;
    dword_1046562C = 0;
    dword_10465630 = 0;
    dword_10465634 = 0;
    dword_10465638 = 0;
    dword_1046563C = 0;
    atexit(sub_102CE510);
  }
  return &dword_1046562C;
}
