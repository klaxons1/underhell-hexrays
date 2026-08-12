int __thiscall sub_102195C0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // esi
  double v7; // st7
  double v8; // st6
  int v9; // edi
  _DWORD *v10; // esi
  double v11; // st7
  float *v12; // eax
  int v13; // ecx
  float v14; // [esp+8h] [ebp-30h]
  float v15; // [esp+Ch] [ebp-2Ch]
  float v16; // [esp+Ch] [ebp-2Ch]
  float v17; // [esp+Ch] [ebp-2Ch]
  float v18[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v19[3]; // [esp+28h] [ebp-10h] BYREF
  int v20; // [esp+34h] [ebp-4h]

  v2 = *(_DWORD *)(this + 308);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CRagdollProp `RTTI Type Descriptor',
         0);
  v20 = v5;
  if ( !v5 )
    return sub_1025FAC0(this);
  v7 = 0.0;
  if ( 0.0 == *(float *)(this + 804) )
    goto LABEL_13;
  v8 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 800);
  if ( v8 < *(float *)(this + 804) )
  {
    if ( v8 < 0.0 )
    {
LABEL_17:
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.1,
              0.2)
          + *(float *)(dword_106B31C8 + 12);
      return sub_100EC4A0((int *)this, v17, 0);
    }
LABEL_13:
    if ( !*(_DWORD *)(this + 812) )
    {
      v9 = 0;
      if ( *(int *)(v5 + 1132) > 0 )
      {
        v10 = (_DWORD *)(v5 + 1156);
        do
        {
          v11 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*v10 + 116))(*v10) * *(float *)(this + 808);
          v16 = v11;
          v14 = -v11;
          v12 = sub_1001F010(v18, v14, v16);
          v13 = *v10;
          v19[0] = *v12;
          v19[1] = v12[1];
          v19[2] = v12[2];
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v13 + 236))(v13, v19);
          ++v9;
          v10 += 6;
        }
        while ( v9 < *(_DWORD *)(v20 + 1132) );
      }
    }
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(this + 812) )
  {
    sub_1025FAC0(this);
    v7 = 0.0;
  }
  v15 = v7;
  return sub_100EC3F0((_DWORD *)this, 0, v15, 0);
}
