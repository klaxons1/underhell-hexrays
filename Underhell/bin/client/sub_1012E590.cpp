int __thiscall sub_1012E590(_DWORD *this, char *String1)
{
  int result; // eax
  char v4[32]; // [esp+8h] [ebp-2Ch] BYREF
  char Buffer[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( !_stricmp(String1, "turnoff") )
    sub_10229140(&unk_10439320, 0);
  if ( !_stricmp(String1, "dropitem") )
  {
    sub_10228370(Buffer, 0xCu, "dropitem %i", this[139]);
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
    sub_10229140(&unk_10439368, 1);
  }
  result = _stricmp(String1, "useitem");
  if ( !result )
  {
    sub_10228370(v4, 0x20u, "useitem %i", this[139]);
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, v4, 1);
    return sub_10229140(&unk_10439368, 1);
  }
  return result;
}
