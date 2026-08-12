int __thiscall sub_100F5E20(_DWORD *this, int a2)
{
  int result; // eax

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this) )
  {
    sub_100F59C0(this);
    result = a2;
    *(_DWORD *)a2 = this[1089];
    *(_DWORD *)(a2 + 4) = this[1090];
    *(_DWORD *)(a2 + 8) = this[1091];
  }
  else
  {
    sub_100E8850((int)this, (float *)a2);
    return a2;
  }
  return result;
}
