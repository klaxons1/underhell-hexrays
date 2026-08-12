char __thiscall sub_1022B3B0(_BYTE *this, void *Src, const char *a3, const char *a4)
{
  const char *v4; // ebx
  size_t v5; // eax
  size_t v6; // edi
  const char *v7; // eax

  v4 = a4;
  v5 = (*(int (__thiscall **)(void *, const char *, const char *, const char *))(*(_DWORD *)Src + 8))(Src, a3, "wb", a4);
  v6 = v5;
  if ( v5 )
  {
    sub_10229FA0(this, Src, v5, 0, 0);
    (*(void (__thiscall **)(void *, size_t))(*(_DWORD *)Src + 12))(Src, v6);
    return 1;
  }
  else
  {
    if ( !a4 )
      v4 = "NULL";
    v7 = a3;
    if ( !a3 )
      v7 = "NULL";
    DevMsg(1, "KeyValues::SaveToFile: couldn't open file \"%s\" in path \"%s\".\n", v7, v4);
    return 0;
  }
}
