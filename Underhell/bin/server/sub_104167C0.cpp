void __cdecl sub_104167C0(int *a1, int a2, float a3)
{
  int v3; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CFlare `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    v4 = *(float *)(v3 + 2112) - *(float *)(dword_106B31C8 + 12) - a3;
    if ( v4 > 1.0 )
    {
      v6 = v4;
      sub_10416700(v3, v6);
      v7 = v4;
      v5 = *(float *)(dword_106B31C8 + 12) + v7 + 3.0;
      sub_100EC4A0(a1, v5, 0);
    }
  }
}
