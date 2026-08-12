int *sub_100B97A0()
{
  if ( (dword_10695410 & 1) == 0 )
  {
    dword_10695410 |= 1u;
    dword_106953F4 = (int)"CAI_ShotRegulator";
    dword_106953FC = 0;
    dword_10695400 = 0;
    dword_10695404 = 0;
    dword_10695408 = 0;
    dword_1069540C = 0;
    dword_106953F8 = 17;
    atexit(sub_1046F6C0);
  }
  dword_1060C5C0 = 0;
  dword_1060C5B8 = 10;
  dword_1060C5B4 = (int)&unk_1060C76C;
  return &dword_1060C5B4;
}
