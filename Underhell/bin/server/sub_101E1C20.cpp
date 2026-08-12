int __thiscall sub_101E1C20(_DWORD *this)
{
  int v2; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 592))(this);
  if ( sub_100D87F0(this) )
  {
    v2 = sub_100D87F0(this);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 764))(v2, this);
  }
  return sub_100C8890(this);
}
