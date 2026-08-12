bool __thiscall sub_101A2E60(float *this)
{
  bool result; // al
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  float *v7; // esi
  float *v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st5
  float v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+18h] [ebp-8h]

  if ( ((_DWORD)this[64] & 0x8000000) != 0 || *(float *)(dword_106B31C8 + 12) < (double)this[967] )
    return 0;
  v3 = 10;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v4 = sub_10261B20();
  else
    v4 = 0;
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0);
  if ( v5 && !(*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v5 + 876))(v5, this) )
    v3 = 20;
  v13 = (float)*((int *)this + 55);
  result = 0;
  if ( (double)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 448))(this) * 0.5 >= v13
    || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) <= v3
    && *(float *)(dword_106B31C8 + 12) >= (double)this[968] )
  {
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
    v9 = *v8 - *v7;
    v10 = v8[1] - v7[1];
    v11 = v8[2] - v7[2];
    v12 = v11 * v11 + v10 * v10 + v9 * v9;
    if ( off_10689708(v12) <= 1024.0 )
      return 1;
  }
  return result;
}
