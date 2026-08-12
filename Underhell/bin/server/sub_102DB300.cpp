int __thiscall sub_102DB300(_DWORD *this, int a2)
{
  int v4; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this) )
  {
    sub_100F59C0(this);
    sub_100F5A30(this, a2, 0, 0);
  }
  else
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 508))(this);
    sub_10422220(v4, a2);
  }
  return a2;
}
