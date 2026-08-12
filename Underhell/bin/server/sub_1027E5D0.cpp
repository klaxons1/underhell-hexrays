int sub_1027E5D0()
{
  if ( (dword_106D1758 & 1) == 0 )
  {
    dword_106D1758 |= 1u;
    sub_10122040((int)&unk_106D16C0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D170C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104752B0);
  }
  sub_10121D00(byte_106D17DC, (int)&unk_106D170C, 1, (int)off_10658CDC);
  return 1;
}
