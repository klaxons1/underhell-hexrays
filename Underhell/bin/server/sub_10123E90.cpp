int __cdecl sub_10123E90(char ArgList, float a2, float a3, float a4, int a5, char a6)
{
  char Buffer[2048]; // [esp+30h] [ebp-800h] BYREF

  sub_10429A00(Buffer, 0x800u, "entity_rotate_incremental %s %f %f %f %f %f %f", ArgList);
  return sub_10123C30(Buffer, a6);
}
