_DWORD *__cdecl sub_10243040(_BYTE *a1, float *a2, char a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  _BYTE *v5; // eax
  int v6; // edx
  const char *v8; // [esp+0h] [ebp-4h]

  v3 = sub_101811E0("env_sprite", -1);
  v4 = (_DWORD *)__RTDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CSprite `RTTI Type Descriptor',
                   0);
  if ( !v4 )
    Warning("classname %s used to create wrong class type\n", v8);
  v5 = a1;
  if ( !a1 || !*a1 )
    v5 = 0;
  v4[115] = v5;
  sub_100D8500(v4);
  sub_100E10C0((int)v4, a2);
  (*(void (__thiscall **)(_DWORD *))(*v4 + 96))(v4);
  sub_10112C00((int)(v4 + 80), 0);
  sub_1025F360(v4, &flt_106F1CA8, &flt_106F1CA8);
  sub_100E0970((int)v4, v6, 0, 0);
  if ( a3 )
    sub_10242BA0((int)v4);
  return v4;
}
