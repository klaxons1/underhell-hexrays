int __thiscall sub_100D63C0(_DWORD *this, const char *a2, int a3, const char *a4, int a5, int a6, int a7, int a8)
{
  const char *v9; // ebx
  const char *v10; // esi
  const char *v11; // ecx
  const char *v12; // eax
  const char *v14; // esi
  const char *v15; // edx
  const char *v16; // ecx
  const char *v17; // eax
  const char *v18; // esi
  const char *v19; // ecx
  const char *v20; // eax
  double ArgList; // [esp+0h] [ebp-420h]
  double ArgLista; // [esp+0h] [ebp-420h]
  double ArgList_4; // [esp+4h] [ebp-41Ch]
  char Buffer[1024]; // [esp+20h] [ebp-400h] BYREF

  if ( a8 == 5 )
  {
    v9 = a2;
    ArgList = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(Buffer, 0x400u, "%3.1f  (%s,%d) <-- (%s)\n", SLOBYTE(ArgList));
  }
  else
  {
    v9 = a2;
    if ( a8 == 2 )
    {
      ArgLista = *(float *)(dword_106B31C8 + 12);
      sub_10429A00(Buffer, 0x400u, "%3.1f  (%s,%s) <-- (%s)\n", SLOBYTE(ArgLista));
    }
    else
    {
      ArgList_4 = *(float *)(dword_106B31C8 + 12);
      sub_10429A00(Buffer, 0x400u, "%3.1f  (%s) <-- (%s)\n", SLOBYTE(ArgList_4));
    }
  }
  sub_100D5D60(this, Buffer, 10);
  if ( a8 == 5 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(a3 + 260) )
      {
        v10 = *(const char **)(a3 + 260);
      }
      else
      {
        v10 = *(const char **)(a3 + 92);
        if ( !v10 )
          v10 = String;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( this )
    {
      v11 = (const char *)this[65];
      if ( !v11 )
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
    return DevMsg(2, "input: (%s,%d) -> (%s,%s), from (%s)\n", v9, a4, v12, v11, v10);
  }
  else if ( a8 == 2 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(a3 + 260) )
      {
        v14 = *(const char **)(a3 + 260);
      }
      else
      {
        v14 = *(const char **)(a3 + 92);
        if ( !v14 )
          v14 = String;
      }
    }
    else
    {
      v14 = 0;
    }
    if ( this )
    {
      if ( this[65] )
      {
        v15 = (const char *)this[65];
      }
      else
      {
        v15 = (const char *)this[23];
        if ( !v15 )
          v15 = String;
      }
    }
    else
    {
      v15 = "<<null>>";
    }
    v16 = (const char *)this[23];
    if ( !v16 )
      v16 = String;
    v17 = a4;
    if ( !a4 )
      v17 = String;
    return DevMsg(2, "input: (%s,%s) -> (%s,%s), from (%s)\n", v9, v17, v16, v15, v14);
  }
  else
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(a3 + 260) )
      {
        v18 = *(const char **)(a3 + 260);
      }
      else
      {
        v18 = *(const char **)(a3 + 92);
        if ( !v18 )
          v18 = String;
      }
    }
    else
    {
      v18 = 0;
    }
    if ( this )
    {
      v19 = (const char *)this[65];
      if ( !v19 )
      {
        v19 = (const char *)this[23];
        if ( !v19 )
          v19 = String;
      }
    }
    else
    {
      v19 = "<<null>>";
    }
    v20 = (const char *)this[23];
    if ( !v20 )
      v20 = String;
    return DevMsg(2, "input: (%s) -> (%s,%s), from (%s)\n", v9, v20, v19, v18);
  }
}
