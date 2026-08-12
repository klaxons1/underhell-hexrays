int __thiscall sub_100A6780(float *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  double v7; // st5
  double v8; // st7
  double v9; // st6
  double v10; // st7
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+24h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  v12 = *(float *)(a2 + 8);
  result = v3 + 4;
  if ( v4 != result )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    do
    {
      (*(void (__thiscall **)(float *, int, float))(*(_DWORD *)this + 64))(this, v4, COERCE_FLOAT(LODWORD(v12)));
      v7 = *(float *)(v4 + 28) * v12;
      v8 = *(float *)(v4 + 32) * v12;
      *(float *)(v4 + 12) = *(float *)(v4 + 24) * v12 + *(float *)(v4 + 12);
      *(float *)(v4 + 16) = v7 + *(float *)(v4 + 16);
      v9 = v8 + *(float *)(v4 + 20);
      v10 = v12;
      *(float *)(v4 + 20) = v9;
      if ( *((_BYTE *)this + 264) )
      {
        if ( ((double (__thiscall *)(float *, int))*(_DWORD *)(*(_DWORD *)this + 56))(this, v4) + *(float *)(v4 + 20) < this[65] )
        {
          result = sub_100EB9C0(v4);
          v4 = *(_DWORD *)(a2 + 16);
          if ( v4 == *(_DWORD *)(a2 + 4) + 4 )
            return result;
          *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
          continue;
        }
        v10 = v12;
      }
      *(float *)(v4 + 44) = v10 + *(float *)(v4 + 44);
      v11 = v10;
      (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 60))(this, v4, LODWORD(v11));
      if ( *(float *)(v4 + 40) <= (double)*(float *)(v4 + 44) )
        sub_100EB9C0(v4);
      v4 = *(_DWORD *)(a2 + 16);
      result = *(_DWORD *)(a2 + 4) + 4;
      if ( v4 == result )
        return result;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    }
    while ( v4 );
  }
  return result;
}
