int *sub_100B8B30()
{
  if ( (dword_10695380 & 1) == 0 )
  {
    dword_10695380 |= 1u;
    dword_10695364 = (int)"CAI_TrackPather";
    dword_1069536C = 0;
    dword_10695370 = 0;
    dword_10695374 = 0;
    dword_10695378 = 0;
    dword_1069537C = 0;
    dword_10695368 = 15;
    atexit(sub_1046F690);
  }
  dword_1060BCB0 = (int)&dword_105FE114;
  dword_1060BCA8 = 42;
  dword_1060BCA4 = (int)&unk_1060BD14;
  return &dword_1060BCA4;
}
