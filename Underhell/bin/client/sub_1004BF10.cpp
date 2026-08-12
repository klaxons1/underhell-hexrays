void __thiscall sub_1004BF10(float *this, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v6; // eax
  float *v7; // esi
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 != v3 + 4 )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      if ( v6 == -1 )
      {
        sub_100EB9C0(v4);
      }
      else
      {
        v7 = (float *)(v4 + 12);
        (*(void (__thiscall **)(float *, int, float *, _BYTE *))(*((_DWORD *)this - 489) + 148))(
          this - 489,
          v6,
          v7,
          v11);
        if ( 1.0 != this[57] )
        {
          v8 = (float *)(*(int (__thiscall **)(float *))(*((_DWORD *)this - 490) + 36))(this - 490);
          *v7 = *v7 - *v8;
          v7[1] = v7[1] - v8[1];
          v7[2] = v7[2] - v8[2];
          v9 = this[57];
          *v7 = v9 * *v7;
          v7[1] = v7[1] * v9;
          v7[2] = v9 * v7[2];
          v10 = (float *)(*(int (__thiscall **)(float *))(*((_DWORD *)this - 490) + 36))(this - 490);
          *v7 = *v10 + *v7;
          v7[1] = v10[1] + v7[1];
          v7[2] = v10[2] + v7[2];
        }
        v2 = a2;
      }
      v4 = *(_DWORD *)(v2 + 16);
      if ( v4 == *(_DWORD *)(v2 + 4) + 4 )
        break;
      *(_DWORD *)(v2 + 16) = *(_DWORD *)(v4 + 4);
    }
  }
}
