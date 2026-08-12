int __thiscall sub_1012A0C0(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // eax
  int v9; // ecx
  float v10; // [esp+Ch] [ebp-34h]
  int v11; // [esp+10h] [ebp-30h]
  float v12[3]; // [esp+20h] [ebp-20h] BYREF
  float v13; // [esp+2Ch] [ebp-14h]
  float v14; // [esp+30h] [ebp-10h]
  _DWORD *v15; // [esp+38h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp-4h]

  v1 = this;
  v2 = this[77];
  v15 = this;
  if ( v2 == -1 || off_1061BE18[4 * (v2 & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (v2 & 0xFFF) + 1];
  result = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollProp `RTTI Type Descriptor',
             0);
  v5 = result;
  if ( result )
  {
    v6 = 0;
    if ( *(int *)(result + 1132) > 0 )
    {
      v7 = (int *)(result + 1156);
      do
      {
        v16 = sub_10219A30();
        v13 = (double)v16 * 0.000030518509 * 4800.0 - 2400.0;
        v16 = sub_10219A30();
        v14 = (double)v16 * 0.000030518509 * 4800.0 - 2400.0;
        v8 = sub_10219A30();
        v9 = *v7;
        v16 = v8;
        v12[0] = v13;
        v12[1] = v14;
        v12[2] = (double)v8 * 0.000030518509 * 4800.0 - 2400.0;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 236))(v9, v12);
        ++v6;
        v7 += 6;
      }
      while ( v6 < *(_DWORD *)(v5 + 1132) );
      v1 = v15;
    }
    v11 = off_1061B868;
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.1,
            0.2)
        + *(float *)(dword_106B31C8 + 12);
    return sub_100EC3F0(v1, (int)sub_1012A0C0, v10, v11);
  }
  return result;
}
