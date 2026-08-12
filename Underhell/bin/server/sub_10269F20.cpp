char __thiscall sub_10269F20(int *this, int a2, float *a3, float *a4)
{
  int v5; // edi
  void *v7; // eax
  float v8[3]; // [esp+8h] [ebp-18h] BYREF
  float v9[3]; // [esp+14h] [ebp-Ch] BYREF

  v5 = (*(int (__thiscall **)(int *, int))(*this + 128))(this, a2);
  if ( v5 == -1 )
    return 0;
  v7 = (void *)__RTDynamicCast(
                 this[11],
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CBaseAnimating `RTTI Type Descriptor',
                 0);
  if ( !v7 )
    return 0;
  sub_100BCCA0(v7, v5, (int)v9, (int)v8);
  if ( a3 )
  {
    *a3 = v9[0];
    a3[1] = v9[1];
    a3[2] = v9[2];
  }
  if ( a4 )
  {
    *a4 = v8[0];
    a4[1] = v8[1];
    a4[2] = v8[2];
  }
  return 1;
}
