char __thiscall sub_103957D0(float *this, float a2)
{
  int v3; // eax
  int v4; // eax
  double v5; // st7
  int v6; // ecx
  int v7; // edi
  char *v8; // ecx

  v3 = *((_DWORD *)this + 595);
  if ( v3 == 1 || v3 == 6 || v3 == 11 )
  {
    v5 = a2;
    v7 = sub_103942C0((int)this);
    if ( a2 <= 1.0 )
    {
      if ( v5 < -2.0 )
        v5 = -2.0;
    }
    else
    {
      v5 = 1.0;
    }
    this[1398] = v5;
    v4 = sub_103942C0(v6);
    if ( v4 != v7 )
    {
      sub_10023CB0(v8, 2);
      this[593] = 0.0;
      sub_1007DF00(-1);
      LOBYTE(v4) = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 2412))(this, v7);
    }
  }
  else
  {
    LOBYTE(v4) = sub_100C5050(this);
  }
  return v4;
}
