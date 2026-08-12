void __thiscall sub_101665D0(unsigned __int16 *this, int a2, int a3, int a4, float a5)
{
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 4);
  (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 104))(this, a2);
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  sub_1025F370(this, a3, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 748))(this, a4) )
  {
    sub_101129A0(this + 160, this[178] | 0x10);
    sub_101129A0(this + 160, this[178] & 0xFFFB);
    if ( a5 > 0.0 )
      sub_100E31F0((int)this, a5, 1);
  }
}
