int __cdecl sub_10270600(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int *v10; // eax
  _DWORD v12[16]; // [esp+0h] [ebp-40h] BYREF

  v10 = (int *)sub_10242540("MessageBox");
  v12[0] = a1;
  v12[5] = a3;
  v12[4] = a2;
  v12[7] = a5;
  v12[6] = a4;
  v12[9] = a7;
  v12[8] = a6;
  v12[11] = a9;
  v12[10] = a8;
  memset(&v12[13], 0, 12);
  v12[12] = a10;
  return sub_100698A0(v10, v10[3], v12);
}
