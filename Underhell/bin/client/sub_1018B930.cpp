int __thiscall sub_1018B930(float *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1364))(this) )
  {
    v2 = *((_DWORD *)this + 500);
    if ( v2 != 202 && v2 != 201 && v2 != 2 )
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 202);
    result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 864))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 202);
  }
  else if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1368))(this) )
  {
    v4 = *((_DWORD *)this + 500);
    if ( v4 != 205 && v4 != 204 && v4 != 2 )
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 205);
    result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 864))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 205);
  }
  else
  {
    if ( *((float *)off_103DC81C + 3) > (double)this[534] )
    {
      v5 = *((_DWORD *)this + 500);
      if ( v5 == 202 || v5 == 205 )
        return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 174);
    }
    result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 864))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, 174);
  }
  return result;
}
