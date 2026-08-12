int *sub_10210550()
{
  if ( (dword_106C2694 & 1) == 0 )
  {
    dword_106C2694 |= 1u;
    dword_106C2678 = (int)"CPhysBoxMultiplayer";
    dword_106C2680 = 0;
    dword_106C2684 = 0;
    dword_106C2688 = 0;
    dword_106C268C = 0;
    dword_106C2690 = 0;
    dword_106C267C = 19;
    atexit(sub_10473B10);
  }
  dword_1064306C = (int)&dword_1063B044;
  dword_10643064 = 1;
  dword_10643060 = (int)&unk_106C2644;
  return &dword_10643060;
}
