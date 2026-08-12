void *__thiscall sub_100C63F0(void *this, char a2)
{
  sub_100C6250((int)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
