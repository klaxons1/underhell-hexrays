char *sub_101959B0()
{
  char ArgList[256]; // [esp+0h] [ebp-100h] BYREF

  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31D0 + 204))(dword_106B31D0, ArgList, 256);
  sub_10429A00(&byte_106B7D78, 0x100u, "%s\\maps\\%s.nav", (char)ArgList);
  return &byte_106B7D78;
}
