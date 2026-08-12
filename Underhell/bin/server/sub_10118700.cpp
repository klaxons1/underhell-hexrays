int __thiscall sub_10118700(int *this)
{
  char v2; // al
  bool v3; // zf
  int v4; // eax
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  float v9; // [esp+4h] [ebp-10h]

  v2 = *((_BYTE *)this + 1268);
  if ( v2 || *((_BYTE *)this + 1161) && !this[212] )
  {
    v3 = v2 == 0;
    v4 = this[216];
    if ( v3 )
    {
      if ( v4 != COERCE_INT(1.0) )
      {
        if ( *((_BYTE *)this + 84) )
        {
          *((_BYTE *)this + 88) |= 1u;
        }
        else
        {
          v7 = (int *)this[6];
          if ( v7 )
            sub_100194B0(v7, 864);
        }
        v5 = 1.0;
        goto LABEL_17;
      }
    }
    else if ( v4 != COERCE_INT(3.0) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        v5 = 3.0;
      }
      else
      {
        v6 = (int *)this[6];
        if ( v6 )
          sub_100194B0(v6, 864);
        v5 = 3.0;
      }
LABEL_17:
      *((float *)this + 216) = v5;
    }
    (*(void (__thiscall **)(int *))(*this + 728))(this);
    (*(void (__thiscall **)(int *, int *))(*this + 784))(this, this);
  }
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v9, 0);
}
