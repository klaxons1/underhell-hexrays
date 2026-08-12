int __thiscall sub_101178D0(unsigned __int16 *this)
{
  int v2; // edx

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  *((_DWORD *)this + 115) = "sprites/redglow1.vmt";
  sub_100D8500(this);
  sub_10242E10(this);
  sub_100E0970((int)this, v2, 0, 0);
  sub_101129A0(this + 160, this[178] | 4);
  sub_100EAB80(this, 16);
  return sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
}
