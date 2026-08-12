char *__thiscall sub_10032C30(int this, int a2)
{
  int v2; // edi
  char *result; // eax
  char *v4; // ebx
  char v5; // cl
  int v6; // edx
  unsigned __int16 *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  float *v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  double v18; // st7
  int v19; // ecx
  int v20; // eax

  v2 = this;
  result = (char *)__RTDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&IInterpolatedVar `RTTI Type Descriptor',
                     (int)&CInterpolatedVarArrayBase<C_AnimationLayer,0> `RTTI Type Descriptor',
                     0);
  v4 = result;
  if ( result )
  {
    v5 = *(_BYTE *)(v2 + 29);
    if ( result[29] == v5 )
    {
      result = 0;
      if ( v5 )
      {
        v6 = 0;
        do
        {
          qmemcpy((void *)(v6 + *(_DWORD *)(v2 + 20)), (const void *)(v6 + *((_DWORD *)v4 + 5)), 0x20u);
          result[*(_DWORD *)(this + 32)] = result[*((_DWORD *)v4 + 8)];
          ++result;
          v6 += 32;
          v2 = this;
        }
        while ( (int)result < *(unsigned __int8 *)(this + 29) );
      }
      v7 = (unsigned __int16 *)(v2 + 8);
      *(float *)(v2 + 24) = *((float *)v4 + 6);
      *(_DWORD *)(v2 + 14) = 0;
      v8 = 0;
      if ( *((_WORD *)v4 + 8) )
      {
        do
        {
          sub_10032630(v7, v7[4] + 1);
          v9 = ++v7[4] + v7[3] - 1;
          v10 = v7[2];
          if ( v9 >= v10 )
            v9 -= v10;
          v11 = v9 + v7[3];
          v12 = v7[2];
          if ( v11 >= v12 )
            v11 -= v12;
          v13 = *((unsigned __int16 *)v4 + 6);
          v14 = (float *)(*(_DWORD *)v7 + 36 * v11);
          v15 = v8 + *((unsigned __int16 *)v4 + 7);
          if ( v15 >= v13 )
            v15 -= v13;
          v16 = 9 * v15;
          v17 = *((_DWORD *)v4 + 2);
          v18 = *(float *)(v17 + 4 * v16);
          v19 = v17 + 4 * v16;
          v20 = *(unsigned __int8 *)(this + 29);
          *v14 = v18;
          result = (char *)memcpy_0(v14 + 1, (const void *)(v19 + 4), 32 * v20);
          ++v8;
        }
        while ( v8 < *((unsigned __int16 *)v4 + 8) );
      }
    }
  }
  return result;
}
