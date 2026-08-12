void __usercall sub_101675C0(const char *a1@<edi>, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int *v9; // ecx
  const char *v10; // [esp+10h] [ebp-Ch]

  if ( a3 > 0 )
  {
    v10 = a1;
    while ( 1 )
    {
      v4 = sub_101811E0("gib", -1);
      v6 = __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CGib `RTTI Type Descriptor',
             0);
      if ( !v6 )
        Warning("classname %s used to create wrong class type\n", v10);
      if ( *(_DWORD *)(dword_106B3D0C + 48) == 1 )
      {
        sub_10166E20(v6, v5, (int)"models/germangibs.mdl");
        v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3);
        goto LABEL_11;
      }
      if ( !a4 )
        break;
      if ( a4 == 1 )
      {
        sub_10166E20(v6, v5, (int)"models/gibs/agibs.mdl");
        v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3);
        goto LABEL_11;
      }
LABEL_17:
      sub_10166170(v6, a2, 300.0, 400.0);
      if ( !--a3 )
        return;
    }
    sub_10166E20(v6, v5, (int)"models/gibs/hgibs.mdl");
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 5);
LABEL_11:
    v8 = v7;
    if ( *(_DWORD *)(v6 + 852) != v7 )
    {
      if ( *(_BYTE *)(v6 + 84) )
      {
        *(_BYTE *)(v6 + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(v6 + 24);
        if ( v9 )
          sub_100194B0(v9, 852);
      }
      *(_DWORD *)(v6 + 852) = v8;
    }
    goto LABEL_17;
  }
}
