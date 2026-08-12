int *sub_10040FB0()
{
  if ( (dword_10691B80 & 1) == 0 )
  {
    dword_10691B80 |= 1u;
    dword_10691B64 = (int)"AIScheduleState_t";
    dword_10691B6C = 0;
    dword_10691B70 = 0;
    dword_10691B74 = 0;
    dword_10691B78 = 0;
    dword_10691B7C = 0;
    dword_10691B68 = 17;
    atexit(sub_1046EAE0);
  }
  dword_105FE138 = 0;
  dword_105FE130 = 9;
  dword_105FE12C = (int)&unk_106011C4;
  return &dword_105FE12C;
}
