int __thiscall sub_101B8700(int this, char a2)
{
  sub_1011A810((int *)(this + 424));
  sub_10240430(this + 56);
  sub_100B5550((_BYTE *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
