_DWORD *__thiscall sub_101FD890(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  bool v4; // zf

  sub_101F9BD0(this);
  sub_101FAFF0(this + 142);
  sub_101FAFF0(this + 147);
  sub_101FAFF0(this + 152);
  sub_101FAFF0(this + 157);
  sub_101FAFF0(this + 162);
  sub_101FAFF0(this + 167);
  sub_1011A810(this + 202);
  sub_1011A810(this + 197);
  sub_1011A810(this + 192);
  sub_1011A810(this + 187);
  sub_1011A810(this + 182);
  sub_1011A810(this + 177);
  sub_101FD620(this + 172);
  sub_1011A810(this + 167);
  sub_1011A810(this + 162);
  sub_1011A810(this + 157);
  sub_1011A810(this + 152);
  sub_1011A810(this + 147);
  sub_1011A810(this + 142);
  if ( (int)this[140] >= 0 )
  {
    if ( this[138] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[138]);
      this[138] = 0;
    }
    this[139] = 0;
  }
  sub_10233210(this + 79);
  result = (_DWORD *)*this;
  if ( *this )
  {
    do
    {
      v3 = (_DWORD *)*result;
      v4 = *result == 0;
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result = v3;
    }
    while ( !v4 );
  }
  *this = 0;
  return result;
}
