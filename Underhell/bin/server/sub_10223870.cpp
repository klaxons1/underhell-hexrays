int __thiscall sub_10223870(_DWORD *this, int a2)
{
  const char *v3; // eax

  v3 = (const char *)this[201];
  if ( !v3 )
    v3 = String;
  sub_1022F660("%s : cancelled via input\n", (char)v3);
  return (*(int (__thiscall **)(_DWORD *))(*this + 764))(this);
}
