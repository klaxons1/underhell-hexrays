char __cdecl sub_1044E7D0(int a1, int a2, int *a3)
{
  char v3; // bl
  int v5[5]; // [esp+4h] [ebp-40h] BYREF
  int v6[5]; // [esp+18h] [ebp-2Ch] BYREF
  int v7[6]; // [esp+2Ch] [ebp-18h] BYREF

  memset(v5, 0, sizeof(v5));
  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 20);
  v3 = sub_1044E710(v5, a1, a2, a3);
  sub_102375F0(v7);
  sub_102375F0(v6);
  sub_102375F0(v5);
  return v3;
}
