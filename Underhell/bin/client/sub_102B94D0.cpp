int sub_102B94D0()
{
  sub_102292A0(dword_10433A00, (int)"m_pitch", "0.022", 128, "Mouse pitch factor.");
  dword_10433A00[0] = (int)&ConVar_m_pitch::`vftable';
  dword_10433A18 = (int)&ConVar_m_pitch::`vftable';
  return atexit(sub_102CAAF0);
}
