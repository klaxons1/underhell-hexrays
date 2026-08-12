int __thiscall sub_100EA370(float *this)
{
  _DWORD *v2; // eax
  int result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // edi

  if ( !*((_DWORD *)this + 6) || ((_BYTE)this[63] & 1) != 0 )
    return 0;
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 592))(this);
  if ( *((_DWORD *)this + 77) != -1
    && off_1061BE18[4 * ((_DWORD)this[77] & 0xFFF) + 2] == *((_DWORD *)this + 77) >> 12
    && off_1061BE18[4 * ((_DWORD)this[77] & 0xFFF) + 1] )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))((_DWORD *)this + 80) == 1 )
    {
      v2 = sub_100E99F0(this);
      if ( (*(int (__thiscall **)(_DWORD *))(v2[80] + 44))(v2 + 80) != 1 )
        sub_10112C00(6);
    }
    return sub_100E9630(this, 0, 0, 0);
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))((_DWORD *)this + 80);
    if ( result )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 44))((_DWORD *)this + 80) == 2 )
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v4 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 8))((_DWORD *)this + 80);
        v5 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 80) + 4))((_DWORD *)this + 80);
        v6 = sub_101DC0B0(this, v5, v4, this + 145, 1);
        sub_100E9500(this, v6);
        return v6;
      }
      else
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this);
        v8 = sub_101DB1C0(this, v7, this + 145, this + 176);
        sub_100E9500(this, v8);
        return v8;
      }
    }
  }
  return result;
}
