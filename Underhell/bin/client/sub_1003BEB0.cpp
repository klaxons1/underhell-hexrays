char __thiscall sub_1003BEB0(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  double v9; // st7
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  float *v15; // edx
  int v16; // eax
  float *v17; // eax
  size_t v19; // [esp-8h] [ebp-10h]
  int v20; // [esp+10h] [ebp+8h]

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IInterpolatedVar `RTTI Type Descriptor',
         (int)&CInterpolatedVarArrayBase<Vector,0> `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(this + 29);
    if ( *(_BYTE *)(v4 + 29) == (_BYTE)v3 )
    {
      v5 = 0;
      if ( (_BYTE)v3 )
      {
        v6 = 0;
        do
        {
          v7 = *(_DWORD *)(v4 + 20);
          v8 = *(_DWORD *)(this + 20);
          *(float *)(v8 + v6) = *(float *)(v7 + v6);
          ++v5;
          v9 = *(float *)(v7 + v6 + 4);
          v6 += 12;
          *(float *)(v8 + v6 - 8) = v9;
          *(float *)(v8 + v6 - 4) = *(float *)(v7 + v6 - 4);
          *(_BYTE *)(v5 + *(_DWORD *)(this + 32) - 1) = *(_BYTE *)(v5 + *(_DWORD *)(v4 + 32) - 1);
        }
        while ( v5 < *(unsigned __int8 *)(this + 29) );
      }
      *(float *)(this + 24) = *(float *)(v4 + 24);
      LOBYTE(v3) = 0;
      *(_DWORD *)(this + 14) = 0;
      v20 = 0;
      if ( *(_WORD *)(v4 + 16) )
      {
        do
        {
          sub_10038BE0((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
          ++*(_WORD *)(this + 16);
          v10 = *(unsigned __int16 *)(this + 12);
          v11 = *(unsigned __int16 *)(this + 14) + *(unsigned __int16 *)(this + 16) - 1;
          if ( v11 >= v10 )
            v11 -= v10;
          v12 = v11 + *(unsigned __int16 *)(this + 14);
          v13 = *(unsigned __int16 *)(this + 12);
          if ( v12 >= v13 )
            v12 -= v13;
          v14 = *(unsigned __int16 *)(v4 + 12);
          v15 = (float *)(*(_DWORD *)(this + 8) + 16 * v12);
          v16 = v20 + *(unsigned __int16 *)(v4 + 14);
          if ( v16 >= v14 )
            v16 -= v14;
          v17 = (float *)(*(_DWORD *)(v4 + 8) + 16 * v16);
          v19 = 12 * *(unsigned __int8 *)(this + 29);
          *v15 = *v17;
          memcpy_0(v15 + 1, v17 + 1, v19);
          v3 = v20 + 1;
          v20 = v3;
        }
        while ( v3 < *(unsigned __int16 *)(v4 + 16) );
      }
    }
  }
  return v3;
}
