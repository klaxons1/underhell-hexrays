int __stdcall sub_101E1BA0(char *Source)
{
  int v1; // esi
  int result; // eax
  char Destination[1024]; // [esp+Ch] [ebp-400h] BYREF

  v1 = strlen(Source);
  result = sub_1022D0A0(Source);
  if ( v1 > 0 && Source[v1 - 1] == 32 )
  {
    sub_102282F0(Destination, Source, 0x400u);
    Destination[v1 - 1] = 0;
    return sub_1022CFC0(Destination);
  }
  return result;
}
