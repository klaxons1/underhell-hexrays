int __thiscall sub_100BAC10(_DWORD *this)
{
  int v2; // eax
  char v3; // cl
  bool v4; // zf
  char *v5; // eax
  const char *v6; // eax
  char v8[256]; // [esp+4h] [ebp-210h] BYREF
  char Buffer[144]; // [esp+104h] [ebp-110h] BYREF
  char v10; // [esp+194h] [ebp-80h] BYREF
  _BYTE v11[3]; // [esp+195h] [ebp-7Fh] BYREF

  (*(void (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(this[77] + 208) + 776))(
    *(_DWORD *)(this[77] + 208),
    v8,
    256);
  (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v8, &v10, 128);
  v2 = &v11[strlen(&v10)] - v11;
  if ( v2 > 0 )
  {
    v4 = Buffer[v2 + 143] == 10;
    v5 = &Buffer[v2 + 143];
    if ( v4 )
      *v5 = v3;
    v6 = "say";
    if ( this[83] != 1 )
      v6 = "say_team";
    sub_10228370(Buffer, 0x90u, "%s \"%s\"", (char)v6);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, Buffer);
  }
  return (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)(this[77] + 208) + 772))(
           *(_DWORD *)(this[77] + 208),
           &unk_10302674);
}
