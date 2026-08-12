int __thiscall sub_100EFF40(_DWORD *this)
{
  int result; // eax

  *this = &CParticleMgr::`vftable';
  sub_100EF7C0((int)this);
  sub_100EF750((int)(this + 59));
  sub_100EF2C0(this + 45);
  sub_100EF250((int)(this + 45));
  sub_1011A810(this + 40);
  sub_1011A810(this + 18);
  result = sub_100EC500((_WORD *)this + 20);
  if ( (int)this[12] >= 0 )
  {
    result = this[10];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[10]);
      this[10] = 0;
    }
    this[11] = 0;
  }
  return result;
}
