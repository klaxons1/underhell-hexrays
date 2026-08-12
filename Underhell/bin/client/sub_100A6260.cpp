void __cdecl sub_100A6260(int a1)
{
  float v1[3]; // [esp+4h] [ebp-Ch] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  sub_100A5ED0(v1, a1);
  sub_1008DF90((int)&savedregs, v1, (float *)a1, *(_DWORD *)(a1 + 48));
}
