int __cdecl sub_10123D50(char ArgList, int a2, char a3)
{
  char Buffer[2048]; // [esp+0h] [ebp-800h] BYREF

  sub_10429A00(Buffer, 0x800u, "map_check_version %s %d", ArgList);
  return sub_10123C30(Buffer, a3);
}
