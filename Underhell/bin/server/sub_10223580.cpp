void __thiscall sub_10223580(int this, int a2, int a3)
{
  const char *v3; // ecx
  __int64 v4; // [esp-8h] [ebp-Ch]

  if ( *(_BYTE *)(this + 1456) )
  {
    v3 = *(const char **)(this + 804);
    if ( !v3 )
      v3 = String;
    Warning("Scene '%s' with two stop point events!\n", v3);
  }
  else
  {
    *(_BYTE *)(this + 1456) = 1;
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    sub_1010DD80((_DWORD *)(this + 1012), v4, 0.0);
  }
}
