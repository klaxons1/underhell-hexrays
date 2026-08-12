void __thiscall sub_1018DE70(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_BaseHelicopter `RTTI Type Descriptor',
           0);
    if ( v3 )
    {
      v4 = (*((float *)off_103DC81C + 3) - *(float *)(v3 + 3384)) * 0.5;
      v5 = 1.0;
      if ( v4 <= 1.0 )
      {
        if ( v4 < 0.0 )
          v4 = 0.0;
        v5 = v4;
        v6 = 1.0;
      }
      else
      {
        v6 = 1.0;
      }
      if ( *(_BYTE *)(this + 8) )
        v7 = v6 - v5;
      else
        v7 = v5;
      (*(void (__stdcall **)(float))(**(_DWORD **)(this + 4) + 12))(COERCE_FLOAT(LODWORD(v7)));
    }
    else
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(1.0);
    }
  }
}
