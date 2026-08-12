int *sub_101CAC30()
{
  if ( (dword_106BA91C & 1) == 0 )
  {
    dword_106BA91C |= 1u;
    dword_106BA900 = (int)"CPhysicsNPCSolver";
    dword_106BA908 = 0;
    dword_106BA90C = 0;
    dword_106BA910 = 0;
    dword_106BA914 = 0;
    dword_106BA918 = 0;
    dword_106BA904 = 17;
    atexit(sub_10473090);
  }
  dword_10638998 = (int)&dword_1060F348;
  if ( (dword_106BA91C & 2) == 0 )
  {
    dword_106BA91C |= 2u;
    dword_10638C00 = sub_101D3250(8);
    dword_10638C04 = 0;
    dword_10638C08 = 0;
    dword_10638C0C = 0;
    dword_10638C10 = 0;
    dword_10638C14 = 0;
    dword_10638C18 = 0;
  }
  dword_10638990 = 6;
  dword_1063898C = (int)asc_10638AE4;
  return &dword_1063898C;
}
