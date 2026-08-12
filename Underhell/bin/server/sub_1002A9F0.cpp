int __thiscall sub_1002A9F0(float *this, int a2)
{
  int result; // eax
  int i; // ebx
  int v5; // eax
  float *v6; // esi
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // ecx
  int v11; // [esp+Ch] [ebp+8h]

  result = sub_100D7680(a2);
  v11 = result;
  if ( result )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    result = dword_10690E04;
    for ( i = 0; i < dword_10690E04; ++i )
    {
      v5 = result != 0 ? dword_10690DF8 : 0;
      v6 = *(float **)(v5 + 4 * i);
      if ( v6 && v6 != this )
      {
        if ( ((_DWORD)v6[63] & 0x800) != 0 )
          sub_100DAE60(*(_DWORD *)(v5 + 4 * i));
        if ( fabs(v6[147] - this[147]) < 120.0 )
        {
          v7 = v6[146] - this[146];
          v8 = v6[145] - this[145];
          if ( v8 * v8 + v7 * v7 < 360000.0 )
          {
            if ( (v9 = *((_DWORD *)v6 + 699), v10 = *((_DWORD *)this + 699), v9 == v10) && v9 && v10
              || (*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 1080))(this, v6) == 3 )
            {
              (*(void (__thiscall **)(float *, float *, int))(*(_DWORD *)v6 + 1008))(v6, this, v11);
            }
          }
        }
      }
      result = dword_10690E04;
    }
  }
  return result;
}
