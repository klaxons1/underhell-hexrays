_BYTE *__thiscall sub_101B1460(_BYTE *this, char a2)
{
  sub_10233210(this + 316);
  sub_10240430(this + 44);
  sub_100B5550(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
