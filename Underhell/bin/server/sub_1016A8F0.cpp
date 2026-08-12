int __thiscall sub_1016A8F0(unsigned __int16 *this, _BYTE *a2, char a3, int a4, int a5, char a6, int a7, int a8)
{
  if ( a2 && *a2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
    (*(void (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 104))(this, a2);
    *((_DWORD *)this + 420) = -1;
    sub_1016A180(this);
    return sub_1025F360(this, &a3, &a6);
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    Warning(
      "cycler at %.0f %.0f %0.f missing modelname\n",
      *((float *)this + 145),
      *((float *)this + 146),
      *((float *)this + 147));
    return sub_1025FAC0(this);
  }
}
