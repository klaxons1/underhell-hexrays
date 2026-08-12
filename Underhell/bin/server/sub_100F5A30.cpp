int __thiscall sub_100F5A30(_DWORD *this, int a2, int a3, int a4)
{
  int v6; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this) )
  {
    sub_100F59C0(this);
    return sub_104222B0(this + 1092, a2, a3, a4);
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 508))(this);
    return sub_104222B0(v6, a2, a3, a4);
  }
}
