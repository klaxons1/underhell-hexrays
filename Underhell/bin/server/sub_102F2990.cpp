int *sub_102F2990()
{
  if ( (dword_106E2620 & 1) == 0 )
  {
    dword_106E2620 |= 1u;
    dword_106E2604 = (int)"CNewNPC";
    dword_106E260C = 0;
    dword_106E2610 = 0;
    dword_106E2614 = 0;
    dword_106E2618 = 0;
    dword_106E261C = 0;
    dword_106E2608 = 7;
    atexit(sub_104776B0);
  }
  dword_10669B84 = (int)&dword_105FE114;
  dword_10669B7C = 1;
  dword_10669B78 = (int)&unk_10669C14;
  return &dword_10669B78;
}
