int *sub_10258CD0()
{
  if ( (dword_106C7874 & 1) == 0 )
  {
    dword_106C7874 |= 1u;
    dword_106C7858 = (int)"CTriggerMultiple";
    dword_106C7860 = 0;
    dword_106C7864 = 0;
    dword_106C7868 = 0;
    dword_106C786C = 0;
    dword_106C7870 = 0;
    dword_106C785C = 16;
    atexit(sub_10474770);
  }
  dword_10651570 = (int)&dword_1065151C;
  if ( (dword_106C7874 & 2) == 0 )
  {
    dword_106C7874 |= 2u;
    dword_106C77C0 = (int)sub_100390B0((char **)&dword_106C7858, "MultiTouch");
    word_106C77CC = 1;
    word_106C77CE = 32;
    dword_106C77C4 = 0;
    dword_106C77C8 = 0;
    dword_106C77D0 = 0;
    dword_106C77D4 = 0;
    dword_106C77D8 = (int)sub_102560C0;
    dword_106C77DC = 0;
    dword_106C77E0 = 0;
    dword_106C77E4 = 0;
    dword_106C77E8 = 0;
    dword_106C77EC = 0;
    dword_106C77F0 = 0;
    dword_106C77F4 = (int)sub_100390B0((char **)&dword_106C7858, "MultiWaitOver");
    word_106C7800 = 1;
    word_106C7802 = 32;
    dword_106C77F8 = 0;
    dword_106C77FC = 0;
    dword_106C7804 = 0;
    dword_106C7808 = 0;
    dword_106C780C = (int)sub_102543C0;
    dword_106C7810 = 0;
    dword_106C7814 = 0;
    dword_106C7818 = 0;
    dword_106C781C = 0;
    dword_106C7820 = 0;
    dword_106C7824 = 11;
    dword_106C7828 = (int)"m_OnTrigger";
    dword_106C782C = 1092;
    dword_106C7830 = 0;
    dword_106C7834 = 1441793;
    dword_106C7838 = (int)"OnTrigger";
    dword_106C783C = (int)off_10614A2C;
    dword_106C7840 = 0;
    dword_106C7844 = 0;
    dword_106C7848 = 0;
    dword_106C784C = 0;
    dword_106C7850 = 0;
    dword_106C7854 = 0;
  }
  dword_10651568 = 3;
  dword_10651564 = (int)&unk_106C77BC;
  return &dword_10651564;
}
