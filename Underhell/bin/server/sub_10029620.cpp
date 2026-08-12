void __cdecl sub_10029620(_DWORD *a1, char a2, int a3)
{
  char *v3; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( (a2 & 1) != 0 || (a1[59] & 0x1000) != 0 )
  {
    v3 = sub_10022AD0(Buffer, (char **)&a3);
    sub_10022590(a1, v3);
  }
}
