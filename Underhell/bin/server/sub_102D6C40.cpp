int *sub_102D6C40()
{
  if ( (dword_106DE970 & 1) == 0 )
  {
    dword_106DE970 |= 1u;
    dword_106DE954 = (int)"CGrenadeSpit";
    dword_106DE95C = 0;
    dword_106DE960 = 0;
    dword_106DE964 = 0;
    dword_106DE968 = 0;
    dword_106DE96C = 0;
    dword_106DE958 = 12;
    atexit(sub_10476DC0);
  }
  dword_10665AB8 = (int)&dword_106121C8;
  if ( (dword_106DE970 & 2) == 0 )
  {
    dword_106DE970 |= 2u;
    dword_10665B84 = (int)sub_100390B0((char **)&dword_106DE954, "GrenadeSpitTouch");
    dword_10665B88 = 0;
    dword_10665B8C = 0;
    dword_10665B90 = 2097153;
    dword_10665B94 = 0;
    dword_10665B98 = 0;
    dword_10665B9C = (int)sub_102D6410;
    dword_10665BA0 = 0;
    dword_10665BA4 = 0;
    dword_10665BA8 = 0;
    dword_10665BAC = 0;
    dword_10665BB0 = 0;
  }
  dword_10665AB0 = 2;
  dword_10665AAC = (int)&unk_10665B4C;
  return &dword_10665AAC;
}
