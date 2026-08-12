int *sub_1010E070()
{
  if ( (dword_1069AB7C & 1) == 0 )
  {
    dword_1069AB7C |= 1u;
    dword_1069AB60 = (int)"CEventAction";
    dword_1069AB68 = 0;
    dword_1069AB6C = 0;
    dword_1069AB70 = 0;
    dword_1069AB74 = 0;
    dword_1069AB78 = 0;
    dword_1069AB64 = 12;
    atexit(sub_104703C0);
  }
  dword_10614A08 = 0;
  dword_10614A00 = 6;
  dword_106149FC = (int)&unk_10614E0C;
  return &dword_106149FC;
}
