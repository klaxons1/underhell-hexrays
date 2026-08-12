bool sub_101BCD90()
{
  int (__cdecl *v1[2])(const char *, _DWORD); // [esp+0h] [ebp-8h] BYREF

  sub_10079870(v1);
  dword_1044F244 = v1[0]("VEngineServer021", 0);
  return dword_1044F244 != 0;
}
