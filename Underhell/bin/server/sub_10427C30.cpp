int *__stdcall sub_10427C30(void *Src)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)sub_1044A4D0(Src);
  if ( v1 )
    return sub_10427BE0(v1);
  if ( (dword_106FDC0C & 1) == 0 )
  {
    dword_106FDC0C |= 1u;
    dword_106FDBF8 = 0;
    dword_106FDBFC = 0;
    dword_106FDC00 = 0;
    dword_106FDC04 = 0;
    dword_106FDC08 = 0;
    atexit(sub_10479DC0);
  }
  return &dword_106FDBF8;
}
