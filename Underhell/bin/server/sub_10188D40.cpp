int (__thiscall *__thiscall sub_10188D40(_DWORD *this))(_DWORD *)
{
  const char *v2; // eax
  int v3; // edi
  int (__thiscall *result)(_DWORD *); // eax

  v2 = (const char *)this[23];
  if ( !v2 )
    v2 = String;
  if ( !_stricmp(v2, "move_keyframed") )
  {
    v3 = this[225];
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 720))(this, v3) )
      (*(void (__thiscall **)(_DWORD *, int))(*this + 720))(this, -v3);
  }
  result = (int (__thiscall *)(_DWORD *))this[1];
  if ( result )
    return (int (__thiscall *)(_DWORD *))result(this);
  return result;
}
