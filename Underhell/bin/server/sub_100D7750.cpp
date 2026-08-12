char __thiscall sub_100D7750(_DWORD *this, char *String1, char *String)
{
  const char *v5; // eax

  if ( String1 != "mins" && _stricmp(String1, "mins") && String1 != "maxs" && _stricmp(String1, "maxs") )
    return sub_100EBE90((int)this, String1, String);
  v5 = (const char *)this[23];
  if ( !v5 )
    v5 = ::String;
  Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", v5);
  return 1;
}
