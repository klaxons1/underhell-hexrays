int __thiscall sub_1002D500(int this, int a2)
{
  int result; // eax
  int v4; // edi
  char v5; // cl
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  float *v13; // ecx
  int v14; // eax
  int v15; // edx
  double v16; // st7
  int v17; // eax
  int v18; // edx

  result = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IInterpolatedVar `RTTI Type Descriptor',
             (int)&CInterpolatedVarArrayBase<float,0> `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( result )
  {
    v5 = *(_BYTE *)(this + 29);
    if ( *(_BYTE *)(result + 29) == v5 )
    {
      v6 = 0;
      if ( v5 )
      {
        do
        {
          *(float *)(*(_DWORD *)(this + 20) + 4 * v6) = *(float *)(*(_DWORD *)(v4 + 20) + 4 * v6);
          *(_BYTE *)(v6 + *(_DWORD *)(this + 32)) = *(_BYTE *)(v6 + *(_DWORD *)(v4 + 32));
          ++v6;
        }
        while ( v6 < *(unsigned __int8 *)(this + 29) );
      }
      result = 0;
      *(float *)(this + 24) = *(float *)(v4 + 24);
      *(_DWORD *)(this + 14) = 0;
      v7 = 0;
      if ( *(_WORD *)(v4 + 16) )
      {
        do
        {
          sub_10027790((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
          v8 = *(unsigned __int16 *)(this + 14) + (unsigned __int16)++*(_WORD *)(this + 16) - 1;
          v9 = *(unsigned __int16 *)(this + 12);
          if ( v8 >= v9 )
            v8 -= v9;
          v10 = v8 + *(unsigned __int16 *)(this + 14);
          v11 = *(unsigned __int16 *)(this + 12);
          if ( v10 >= v11 )
            v10 -= v11;
          v12 = *(unsigned __int16 *)(v4 + 12);
          v13 = (float *)(*(_DWORD *)(this + 8) + 8 * v10);
          v14 = v7 + *(unsigned __int16 *)(v4 + 14);
          if ( v14 >= v12 )
            v14 -= v12;
          v15 = *(_DWORD *)(v4 + 8);
          v16 = *(float *)(v15 + 8 * v14);
          v17 = v15 + 8 * v14;
          v18 = *(unsigned __int8 *)(this + 29);
          *v13 = v16;
          memcpy_0(v13 + 1, (const void *)(v17 + 4), 4 * v18);
          result = *(unsigned __int16 *)(v4 + 16);
          ++v7;
        }
        while ( v7 < result );
      }
    }
  }
  return result;
}
