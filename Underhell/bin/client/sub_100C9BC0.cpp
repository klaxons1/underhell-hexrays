_BYTE *__thiscall sub_100C9BC0(_BYTE *this, char a2)
{
  sub_1011A810(this + 264);
  sub_100B5550(this + 204);
  sub_10240430(this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
