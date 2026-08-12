int __cdecl sub_104331D0(char Src)
{
  int v2[22]; // [esp+0h] [ebp-68h] BYREF
  _DWORD v3[4]; // [esp+58h] [ebp-10h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[0] = 1732584193;
  v2[1] = -271733879;
  v2[2] = -1732584194;
  v2[3] = 271733878;
  v2[4] = 0;
  v2[5] = 0;
  sub_10433070(v2, &Src, 4u);
  sub_10433130(v3, v2);
  return *(_DWORD *)((char *)&v3[1] + 2);
}
