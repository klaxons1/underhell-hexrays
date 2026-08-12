int __thiscall sub_101721F0(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/props_junk/bananna.mdl");
  result = sub_10177C60(this);
  v3 = this + 55;
  if ( *v3 )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*(v3 - 55) + 464))(v3 - 55, v3);
    *v3 = 0;
  }
  return result;
}
