void __thiscall sub_10184710(int this)
{
  const char *v2; // eax
  char Buffer[512]; // [esp+18h] [ebp-200h] BYREF

  if ( *(_BYTE *)(this + 808)
    && (!*(_BYTE *)(this + 809) || *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48))
    && *(_BYTE *)(this + 810) )
  {
    v2 = *(const char **)(this + 804);
    if ( !v2 )
      v2 = String;
    sub_10429A00(Buffer, 0x200u, "%s", (char)v2);
    sub_100D5DE0((_DWORD *)this, 0, (int)Buffer, 0.0, 255, 255, 255, 255);
  }
}
