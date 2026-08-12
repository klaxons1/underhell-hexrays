int __thiscall sub_1006A2D0(_DWORD *this, float a2)
{
  double v2; // st7
  int result; // eax
  int v5; // edi
  int v6; // esi
  double v7; // st7
  int v8; // esi
  double v9; // st7
  int v10; // ecx
  int v11; // [esp+1Ch] [ebp-8h]

  v2 = *(float *)(dword_1041112C + 44);
  if ( v2 > 0.0 )
    a2 = a2 / v2;
  result = this[43];
  if ( result > 0 )
  {
    v5 = 40 * result;
    do
    {
      v6 = this[40];
      v5 -= 40;
      v7 = *(float *)(v6 + v5 + 20);
      v8 = v5 + v6;
      v11 = result - 1;
      if ( *(float *)(v8 + 16) != v7 )
      {
        v9 = *(float *)(v8 + 16);
        sub_101F0510(*(float *)(v8 + 16), *(float *)(v8 + 20), a2);
        *(float *)(v8 + 20) = v9;
        if ( 0.0 == *(float *)(v8 + 16) && 0.0 == v9 )
        {
          if ( *(_BYTE *)(v8 + 36) )
            (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413194 + 44))(
              *(_DWORD *)(v8 + 12),
              0.0,
              0,
              4,
              0.0);
          else
            sub_101209D0(0, 6, *(_DWORD *)(v8 + 12));
          v10 = this[43];
          if ( v10 > 0 )
          {
            qmemcpy((void *)(this[40] + v5), (const void *)(this[40] + 40 * v10 - 40), 0x28u);
            --this[43];
          }
        }
        else
        {
          sub_10069FA0(v8);
        }
      }
      result = v11;
    }
    while ( v11 > 0 );
  }
  return result;
}
