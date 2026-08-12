bool __stdcall sub_100ADB30(int a1, int a2)
{
  _BYTE v3[256]; // [esp+0h] [ebp-100h] BYREF

  if ( a1 != 3 )
    return 1;
  sub_1023AFB0(a2, v3, 256);
  return sub_10223E40(v3) > 0.0;
}
