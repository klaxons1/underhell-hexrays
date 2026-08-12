int *sub_10170FC0()
{
  if ( (dword_106B5ABC & 1) == 0 )
  {
    dword_106B5ABC |= 1u;
    dword_106B5AA0 = (int)"CInfoOverlayAccessor";
    dword_106B5AA8 = 0;
    dword_106B5AAC = 0;
    dword_106B5AB0 = 0;
    dword_106B5AB4 = 0;
    dword_106B5AB8 = 0;
    dword_106B5AA4 = 20;
    atexit(sub_10471E00);
  }
  dword_106298E4 = (int)&dword_1060F348;
  dword_106298DC = 1;
  dword_106298D8 = (int)&unk_1062998C;
  return &dword_106298D8;
}
