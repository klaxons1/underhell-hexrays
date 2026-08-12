const char *__thiscall sub_100D8800(_DWORD *this)
{
  int v3; // eax

  if ( !sub_10249D60(this[110]) )
    return String;
  v3 = sub_10249D60(this[110]);
  return (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 728))(v3);
}
