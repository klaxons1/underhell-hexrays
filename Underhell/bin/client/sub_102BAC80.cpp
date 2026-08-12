int sub_102BAC80()
{
  sub_100D36C0(dword_10435ED8, (int)"CPhysicsSystem");
  dword_10435ED8[0] = (int)&CPhysicsSystem::`vftable';
  dword_10435EE4 = 0;
  dword_10435EE8 = 0;
  dword_10435EEC = 0;
  dword_10435EF0 = 0;
  dword_10435EF4 = 0;
  return atexit(sub_102CB1B0);
}
