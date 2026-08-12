int __thiscall sub_10025A40(unsigned __int8 *this, int a2)
{
  int result; // eax
  bool v4; // cl
  int v5; // eax
  void *v6; // ecx

  result = a2;
  v4 = a2 != this[29];
  if ( a2 < 1 )
    result = 1;
  this[29] = result;
  if ( v4 )
  {
    sub_10034930(*((_DWORD *)this + 8));
    sub_10034930(*((_DWORD *)this + 5));
    *((_DWORD *)this + 8) = sub_100DDA40(this[29]);
    v5 = sub_100DDA40((unsigned __int64)this[29] >> 30 != 0 ? -1 : 4 * this[29]);
    v6 = (void *)*((_DWORD *)this + 8);
    *((_DWORD *)this + 5) = v5;
    memset(v6, 0, this[29]);
    memset(*((void **)this + 5), 0, 4 * this[29]);
    return (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 20))(this);
  }
  return result;
}
