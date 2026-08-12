char __thiscall sub_10258700(_DWORD *this, _DWORD *a2)
{
  const char *v3; // eax
  unsigned __int16 Src[512]; // [esp+8h] [ebp-400h] BYREF

  v3 = (const char *)sub_10229A00(a2);
  if ( _stricmp(v3, "GetText") )
    return sub_102420F0(this, a2);
  sub_102586A0(this, 0, Src, 0x400u);
  sub_1022AC10(a2, "text", Src);
  return 1;
}
