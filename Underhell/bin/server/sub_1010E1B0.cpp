int *sub_1010E1B0()
{
  if ( (dword_1069ABBC & 1) == 0 )
  {
    dword_1069ABBC |= 1u;
    dword_1069ABA0 = (int)"CEventQueue";
    dword_1069ABA8 = 0;
    dword_1069ABAC = 0;
    dword_1069ABB0 = 0;
    dword_1069ABB4 = 0;
    dword_1069ABB8 = 0;
    dword_1069ABA4 = 11;
    atexit(sub_104703E0);
  }
  dword_10614A40 = 0;
  dword_10614A38 = 1;
  dword_10614A34 = (int)&unk_10614FE4;
  return &dword_10614A34;
}
