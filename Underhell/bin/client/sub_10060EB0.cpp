char __userpurge sub_10060EB0@<al>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4, float *a5, float *a6)
{
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  char v12; // al
  char v13; // bl
  char v14; // al
  float *v15; // eax
  float *v16; // eax

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_RopeKeyframe::CalculateEndPointAttachment", 0, "Ropes", 0, 4);
  if ( !a3 )
    goto LABEL_2;
  if ( *(char *)(a1 + 1248) < 0
    && (v8 = __RTDynamicCast(
               (int)a3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
               (int)&C_BasePlayer `RTTI Type Descriptor',
               0)) != 0 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 876))(v8);
    v10 = (_DWORD *)v9;
    if ( !v9 )
    {
LABEL_2:
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return 0;
    }
    v11 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)(v9 + 4) + 140))(v9 + 4, "buff_attach", a2);
    if ( a6 )
      v12 = (*(int (__thiscall **)(_DWORD *, int, float *))(v10[1] + 148))(v10 + 1, v11, a5);
    else
      v12 = (*(int (__thiscall **)(_DWORD *, int))(*v10 + 284))(v10, v11);
    v13 = v12;
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return v13;
  }
  else
  {
    if ( a4 <= 0
      || (!a6
        ? (v14 = (*(int (__thiscall **)(_DWORD *, int, float *))(*a3 + 284))(a3, a4, a5))
        : (v14 = (*(int (__thiscall **)(_DWORD *, int, float *, float *))(a3[1] + 148))(a3 + 1, a4, a5, a6)),
          !v14) )
    {
      v15 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 268))(a3);
      *a5 = *v15;
      a5[1] = v15[1];
      a5[2] = v15[2];
      if ( a6 )
      {
        v16 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 40))(a3);
        *a6 = *v16;
        a6[1] = v16[1];
        a6[2] = v16[2];
      }
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 1;
  }
}
