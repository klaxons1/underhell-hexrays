int *sub_1040E070()
{
  if ( (dword_106F0E0C & 1) == 0 )
  {
    dword_106F0E0C |= 1u;
    dword_106F0DF0 = (int)"CWeaponStunStick";
    dword_106F0DF8 = 0;
    dword_106F0DFC = 0;
    dword_106F0E00 = 0;
    dword_106F0E04 = 0;
    dword_106F0E08 = 0;
    dword_106F0DF4 = 16;
    atexit(sub_10479C20);
  }
  dword_10687DC4 = (int)&dword_106609CC;
  dword_10687DBC = 1;
  dword_10687DB8 = (int)&unk_10687E44;
  return &dword_10687DB8;
}
