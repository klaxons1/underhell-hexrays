char __thiscall sub_100305E0(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v4; // ecx

  v3 = this[581];
  if ( v3 != 1 && v3 != 2 && v3 != 3
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 264))(this)
    || (this[64] & 0x8000000) != 0
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this)
    || sub_1026A890(this + 672) )
  {
    return 0;
  }
  v4 = this + 621;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_102DC130(v4) )
      return 0;
  }
  else if ( sub_1026A890(v4)
         || sub_1026A890(this + 626)
         || *((_BYTE *)this + 2680)
         || !sub_10023D10(this, 1)
         || sub_10023D10(this, 50)
         || sub_10023D10(this, 58)
         || (unsigned __int8)sub_100697A0(41, 1)
         || (unsigned __int8)sub_100697A0(42, 1) )
  {
    return 0;
  }
  return 1;
}
