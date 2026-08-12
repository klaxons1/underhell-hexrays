char __thiscall sub_101102D0(int this, int a2)
{
  int v3; // eax
  int v4; // ebx
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
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  void *v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // eax
  void *v24; // esi
  void *Src; // [esp+8h] [ebp-Ch]
  int v27; // [esp+10h] [ebp-4h]
  int v28; // [esp+1Ch] [ebp+8h]

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IInterpolatedVar `RTTI Type Descriptor',
         (int)&CInterpolatedVarArrayBase<Vector,1> `RTTI Type Descriptor',
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
      v27 = 0;
      if ( *(_WORD *)(v4 + 16) )
      {
        do
        {
          sub_10027660((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
          ++*(_WORD *)(this + 16);
          v10 = *(unsigned __int16 *)(this + 12);
          v11 = *(unsigned __int16 *)(this + 16) + *(unsigned __int16 *)(this + 14) - 1;
          if ( v11 >= v10 )
            v11 -= v10;
          v12 = v11 + *(unsigned __int16 *)(this + 14);
          v13 = *(unsigned __int16 *)(this + 12);
          if ( v12 >= v13 )
            v12 -= v13;
          v14 = 3 * v12;
          v15 = v27 + *(unsigned __int16 *)(v4 + 14);
          v16 = *(_DWORD *)(this + 8) + 4 * v14;
          v17 = *(unsigned __int16 *)(v4 + 12);
          if ( v15 >= v17 )
            v15 -= v17;
          v18 = *(_DWORD *)(v4 + 8);
          v19 = 3 * v15;
          v20 = *(void **)(v18 + 4 * v19 + 8);
          v21 = *(float *)(v18 + 4 * v19);
          v22 = *(unsigned __int8 *)(this + 29);
          *(float *)v16 = v21;
          Src = v20;
          v28 = v22;
          if ( v22 )
          {
            if ( v22 != *(_DWORD *)(v16 + 4) )
            {
              sub_10034930(*(_DWORD *)(v16 + 8));
              *(_DWORD *)(v16 + 8) = 0;
              *(_DWORD *)(v16 + 4) = 0;
              v22 = v28;
            }
            if ( *(_DWORD *)(v16 + 8) )
              goto LABEL_20;
            *(_DWORD *)(v16 + 4) = v22;
            v23 = sub_100DDA40((12 * (unsigned __int64)(unsigned int)v22) >> 32 != 0 ? -1 : 12 * v22);
          }
          else
          {
            sub_10034930(*(_DWORD *)(v16 + 8));
            v23 = 0;
            *(_DWORD *)(v16 + 4) = 0;
          }
          *(_DWORD *)(v16 + 8) = v23;
          v22 = v28;
LABEL_20:
          v24 = *(void **)(v16 + 8);
          if ( v24 && v22 )
            memcpy_0(v24, Src, 12 * v22);
          v3 = v27 + 1;
          v27 = v3;
        }
        while ( v3 < *(unsigned __int16 *)(v4 + 16) );
      }
    }
  }
  return v3;
}
