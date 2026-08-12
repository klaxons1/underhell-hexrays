int *sub_10137D60()
{
  if ( (dword_106AFF40 & 1) == 0 )
  {
    dword_106AFF40 |= 1u;
    dword_106AFF24 = (int)"CEnvHudHint";
    dword_106AFF2C = 0;
    dword_106AFF30 = 0;
    dword_106AFF34 = 0;
    dword_106AFF38 = 0;
    dword_106AFF3C = 0;
    dword_106AFF28 = 11;
    atexit(sub_10470F30);
  }
  dword_106207E0 = (int)&dword_1060F348;
  dword_106207D8 = 4;
  dword_106207D4 = (int)&unk_10620874;
  return &dword_106207D4;
}
