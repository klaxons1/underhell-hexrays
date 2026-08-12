bool __thiscall sub_1009E900(_DWORD *this, int a2, int a3)
{
  const char *v4; // eax
  char *v5; // esi
  char *v7; // eax
  int v8; // eax
  bool v9; // zf
  char Str[256]; // [esp+8h] [ebp-104h] BYREF
  char *EndPtr; // [esp+108h] [ebp-4h] BYREF

  v4 = (const char *)sub_1022B4C0("resultVar", (int)Locale);
  v5 = (char *)v4;
  if ( !v4 )
    return 0;
  if ( strchr(v4, 91) )
  {
    sub_102282F0(Str, v5, 0x100u);
    v7 = strchr(Str, 91);
    *v7 = 0;
    this[2] = strtol(v7 + 1, &EndPtr, 10);
    v5 = Str;
  }
  else
  {
    this[2] = -1;
  }
  v8 = (*(int (__thiscall **)(int, char *, char *, int))(*(_DWORD *)a2 + 44))(a2, v5, (char *)&a3 + 3, 1);
  v9 = HIBYTE(a3) == 0;
  this[1] = v8;
  return !v9;
}
