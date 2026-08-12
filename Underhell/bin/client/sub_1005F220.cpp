char *__thiscall sub_1005F220(char *this, char a2)
{
  sub_10233210(this + 908);
  sub_10240430(this + 44);
  sub_100B5550(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
