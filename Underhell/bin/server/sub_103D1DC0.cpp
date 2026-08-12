char __thiscall sub_103D1DC0(_BYTE *this, _DWORD *a2)
{
  float *v4; // eax
  float v5; // [esp+0h] [ebp-24h]
  int v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]

  if ( (a2[63] & 0x8000000) != 0
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2)
    && !__RTDynamicCast(
          (int)a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CRagdollProp `RTTI Type Descriptor',
          0) )
  {
    return 0;
  }
  v6 = LODWORD(flt_106F1CA8);
  v7 = LODWORD(flt_106F1CAC);
  v8 = LODWORD(flt_106F1CB0);
  v5 = *(float *)(dword_106B31C8 + 12);
  v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 208))(a2);
  sub_100C3210(v4, (int)String, v5, 0, 0, v6, v7, v8, 0);
  this[1141] = 1;
  return 1;
}
