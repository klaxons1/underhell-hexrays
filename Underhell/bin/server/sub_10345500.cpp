int *sub_10345500()
{
  if ( (dword_106E6660 & 1) == 0 )
  {
    dword_106E6660 |= 1u;
    dword_106E6644 = (int)"CNPC_Combine_Cannon";
    dword_106E664C = 0;
    dword_106E6650 = 0;
    dword_106E6654 = 0;
    dword_106E6658 = 0;
    dword_106E665C = 0;
    dword_106E6648 = 19;
    atexit(sub_10477FB0);
  }
  dword_1066FE74 = (int)&dword_105FE114;
  dword_1066FE6C = 14;
  dword_1066FE68 = (int)&unk_1066FF04;
  return &dword_1066FE68;
}
