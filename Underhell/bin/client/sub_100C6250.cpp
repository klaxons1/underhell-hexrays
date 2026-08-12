int __thiscall sub_100C6250(int this)
{
  *(_DWORD *)this = &CHudCloseCaption::`vftable';
  *(_DWORD *)(this + 44) = &CHudCloseCaption::`vftable';
  sub_100C1F10((_DWORD *)(this + 280));
  sub_100C4100(this);
  sub_100C6080((int *)(this + 432));
  sub_1011A810(this + 316);
  sub_100C2CD0((_DWORD *)(this + 280));
  sub_100EC500(this + 252);
  if ( *(int *)(this + 260) >= 0 )
  {
    if ( *(_DWORD *)(this + 252) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 252));
      *(_DWORD *)(this + 252) = 0;
    }
    *(_DWORD *)(this + 256) = 0;
  }
  sub_10240430(this + 44);
  return sub_100B5550((_BYTE *)this);
}
