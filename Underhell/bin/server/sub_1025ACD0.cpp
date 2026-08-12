int *sub_1025ACD0()
{
  if ( (dword_106C7C3C & 1) == 0 )
  {
    dword_106C7C3C |= 1u;
    dword_106C7C20 = (int)"CBaseVPhysicsTrigger";
    dword_106C7C28 = 0;
    dword_106C7C2C = 0;
    dword_106C7C30 = 0;
    dword_106C7C34 = 0;
    dword_106C7C38 = 0;
    dword_106C7C24 = 20;
    atexit(sub_10474870);
  }
  dword_106516F0 = (int)&dword_1060F348;
  dword_106516E8 = 6;
  dword_106516E4 = (int)&unk_10652E0C;
  return &dword_106516E4;
}
