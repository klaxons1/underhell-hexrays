int __thiscall sub_1031B4A0(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  float *v4; // eax
  double v5; // st7
  bool v6; // c0
  bool v7; // c3
  double v8; // st7
  int v10; // [esp-4h] [ebp-1Ch]
  float v11; // [esp+8h] [ebp-10h]

  if ( *((_BYTE *)this + 2156) )
  {
    if ( this[212] )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v2 = (int *)this[6];
        if ( v2 )
          sub_100194B0(v2, 848);
      }
      this[212] = 0;
    }
    *((_BYTE *)this + 2156) = 0;
  }
  else
  {
    if ( this[212] != 1 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)this[6];
        if ( v3 )
          sub_100194B0(v3, 848);
      }
      this[212] = 1;
    }
    *((_BYTE *)this + 2156) = 1;
  }
  v10 = (int)*(float *)(dword_106E3B24 + 44);
  v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  sub_1023D4B0(8, v4, v10, 0.2, (int)this, 2, 0);
  v5 = *((float *)this + 543);
  v6 = v5 < *(float *)(dword_106B31C8 + 12);
  v7 = v5 == *(float *)(dword_106B31C8 + 12);
  v8 = *(float *)(dword_106B31C8 + 12);
  if ( v6 || v7 )
    v11 = v8 + 0.1;
  else
    v11 = v8 + 0.2;
  return sub_100EC3F0(this, (int)sub_1031B4A0, v11, off_1066C8DC);
}
