int __cdecl sub_10123D90(char ArgList, int a2, float a3, float a4, float a5, char a6)
{
  char Buffer[2048]; // [esp+18h] [ebp-800h] BYREF

  sub_10429A00(Buffer, 0x800u, "node_create %s %d %g %g %g", ArgList);
  return sub_10123C30(Buffer, a6);
}
