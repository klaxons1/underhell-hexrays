int __thiscall sub_100CFDC0(int *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // edi

  (*(void (__thiscall **)(int *))(*this + 728))(this);
  if ( *((_BYTE *)this + 896) )
  {
    if ( *((_BYTE *)this + 897) )
    {
      v3 = sub_100BDCE0((int)this, this[290]);
      if ( v3 != -1 )
        sub_100C3330((int)this, v3);
    }
  }
  (*(void (__thiscall **)(int *, int))(*this + 784))(this, a2);
  result = sub_100D1940(this);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      result = sub_101E7EA0(this[282]);
      v5 = result;
      if ( result )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)result + 728))(result);
        return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 784))(v5, this);
      }
    }
  }
  return result;
}
