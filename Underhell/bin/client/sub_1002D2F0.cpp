int __thiscall sub_1002D2F0(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  char v5; // cl
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  void *v16; // ecx
  unsigned int v17; // ebx
  int v18; // eax
  void *v19; // esi
  void *Src; // [esp+8h] [ebp-Ch]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+1Ch] [ebp+8h]

  result = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IInterpolatedVar `RTTI Type Descriptor',
             (int)&CInterpolatedVarArrayBase<float,1> `RTTI Type Descriptor',
             0);
  v4 = result;
  v21 = result;
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
      v22 = 0;
      if ( *(_WORD *)(v4 + 16) )
      {
        while ( 1 )
        {
          sub_10027660((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
          v7 = *(unsigned __int16 *)(this + 14) + (unsigned __int16)++*(_WORD *)(this + 16) - 1;
          v8 = *(unsigned __int16 *)(this + 12);
          if ( v7 >= v8 )
            v7 -= v8;
          v9 = v7 + *(unsigned __int16 *)(this + 14);
          v10 = *(unsigned __int16 *)(this + 12);
          if ( v9 >= v10 )
            v9 -= v10;
          v11 = *(_DWORD *)(this + 8) + 12 * v9;
          v12 = *(unsigned __int16 *)(v4 + 12);
          v13 = v22 + *(unsigned __int16 *)(v4 + 14);
          if ( v13 >= v12 )
            v13 -= v12;
          v14 = 3 * v13;
          v15 = *(_DWORD *)(v4 + 8);
          v16 = *(void **)(v15 + 4 * v14 + 8);
          v17 = *(unsigned __int8 *)(this + 29);
          *(float *)v11 = *(float *)(v15 + 4 * v14);
          Src = v16;
          if ( !v17 )
            break;
          if ( v17 != *(_DWORD *)(v11 + 4) )
          {
            sub_10034930(*(_DWORD *)(v11 + 8));
            *(_DWORD *)(v11 + 8) = 0;
            *(_DWORD *)(v11 + 4) = 0;
          }
          if ( !*(_DWORD *)(v11 + 8) )
          {
            *(_DWORD *)(v11 + 4) = v17;
            v18 = sub_100DDA40((unsigned __int64)v17 >> 30 != 0 ? -1 : 4 * v17);
            goto LABEL_20;
          }
LABEL_21:
          v19 = *(void **)(v11 + 8);
          if ( v19 )
          {
            if ( v17 )
              memcpy_0(v19, Src, 4 * v17);
          }
          result = v22 + 1;
          v22 = result;
          if ( result >= *(unsigned __int16 *)(v21 + 16) )
            return result;
          v4 = v21;
        }
        sub_10034930(*(_DWORD *)(v11 + 8));
        v18 = 0;
        *(_DWORD *)(v11 + 4) = 0;
LABEL_20:
        *(_DWORD *)(v11 + 8) = v18;
        goto LABEL_21;
      }
    }
  }
  return result;
}
