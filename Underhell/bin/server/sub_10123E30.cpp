int __cdecl sub_10123E30(char ArgList, float a2, float a3, float a4, int a5, int a6, char a7)
{
  char Buffer[2048]; // [esp+20h] [ebp-800h] BYREF

  sub_10429A00(Buffer, 0x800u, "entity_set_keyvalue %s %f %f %f \"%s\" \"%s\"", ArgList);
  return sub_10123C30(Buffer, a7);
}
