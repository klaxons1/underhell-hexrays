int *sub_1001E0F0()
{
  if ( (dword_106901C0 & 1) == 0 )
  {
    dword_106901C0 |= 1u;
    dword_106901A4 = (int)"CAI_InterestTarget_t";
    dword_106901AC = 0;
    dword_106901B0 = 0;
    dword_106901B4 = 0;
    dword_106901B8 = 0;
    dword_106901BC = 0;
    dword_106901A8 = 20;
    atexit(sub_1046E7C0);
  }
  dword_105FD58C = 0;
  dword_105FD584 = 7;
  dword_105FD580 = (int)&unk_105FDF84;
  return &dword_105FD580;
}
