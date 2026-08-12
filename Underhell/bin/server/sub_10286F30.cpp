_DWORD *__cdecl sub_10286F30(_BYTE *a1, float *a2, char a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // edx
  const char *v7; // [esp+0h] [ebp-4h]

  v3 = sub_101811E0("env_spritetrail", -1);
  v4 = (_DWORD *)__RTDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CSpriteTrail `RTTI Type Descriptor',
                   0);
  if ( !v4 )
    Warning("classname %s used to create wrong class type\n", v7);
  sub_10242210(v4, a1, a2);
  sub_10112C00((int)(v4 + 80), 0);
  sub_100E0970((int)v4, v5, 8, 0);
  sub_1025F360(v4, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  if ( a3 )
    sub_10242BA0((int)v4);
  return v4;
}
