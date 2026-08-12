char __thiscall sub_100C6000(int this, char *Source, float a3, char a4)
{
  char Str[512]; // [esp+10h] [ebp-200h] BYREF

  *(_BYTE *)(this + 453) = 1;
  sub_102282F0(Str, Source, 0x200u);
  if ( strstr(Str, "\\") )
    sub_10120530(Str);
  return sub_100C5580((_DWORD *)this, Str, 0, a3, a4, 1);
}
