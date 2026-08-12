char *__thiscall sub_101E2540(int this)
{
  char v2; // al
  int v4; // ebx
  unsigned int v5; // eax
  char *v6; // edi
  int v7; // eax
  char v8; // al
  char v9; // al
  char Source[256]; // [esp+4h] [ebp-100h] BYREF

  byte_10458C98 = 0;
  if ( *(_DWORD *)(this + 180) )
  {
    v4 = sub_1022D040(this + 24);
    v5 = *(unsigned __int8 *)(this + 4);
    if ( v5 > 0x10 )
      v6 = off_103EDEA4;
    else
      v6 = (&off_103EDEA4)[2 * v5];
    v7 = sub_1022D040(this + 8);
    sub_101EABB0(*(_DWORD *)(this + 184), v7, v6, v4);
    v8 = (unsigned __int8)sub_10008F60(*(void **)(this + 180));
    sub_10228370(&byte_10458C98, 0x100u, "%s : %s : %s -- %s \"%s\"", v8);
    if ( *(_BYTE *)(this + 4) == 2 )
    {
      v9 = sub_1022D040(this + 40);
      sub_10228370(Source, 0x100u, " \"%s\"", v9);
      sub_10228100((int)&byte_10458C98, Source, 256, -1);
    }
    return &byte_10458C98;
  }
  else
  {
    v2 = sub_1022D040(this + 8);
    sub_10228370(&byte_10458C98, 0x100u, "global %s", v2);
    return &byte_10458C98;
  }
}
