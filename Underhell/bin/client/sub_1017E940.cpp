int __thiscall sub_1017E940(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  const char *v5; // eax

  sub_1024BD30(a2);
  this[67] = sub_1022A800("fov", 54);
  *((_BYTE *)this + 276) = sub_1022A800("start_framed", 0) != 0;
  *((_BYTE *)this + 320) = sub_1022A800("allow_offscreen", 0) != 0;
  result = sub_10229C90(a2);
  for ( i = result; result; i = result )
  {
    v5 = (const char *)sub_10229A00(i);
    if ( !_stricmp(v5, "model") )
      (*(void (__thiscall **)(_DWORD *, int))(*this + 892))(this, i);
    result = sub_1021F0F0(i);
  }
  return result;
}
