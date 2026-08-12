int sub_10118620()
{
  int v0; // eax
  int v1; // esi
  _BYTE v3[76]; // [esp+Ch] [ebp-78h] BYREF
  int v4; // [esp+58h] [ebp-2Ch]
  float v5[3]; // [esp+60h] [ebp-24h] BYREF
  float v6[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v7[3]; // [esp+78h] [ebp-Ch] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    v0 = sub_1025FB50(1);
  else
    v0 = sub_10261B20();
  v1 = v0;
  if ( !v0 )
    return 0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v0 + 504))(v0, v7);
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v1 + 1504))(v1, v6, 0.0);
  byte_1069BF88 = 1;
  v5[0] = v6[0] * 56755.84 + v7[0];
  v5[1] = v6[1] * 56755.84 + v7[1];
  v5[2] = 56755.84 * v6[2] + v7[2];
  sub_1002A5F0((int)&savedregs, v1, v7, v5, 33570827, v1, 0, (int)v3);
  byte_1069BF88 = 0;
  if ( v4 )
    return __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CPointCommentaryNode `RTTI Type Descriptor',
             0);
  else
    return 0;
}
