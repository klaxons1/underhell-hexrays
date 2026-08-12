char __thiscall sub_10249C10(_DWORD **this, _DWORD *a2)
{
  const char *v3; // eax
  unsigned __int16 Src[256]; // [esp+8h] [ebp-200h] BYREF

  v3 = (const char *)sub_10229A00(a2);
  if ( _stricmp(v3, "GetText") )
    return sub_102420F0(this, a2);
  (*(void (__thiscall **)(_DWORD *, unsigned __int16 *, int))(*this[54] + 112))(this[54], Src, 255);
  sub_1022AC10(a2, "text", Src);
  return 1;
}
