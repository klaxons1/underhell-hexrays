int sub_1012EA60()
{
  if ( (dword_106AE7B8 & 1) == 0 )
  {
    dword_106AE7B8 |= 1u;
    sub_10122040((int)&unk_106AE688, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_106AE6D4, (int)"m_flLifetime", 8, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AE720, (int)"m_flStartSize", 12, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AE76C, (int)"m_flEndSize", 16, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470CA0);
  }
  sub_10121D00(byte_106AE7E0, (int)&unk_106AE6D4, 3, (int)off_1061E1C0);
  return 1;
}
