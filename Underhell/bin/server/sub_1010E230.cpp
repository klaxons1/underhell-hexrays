int *sub_1010E230()
{
  if ( (dword_1069ABDC & 1) == 0 )
  {
    dword_1069ABDC |= 1u;
    dword_1069ABC0 = (int)"EventQueuePrioritizedEvent_t";
    dword_1069ABC8 = 0;
    dword_1069ABCC = 0;
    dword_1069ABD0 = 0;
    dword_1069ABD4 = 0;
    dword_1069ABD8 = 0;
    dword_1069ABC4 = 28;
    atexit(sub_104703F0);
  }
  dword_10614A58 = 0;
  if ( (dword_1069ABDC & 2) == 0 )
  {
    dword_1069ABDC |= 2u;
    dword_106151D0 = (int)off_10614CA0;
    dword_106151D4 = 0;
    dword_106151D8 = 0;
    dword_106151DC = 0;
    dword_106151E0 = 0;
    dword_106151E4 = 0;
    dword_106151E8 = 0;
  }
  dword_10614A50 = 8;
  dword_10614A4C = (int)&unk_1061504C;
  return &dword_10614A4C;
}
