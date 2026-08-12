int __thiscall sub_10286840(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // ecx

  v3 = a3;
  if ( a3 < a2 )
    v3 = a2;
  this[59] = a2;
  v5 = this[61];
  this[60] = v3;
  (*(void (__thiscall **)(_DWORD *, int))(*this + 768))(this, v5);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
