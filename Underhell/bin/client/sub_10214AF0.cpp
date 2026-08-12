void __thiscall sub_10214AF0(float *this, int a2, float a3, int a4)
{
  int v5; // ebp
  bool v6; // cc
  int v8; // ecx
  __int16 v9; // bx
  long double v10; // st7
  long double v11; // st6
  int v12; // [esp+1Ch] [ebp+4h]

  v5 = 0;
  v6 = *(_DWORD *)(a2 + 40) <= 0;
  v12 = *(_DWORD *)(a2 + 6628);
  if ( !v6 )
  {
    do
    {
      v8 = v5 & 3;
      v9 = v12
         + *(_DWORD *)(*(_DWORD *)(a2 + 6112) + 4 * (v8 + v5 / 4 * *(_DWORD *)(a2 + 6368)))
         + *(_DWORD *)(a2 + 6624);
      v10 = this[12] + (this[13] - this[12]) * pow(flt_103EE7C0[(v9 + 12) & 0xFFF], this[14]);
      if ( this[11] * a3 >= flt_103EE7C0[(v9 + 15) & 0xFFF] )
      {
        v11 = (*(float *)(a2 + 36) - *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v8 + v5 / 4 * *(_DWORD *)(a2 + 6356))))
            / *(float *)(*(_DWORD *)(a2 + 6072) + 4 * (v8 + v5 / 4 * *(_DWORD *)(a2 + 6328)));
        if ( v11 <= 1.0 )
        {
          if ( v11 < 0.0 )
            v11 = 0.0;
        }
        else
        {
          v11 = 1.0;
        }
        if ( v11 >= this[12] && v11 <= this[13] && v11 >= v10 )
          *(_DWORD *)(*(_DWORD *)(a2 + 6668) + 4 * (*(_DWORD *)(a2 + 6664))++) = v5;
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a2 + 40) );
  }
}
