int *sub_10120390()
{
  if ( (dword_104377E4 & 1) == 0 )
  {
    dword_104377E4 |= 1u;
    dword_104377C8 = (int)"CStopwatchBase";
    dword_104377D0 = 0;
    dword_104377D4 = 0;
    dword_104377D8 = 0;
    dword_104377DC = 0;
    dword_104377E0 = 0;
    dword_104377CC = 14;
    atexit(sub_102CB7A0);
  }
  dword_103E53B4 = (int)&dword_103E5360;
  dword_103E53AC = 1;
  dword_103E53A8 = (int)&unk_103E5594;
  return &dword_103E53A8;
}
