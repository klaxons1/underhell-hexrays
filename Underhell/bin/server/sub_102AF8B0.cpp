int sub_102AF8B0()
{
  if ( (dword_106DBC54 & 1) == 0 )
  {
    dword_106DBC54 |= 1u;
    sub_10122040((int)&unk_106DBB70, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DBBBC,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122120((int)&unk_106DBC08, (int)"m_szMaterialName", 800, 255, 0, (int)sub_10121B10);
    atexit(sub_104767B0);
  }
  sub_10121D00(byte_106DBCAC, (int)&unk_106DBBBC, 2, (int)off_106606EC);
  return 1;
}
