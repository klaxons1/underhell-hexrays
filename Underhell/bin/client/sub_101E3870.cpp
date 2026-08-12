void __thiscall sub_101E3870(_DWORD *this, double (__thiscall ***a2)(_DWORD))
{
  int v3; // esi
  int v4; // ebx
  float *v5; // ecx
  double v6; // st7
  float v7; // [esp+18h] [ebp+4h]

  v7 = (**a2)(a2);
  v3 = this[3] - 1;
  if ( v3 >= 0 )
  {
    v4 = 10 * v3;
    do
    {
      v5 = (float *)(v4 + *this);
      v6 = v5[1];
      if ( v6 < 0.0 || v7 + 0.01 < v6 )
      {
        if ( this[3] - v3 - 1 > 0 )
          memcpy(v5, (char *)v5 + 10, 10 * (this[3] - v3 - 1));
        --this[3];
      }
      --v3;
      v4 -= 10;
    }
    while ( v3 >= 0 );
  }
}
