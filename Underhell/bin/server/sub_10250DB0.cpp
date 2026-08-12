int *sub_10250DB0()
{
  if ( (dword_106C7438 & 1) == 0 )
  {
    dword_106C7438 |= 1u;
    dword_106C741C = (int)"CFuncTrackAuto";
    dword_106C7424 = 0;
    dword_106C7428 = 0;
    dword_106C742C = 0;
    dword_106C7430 = 0;
    dword_106C7434 = 0;
    dword_106C7420 = 14;
    atexit(sub_10474690);
  }
  dword_10650044 = (int)&dword_10650020;
  dword_1065003C = 1;
  dword_10650038 = (int)&unk_106502FC;
  return &dword_10650038;
}
