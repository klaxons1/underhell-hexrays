void __thiscall sub_10337EE0(unsigned __int16 *this)
{
  if ( dword_1066E9A8 != -1
    && off_1061BE18[4 * (dword_1066E9A8 & 0xFFF) + 2] == (unsigned int)dword_1066E9A8 >> 12
    && off_1061BE18[4 * (dword_1066E9A8 & 0xFFF) + 1] )
  {
    Warning("Multiple citizen response systems in level.\n");
    sub_1025FAC0((int)this);
  }
  else
  {
    if ( this )
      dword_1066E9A8 = *(_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    else
      dword_1066E9A8 = -1;
    sub_101129A0(this + 160, this[178] | 4);
    sub_100EAB80(this, 32);
    sub_100EC3F0(this, (int)sub_10334A40, 0.0, 0);
    *((float *)this + 203) = 0.0;
  }
}
