BOOL __stdcall sub_100B5960(int a1, int a2)
{
  float v4; // [esp+18h] [ebp+Ch]

  v4 = sub_100B5850(a1, a2, 1);
  return sub_100B5850(a1, a2, 0) >= v4;
}
