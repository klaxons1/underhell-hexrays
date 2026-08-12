int *sub_10139830()
{
  if ( (dword_106AFFA8 & 1) == 0 )
  {
    dword_106AFFA8 |= 1u;
    dword_106AFF8C = (int)"CMessage";
    dword_106AFF94 = 0;
    dword_106AFF98 = 0;
    dword_106AFF9C = 0;
    dword_106AFFA0 = 0;
    dword_106AFFA4 = 0;
    dword_106AFF90 = 8;
    atexit(sub_10470F60);
  }
  dword_10620BBC = (int)&dword_1060F348;
  if ( (dword_106AFFA8 & 2) == 0 )
  {
    dword_106AFFA8 |= 2u;
    dword_10621440 = (int)off_10614A2C;
    dword_10621444 = 0;
    dword_10621448 = 0;
    dword_1062144C = 0;
    dword_10621450 = 0;
    dword_10621454 = 0;
    dword_10621458 = 0;
  }
  dword_10620BB4 = 30;
  dword_10620BB0 = (int)&unk_10620E44;
  return &dword_10620BB0;
}
