int *sub_101284D0()
{
  if ( (dword_1069DC48 & 1) == 0 )
  {
    dword_1069DC48 |= 1u;
    dword_1069DC2C = (int)"CPhysicsWire";
    dword_1069DC34 = 0;
    dword_1069DC38 = 0;
    dword_1069DC3C = 0;
    dword_1069DC40 = 0;
    dword_1069DC44 = 0;
    dword_1069DC30 = 12;
    atexit(sub_10470A80);
  }
  dword_1061998C = (int)&dword_1060F348;
  dword_10619984 = 1;
  dword_10619980 = (int)&unk_1061AC6C;
  return &dword_10619980;
}
