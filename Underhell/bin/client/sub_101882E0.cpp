void *__thiscall sub_101882E0(void *this, char a2)
{
  sub_10188270((int)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
