void __cdecl sub_10217520(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        int a9,
        _DWORD *a10,
        char a11)
{
  _DWORD v11[7]; // [esp+0h] [ebp-1Ch] BYREF

  *(float *)&v11[4] = a7;
  v11[2] = a5;
  *(float *)&v11[5] = a8;
  v11[0] = a3;
  v11[1] = a4;
  v11[3] = a6;
  v11[6] = a9;
  sub_10216B90(a1, a2, (int)v11, a10, -1, 0, a11);
}
