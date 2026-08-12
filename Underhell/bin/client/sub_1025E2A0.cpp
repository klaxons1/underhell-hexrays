int __thiscall sub_1025E2A0(_DWORD *this, int a2)
{
  int (*v3)(void); // edx

  if ( a2 < 0 || a2 >= this[58] )
  {
    v3 = *(int (**)(void))(*this + 16);
    this[52] = 0;
    return v3();
  }
  else
  {
    this[52] = a2;
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  }
}
