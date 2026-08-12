int __cdecl sub_10123F00(char ArgList, char a2)
{
  char Buffer[2048]; // [esp+0h] [ebp-800h] BYREF

  sub_10429A00(Buffer, 0x800u, "node_delete %d", ArgList);
  return sub_10123C30(Buffer, a2);
}
