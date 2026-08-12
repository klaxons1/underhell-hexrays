int *sub_100CEF00()
{
  if ( (dword_10696B8C & 1) == 0 )
  {
    dword_10696B8C |= 1u;
    dword_10696B70 = (int)"Relationship_t";
    dword_10696B78 = 0;
    dword_10696B7C = 0;
    dword_10696B80 = 0;
    dword_10696B84 = 0;
    dword_10696B88 = 0;
    dword_10696B74 = 14;
    atexit(sub_1046FA70);
  }
  dword_1060E0BC = 0;
  dword_1060E0B4 = 4;
  dword_1060E0B0 = (int)&unk_1060E694;
  return &dword_1060E0B0;
}
