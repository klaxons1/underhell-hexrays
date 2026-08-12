void __usercall sub_101674F0(const char *a1@<edi>, _DWORD *a2, int a3, float a4, float a5, int a6, float a7)
{
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int *v11; // ecx
  const char *v12; // [esp+8h] [ebp-Ch]

  v7 = 0;
  if ( a3 > 0 )
  {
    v12 = a1;
    do
    {
      v8 = sub_101811E0("gib", -1);
      v10 = __RTDynamicCast(
              v8,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CGib `RTTI Type Descriptor',
              0);
      if ( !v10 )
        Warning("classname %s used to create wrong class type\n", v12);
      sub_10166E20(v10, v9, a6);
      if ( *(_DWORD *)(v10 + 852) != v7 )
      {
        if ( *(_BYTE *)(v10 + 84) )
        {
          *(_BYTE *)(v10 + 88) |= 1u;
        }
        else
        {
          v11 = *(int **)(v10 + 24);
          if ( v11 )
            sub_100194B0(v11, 852);
        }
        *(_DWORD *)(v10 + 852) = v7;
      }
      sub_10166170(v10, a2, a4, a5);
      *(float *)(v10 + 1132) = a7;
      if ( a2 )
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 76))(v10, a2);
      ++v7;
    }
    while ( v7 < a3 );
  }
}
