char *__thiscall sub_10418BD0(int this)
{
  char v2; // al
  char v4; // al
  char v5; // al
  char Source[256]; // [esp+4h] [ebp-100h] BYREF

  byte_106F1700 = 0;
  if ( *(_DWORD *)(this + 180) )
  {
    sub_104310A0(this + 24);
    sub_104310A0(this + 8);
    sub_10221AC0(*(char **)(this + 184));
    v4 = (unsigned __int8)sub_10018D60(*(void **)(this + 180));
    sub_10429A00(&byte_106F1700, 0x100u, "%s : %s : %s -- %s \"%s\"", v4);
    if ( *(_BYTE *)(this + 4) == 2 )
    {
      v5 = sub_104310A0(this + 40);
      sub_10429A00(Source, 0x100u, " \"%s\"", v5);
      sub_10429750((int)&byte_106F1700, Source, 256, -1);
    }
    return &byte_106F1700;
  }
  else
  {
    v2 = sub_104310A0(this + 8);
    sub_10429A00(&byte_106F1700, 0x100u, "global %s", v2);
    return &byte_106F1700;
  }
}
