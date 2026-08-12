void __thiscall sub_103283D0(_DWORD *this, float *a2, float *a3)
{
  double v4; // st5
  double v5; // st6
  double v6; // st7
  double v7; // st5
  double v8; // st7
  double (__thiscall *v9)(_DWORD *); // edx

  if ( this[941] != 6 )
  {
    if ( *a2 <= 500.0 )
    {
      if ( *a2 >= -500.0 )
        v4 = *a2;
      else
        v4 = -500.0;
    }
    else
    {
      v4 = 500.0;
    }
    *a2 = v4;
    v5 = 500.0;
    v6 = -500.0;
    if ( a2[1] <= 500.0 )
    {
      if ( a2[1] >= -500.0 )
        v7 = a2[1];
      else
        v7 = -500.0;
      v6 = -500.0;
      v5 = 500.0;
    }
    else
    {
      v7 = 500.0;
    }
    a2[1] = v7;
    if ( v5 >= a2[2] )
    {
      if ( v6 <= a2[2] )
        v6 = a2[2];
    }
    else
    {
      v6 = v5;
    }
    a2[2] = v6;
    if ( this[941] != 6 )
      a2[2] = a2[2] + 800.0;
  }
  v8 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2220))(this);
  v9 = *(double (__thiscall **)(_DWORD *))(*this + 2220);
  if ( v8 >= a3[2] )
  {
    if ( -v9(this) <= a3[2] )
      v8 = a3[2];
    else
      v8 = -((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2220))(this);
  }
  else
  {
    v9(this);
  }
  a3[2] = v8;
  if ( this[941] == 6 )
  {
    *a3 = 0.0;
    a3[1] = 0.0;
  }
}
