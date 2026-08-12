void *__thiscall sub_1003DB80(void *this, char a2)
{
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
