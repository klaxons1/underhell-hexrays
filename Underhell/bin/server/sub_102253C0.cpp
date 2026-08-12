_WORD *__cdecl sub_102253C0(void *Src)
{
  int v1; // ecx
  _WORD *result; // eax
  int var2; // [esp+0h] [ebp-2h] BYREF

  LOWORD(var2) = HIWORD(v1);
  if ( (dword_106C42DC & 1) == 0 )
  {
    dword_106C42DC |= 1u;
    sub_1042F8A0(0, 32, 0);
    atexit(sub_10473D30);
  }
  result = (_WORD *)sub_1042F670(&var2, Src);
  if ( *result == 0xFFFF )
  {
    sub_1042F910((int)&var2, Src);
    return (_WORD *)Warning("Scene '%s' missing!\n", (const char *)Src);
  }
  return result;
}
