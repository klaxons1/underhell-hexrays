void __thiscall sub_102238A0(_DWORD *this, int a2)
{
  const char *v3; // eax

  if ( this[380] == 1 )
  {
    v3 = (const char *)this[201];
    if ( !v3 )
      v3 = String;
    sub_1022F660("%s : cancelled via player death\n", (char)v3);
    (*(void (__thiscall **)(_DWORD *))(*this + 764))(this);
  }
}
