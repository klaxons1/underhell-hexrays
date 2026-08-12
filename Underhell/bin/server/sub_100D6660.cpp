int __thiscall sub_100D6660(_DWORD *this, int a2)
{
  int v3; // eax
  const char *v4; // edi
  const char *v5; // edx
  const char *v6; // ecx
  const char *v7; // eax
  const char *v9; // edx
  const char *v10; // esi
  const char *v11; // ecx
  const char *v12; // eax
  double ArgList; // [esp+0h] [ebp-420h]
  double v14; // [esp+8h] [ebp-418h]
  char Buffer[1024]; // [esp+20h] [ebp-400h] BYREF

  if ( 0.0 == *(float *)(a2 + 12) )
  {
    v14 = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(Buffer, 0x400u, "%3.1f  (%s) --> (%s)\n", SLOBYTE(v14));
  }
  else
  {
    ArgList = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(Buffer, 0x400u, "%3.1f  (%s) --> (%s),%.1f) \n", SLOBYTE(ArgList));
  }
  sub_100D5D60(this, Buffer, 10);
  v3 = *(_DWORD *)(a2 + 4);
  if ( 0.0 == *(float *)(a2 + 12) )
  {
    v9 = *(const char **)(a2 + 4);
    if ( !v3 )
      v9 = String;
    v10 = *(const char **)a2;
    if ( !*(_DWORD *)a2 )
      v10 = String;
    if ( this )
    {
      if ( this[65] )
      {
        v11 = (const char *)this[65];
      }
      else
      {
        v11 = (const char *)this[23];
        if ( !v11 )
          v11 = String;
      }
    }
    else
    {
      v11 = "<<null>>";
    }
    v12 = (const char *)this[23];
    if ( !v12 )
      v12 = String;
    return DevMsg(2, "output: (%s,%s) -> (%s,%s)\n", v12, v11, v10, v9);
  }
  else
  {
    v4 = *(const char **)(a2 + 4);
    if ( !v3 )
      v4 = String;
    v5 = *(const char **)a2;
    if ( !*(_DWORD *)a2 )
      v5 = String;
    if ( this )
    {
      v6 = (const char *)this[65];
      if ( !v6 )
      {
        v6 = (const char *)this[23];
        if ( !v6 )
          v6 = String;
      }
    }
    else
    {
      v6 = "<<null>>";
    }
    v7 = (const char *)this[23];
    if ( !v7 )
      v7 = String;
    return DevMsg(2, "output: (%s,%s) -> (%s,%s,%.1f)\n", v7, v6, v5, v4, *(float *)(a2 + 12));
  }
}
