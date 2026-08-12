char __thiscall sub_10252380(void *this, _DWORD *a2)
{
  const char *v3; // eax
  const char *v5; // eax
  int v6; // eax
  wchar_t String[64]; // [esp+8h] [ebp-280h] BYREF
  unsigned __int16 Src[256]; // [esp+88h] [ebp-200h] BYREF

  v3 = (const char *)sub_10229A00(a2);
  if ( !_stricmp(v3, "GetText") )
  {
    (*(void (__thiscall **)(void *, unsigned __int16 *, int))(*(_DWORD *)this + 776))(this, Src, 255);
    sub_1022AC10(a2, "text", Src);
    return 1;
  }
  else
  {
    v5 = (const char *)sub_10229A00(a2);
    if ( !_stricmp(v5, "GetState") )
    {
      (*(void (__thiscall **)(void *, wchar_t *, int))(*(_DWORD *)this + 776))(this, String, 128);
      v6 = _wtoi(String);
      sub_1022ACA0(a2, "state", v6);
      return 1;
    }
    else
    {
      return sub_102420F0(this, a2);
    }
  }
}
