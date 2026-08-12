int __thiscall sub_100BD2B0(_DWORD *this)
{
  int result; // eax
  double v3; // st7
  int v4; // eax
  void (__stdcall *v5)(int); // eax

  result = sub_100422D0();
  this[56] = result;
  if ( result )
  {
    sub_100BCFA0((int)(this - 11));
    if ( !*((_BYTE *)this + 212) )
    {
      v3 = (double)sub_10236700(this) - 0.1;
      sub_102366F0((int)v3);
    }
    v4 = sub_10236700(this);
    if ( v4 <= 255 )
    {
      if ( v4 < 0 )
        sub_102366F0(0);
    }
    else
    {
      sub_102366F0(255);
    }
    v5 = *(void (__stdcall **)(int))(*this + 124);
    if ( *(_DWORD *)(dword_10430E6C + 48) )
      v5(1);
    else
      v5(0);
    return sub_1023E950(this);
  }
  return result;
}
