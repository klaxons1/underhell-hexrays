char *__cdecl _getcwd(char *DstBuf, int SizeInBytes)
{
  char *v3; // [esp+10h] [ebp-1Ch]

  _lock(7);
  v3 = _getdcwd_nolock(0, DstBuf, SizeInBytes);
  _unlock(7);
  return v3;
}
