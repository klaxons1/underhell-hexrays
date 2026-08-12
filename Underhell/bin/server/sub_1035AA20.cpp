int *sub_1035AA20()
{
  if ( (dword_106E7878 & 1) == 0 )
  {
    dword_106E7878 |= 1u;
    dword_106E785C = (int)"CNPC_CombineS";
    dword_106E7864 = 0;
    dword_106E7868 = 0;
    dword_106E786C = 0;
    dword_106E7870 = 0;
    dword_106E7874 = 0;
    dword_106E7860 = 13;
    atexit(sub_10478140);
  }
  dword_10671BC4 = (int)&dword_1066F6C4;
  dword_10671BBC = 11;
  dword_10671BB8 = (int)&unk_10671C5C;
  return &dword_10671BB8;
}
