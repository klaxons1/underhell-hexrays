int __thiscall sub_10130DC0(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // eax
  char Buffer[32]; // [esp+Ch] [ebp-20h] BYREF

  v3 = sub_1022A910("panel", 0);
  if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 72))(v3), "Use") )
  {
    sub_10228370(Buffer, 0x20u, "useitem %i", this[99]);
  }
  else
  {
    result = strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 72))(v3), "Drop");
    if ( result )
      return result;
    sub_10228370(Buffer, 0x20u, "dropitem %i", this[99]);
  }
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
  sub_10229140(&unk_10439368, 1);
  sub_10237D10(this);
  sub_1025DAD0(Locale);
  v5 = sub_10237D10(this);
  return sub_1025D6C0(v5);
}
