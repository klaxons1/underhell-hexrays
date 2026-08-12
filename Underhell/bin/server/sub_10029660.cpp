void __cdecl sub_10029660(_DWORD *a1, int a2)
{
  char *v2; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( (a1[59] & 0x1000) != 0 )
  {
    v2 = sub_10022AD0(Buffer, (char **)&a2);
    sub_10022590(a1, v2);
  }
}
