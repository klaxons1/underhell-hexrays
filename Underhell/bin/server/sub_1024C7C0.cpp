int __usercall sub_1024C7C0@<eax>(const char *a1@<edi>)
{
  int *v1; // eax
  unsigned int v2; // ecx
  int v3; // edx
  char v4; // bl
  int result; // eax
  _BYTE *v6; // esi
  int *v7; // ecx
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // eax
  int v11; // edi
  const char *v13; // [esp+0h] [ebp-8h]

  if ( dword_1064FDF0 != -1
    && (v1 = &off_1061BE18[4 * (dword_1064FDF0 & 0xFFF) + 1],
        v2 = (unsigned int)dword_1064FDF0 >> 12,
        off_1061BE18[4 * (dword_1064FDF0 & 0xFFF) + 2] == (unsigned int)dword_1064FDF0 >> 12)
    && *v1 )
  {
    if ( off_1061BE18[4 * (dword_1064FDF0 & 0xFFF) + 2] == v2 )
      v3 = *v1;
    else
      v3 = 0;
    v4 = *(_BYTE *)(v3 + 804) == 0;
    if ( off_1061BE18[4 * (dword_1064FDF0 & 0xFFF) + 2] == v2 )
      result = *v1;
    else
      result = 0;
    v6 = (_BYTE *)(result + 804);
    if ( v4 != *(_BYTE *)(result + 804) )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v6 = v4;
      }
      else
      {
        v7 = *(int **)(result + 24);
        if ( v7 )
          result = sub_100194B0(v7, 804);
        *v6 = v4;
      }
    }
  }
  else
  {
    v8 = sub_101811E0("handle_test", -1);
    v9 = (unsigned int *)__RTDynamicCast(
                           v8,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                           (int)&CHandleTest `RTTI Type Descriptor',
                           0);
    if ( !v9 )
      Warning("classname %s used to create wrong class type\n", v13);
    v10 = sub_101811E0("handle_dummy", -1);
    v11 = __RTDynamicCast(
            v10,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CHandleDummy `RTTI Type Descriptor',
            0);
    if ( !v11 )
      Warning("classname %s used to create wrong class type\n", a1);
    sub_100C0E40(v9 + 200, v11);
    (*(void (__thiscall **)(unsigned int *))(*v9 + 96))(v9);
    dword_1064FDF0 = *(_DWORD *)(*(int (__thiscall **)(unsigned int *))(*v9 + 8))(v9);
    return Msg("Created EHANDLE test entity. Run this command again to transmit the second ent.\n");
  }
  return result;
}
