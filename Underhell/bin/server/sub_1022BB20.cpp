int *sub_1022BB20()
{
  if ( (dword_106C456C & 1) == 0 )
  {
    dword_106C456C |= 1u;
    dword_106C4550 = (int)"CInstancedSceneEntity";
    dword_106C4558 = 0;
    dword_106C455C = 0;
    dword_106C4560 = 0;
    dword_106C4564 = 0;
    dword_106C4568 = 0;
    dword_106C4554 = 21;
    atexit(sub_10473DA0);
  }
  dword_10646C28 = (int)&dword_10646C04;
  dword_10646C20 = 6;
  dword_10646C1C = (int)&unk_106470DC;
  return &dword_10646C1C;
}
