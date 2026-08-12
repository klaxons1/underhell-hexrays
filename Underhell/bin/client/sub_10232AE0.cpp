int __cdecl sub_10232AE0(char Src)
{
  int v2[22]; // [esp+0h] [ebp-68h] BYREF
  _DWORD v3[4]; // [esp+58h] [ebp-10h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[0] = 1732584193;
  v2[1] = -271733879;
  v2[2] = -1732584194;
  v2[3] = (int)&off_10325474 + 2;
  v2[4] = 0;
  v2[5] = 0;
  sub_10232980(v2, &Src, 4u);
  sub_10232A40(v3, v2);
  return *(_DWORD *)((char *)&v3[1] + 2);
}
