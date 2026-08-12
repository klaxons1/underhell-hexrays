int __thiscall sub_100E16B0(int this, char a2)
{
  *(_DWORD *)this = &CHudMessage::`vftable';
  *(_DWORD *)(this + 44) = &CHudMessage::`vftable';
  *(_DWORD *)(this + 248) = &CHudMessage::`vftable';
  dword_104345FC = 0;
  sub_1011A810(this + 17404);
  sub_10240430(this + 44);
  sub_100B5550((_BYTE *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this);
  return this;
}
