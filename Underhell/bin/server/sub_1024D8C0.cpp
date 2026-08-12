int __thiscall sub_1024D8C0(_BYTE *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int result; // eax

  v4 = *(_DWORD **)this;
  if ( v4 )
  {
    if ( this[16] )
    {
      sub_1024D7C0(v4, (int)this);
      result = a2;
    }
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 3) = a3;
  }
  else
  {
    result = a3;
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 3) = a3;
  }
  return result;
}
