int __thiscall sub_10134AE0(int *this, _DWORD *a2, int a3, int a4, char a5, char a6, char a7)
{
  int v7; // eax
  char v8; // dl
  bool v9; // cc

  v7 = (int)((double)a3 / *(float *)(dword_104396AC + 44));
  v8 = a5;
  BYTE2(a4) = a6;
  a2[1] -= v7;
  v9 = a2[1] < 2;
  BYTE1(a4) = v8;
  a2[3] = v7;
  if ( v9 )
    return 0;
  sub_10134600(this, a2, &a4, &a4, a7, a7);
  return 1;
}
