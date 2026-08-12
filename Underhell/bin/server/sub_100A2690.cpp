int __thiscall sub_100A2690(int this, int a2, char *Destination, size_t Count, char *Source)
{
  __int16 v7; // ax
  double ArgList; // [esp+0h] [ebp-18h]
  char *v9; // [esp+10h] [ebp-8h] BYREF

  if ( *Source != 91 )
    return sub_104299C0(Destination, Source, Count);
  v9 = Source;
  v7 = sub_1009D560((_WORD *)(this + 88), (int)&v9);
  if ( v7 == -1 )
  {
    sub_104299C0(Destination, Source, Count);
    return sub_1009AEC0(this, "No such enumeration '%s'\n", Destination);
  }
  else
  {
    ArgList = *(float *)(*(_DWORD *)(this + 92) + 16 * v7 + 12);
    return sub_10429A00(Destination, Count, "%f", SLOBYTE(ArgList));
  }
}
