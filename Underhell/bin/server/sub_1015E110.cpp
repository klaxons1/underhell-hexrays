char *sub_1015E110()
{
  char *result; // eax

  result = sub_100E3960((int)"player_manager", &flt_106F1CA8, &flt_106F1CB4, 0);
  dword_106BFD1C = (int)result;
  *((_DWORD *)result + 63) |= 0x10u;
  return result;
}
