void __cdecl sub_10086450(int a1, int a2, int a3)
{
  char *v3; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( a1 == dword_10608F94 && a2 == dword_10608F98 || a1 == dword_10608F98 && a2 == dword_10608F94 )
  {
    v3 = sub_10022AD0(Buffer, (char **)&a3);
    DevMsg(v3);
  }
}
