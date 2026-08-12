int *sub_10312C60()
{
  if ( (dword_106E3414 & 1) == 0 )
  {
    dword_106E3414 |= 1u;
    dword_106E33F8 = (int)"CNPC_APCDriver";
    dword_106E3400 = 0;
    dword_106E3404 = 0;
    dword_106E3408 = 0;
    dword_106E340C = 0;
    dword_106E3410 = 0;
    dword_106E33FC = 14;
    atexit(sub_10477950);
  }
  dword_1066C734 = (int)&dword_1063386C;
  dword_1066C72C = 4;
  dword_1066C728 = (int)&unk_1066C7D4;
  return &dword_1066C728;
}
