int __thiscall sub_10286180(_DWORD *this, int a2, int a3)
{
  int v4; // edi

  sub_10237CE0(this + 3, a2);
  v4 = a3;
  if ( !a3 )
  {
    if ( sub_10285B80(a2) )
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 40))(this, a2, 1);
      return a2;
    }
    if ( sub_10237CC0(this + 1) )
      v4 = sub_10237CC0(this + 1);
  }
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 40))(this, v4, 1);
  return v4;
}
