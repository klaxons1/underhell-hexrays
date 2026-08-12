int __thiscall sub_100A4320(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // ebx
  char v5[128]; // [esp+8h] [ebp-190h] BYREF
  char String[128]; // [esp+88h] [ebp-110h] BYREF
  char Destination[128]; // [esp+108h] [ebp-90h] BYREF
  char *v8; // [esp+188h] [ebp-10h] BYREF
  float v9; // [esp+190h] [ebp-8h] BYREF
  float v10; // [esp+194h] [ebp-4h]

  sub_1009ACB0(this);
  sub_104299C0(Destination, (char *)(this + 116), 0x80u);
  sub_1009ACB0(this);
  if ( _stricmp((const char *)(this + 116), "{") )
    return sub_1009AEC0(this, "Expecting '{' in enumeration '%s', got '%s'\n", Destination, (const char *)(this + 116));
  while ( 1 )
  {
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v3 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v3 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v3 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    result = _stricmp((const char *)(this + 116), "}");
    if ( !result )
      break;
    if ( (int)strlen((const char *)(this + 116)) <= 0 )
      return sub_1009AEC0(this, "Expecting more tokens in enumeration '%s'\n", Destination);
    sub_104299C0(v5, (char *)(this + 116), 0x80u);
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v4 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v4 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v4 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    v10 = atof((const char *)(this + 116));
    sub_10429A00(String, 0x80u, "[%s::%s]", (char)Destination);
    _strlwr(String);
    v9 = v10;
    v8 = String;
    if ( sub_1009D560((_WORD *)(this + 88), (int)&v8) == -1 )
      sub_100A4060(this + 88, String, (char **)&v9);
  }
  return result;
}
