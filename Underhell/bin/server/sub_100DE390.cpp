int __thiscall sub_100DE390(int this)
{
  int i; // esi
  int v3; // esi
  int result; // eax
  char ArgList[512]; // [esp+8h] [ebp-630h] BYREF
  char Destination[512]; // [esp+208h] [ebp-430h] BYREF
  char Src[512]; // [esp+408h] [ebp-230h] BYREF
  int v8[12]; // [esp+608h] [ebp-30h] BYREF

  sub_1042DE40(0, 0, 1);
  for ( i = (unsigned __int16)sub_100DB750(this + 4);
        i != 0xFFFF;
        i = (unsigned __int16)sub_100DE190((_DWORD *)(this + 4), i) )
  {
    (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_10700A38 + 144))(
      dword_10700A38,
      *(_DWORD *)(this + 8) + 24 * (unsigned __int16)i + 8,
      ArgList,
      512);
    sub_1042E0C0((int)v8, "\"%s\"\r\n", (char)ArgList);
  }
  sub_104299C0(Destination, *(char **)(this + 52), 0x200u);
  sub_104298D0(Destination);
  (*(void (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_10700A38 + 68))(
    dword_10700A38,
    Destination,
    "MOD");
  sub_104299C0(Src, *(char **)(this + 52), 0x200u);
  sub_10429C20(Src, ".manifest", 0x200u);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 40))(
         dword_10700A38 + 4,
         Src,
         "MOD")
    && !(*(unsigned __int8 (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 44))(
          dword_10700A38 + 4,
          Src,
          "MOD") )
  {
    (*(void (__thiscall **)(int, char *, int, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 48))(
      dword_10700A38 + 4,
      Src,
      1,
      "MOD");
  }
  v3 = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_10700A38 + 4) + 8))(
         dword_10700A38 + 4,
         Src,
         "wb",
         0);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
      dword_10700A38 + 4,
      v8[0],
      v8[4],
      v3);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10700A38 + 4) + 12))(dword_10700A38 + 4, v3);
  }
  else
  {
    result = Warning("Unable to persist cache manifest '%s', check file permissions\n", Src);
  }
  if ( v8[2] >= 0 )
  {
    result = v8[0];
    if ( v8[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8[0]);
  }
  return result;
}
