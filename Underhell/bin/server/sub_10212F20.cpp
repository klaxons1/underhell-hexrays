int *sub_10212F20()
{
  if ( (dword_106C28A0 & 1) == 0 )
  {
    dword_106C28A0 |= 1u;
    dword_106C2884 = (int)"COrnamentProp";
    dword_106C288C = 0;
    dword_106C2890 = 0;
    dword_106C2894 = 0;
    dword_106C2898 = 0;
    dword_106C289C = 0;
    dword_106C2888 = 13;
    atexit(sub_10473AC0);
  }
  dword_10642FEC = (int)&dword_10642FC4;
  dword_10642FE4 = 3;
  dword_10642FE0 = (int)&unk_10644B44;
  return &dword_10642FE0;
}
