int *sub_103D0B50()
{
  if ( (dword_106EC970 & 1) == 0 )
  {
    dword_106EC970 |= 1u;
    dword_106EC954 = (int)"CNPC_Zombine";
    dword_106EC95C = 0;
    dword_106EC960 = 0;
    dword_106EC964 = 0;
    dword_106EC968 = 0;
    dword_106EC96C = 0;
    dword_106EC958 = 12;
    atexit(sub_10478F40);
  }
  dword_1067DE24 = (int)&dword_1066E1D0;
  dword_1067DE1C = 8;
  dword_1067DE18 = (int)&unk_1067DEAC;
  return &dword_1067DE18;
}
