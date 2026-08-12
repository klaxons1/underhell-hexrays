int __cdecl sub_102AF950(float *a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi

  v1 = sub_101811E0("ar2explosion", -1);
  v2 = v1;
  if ( v1 )
  {
    v3 = __RTDynamicCast(
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&AR2Explosion `RTTI Type Descriptor',
           0);
    v4 = v3;
    if ( v3 && *(_DWORD *)(v3 + 24) )
    {
      sub_100E10C0(v3, a1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 136))(v4);
      return v4;
    }
    sub_1025FAC0(v2);
  }
  return 0;
}
