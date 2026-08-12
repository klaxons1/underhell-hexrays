int __stdcall sub_10418460(char *Source)
{
  int v1; // esi
  int result; // eax
  char Destination[1024]; // [esp+Ch] [ebp-400h] BYREF

  v1 = strlen(Source);
  result = sub_10431100(Source);
  if ( v1 > 0 && Source[v1 - 1] == 32 )
  {
    sub_104299C0(Destination, Source, 0x400u);
    Destination[v1 - 1] = 0;
    return sub_10431020(Destination);
  }
  return result;
}
