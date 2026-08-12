int *sub_102104D0()
{
  if ( (dword_106C2640 & 1) == 0 )
  {
    dword_106C2640 |= 1u;
    dword_106C2624 = (int)"CPropDoorRotating";
    dword_106C262C = 0;
    dword_106C2630 = 0;
    dword_106C2634 = 0;
    dword_106C2638 = 0;
    dword_106C263C = 0;
    dword_106C2628 = 17;
    atexit(sub_10473B00);
  }
  dword_10643054 = (int)&dword_1064302C;
  dword_1064304C = 12;
  dword_10643048 = (int)&unk_106437BC;
  return &dword_10643048;
}
