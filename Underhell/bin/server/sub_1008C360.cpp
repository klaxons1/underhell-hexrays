int __usercall sub_1008C360@<eax>(int a1@<edi>)
{
  int v1; // eax
  int *v2; // esi
  int v3; // eax
  int *v4; // eax
  int v5; // edx
  const char *v6; // eax
  const char *v8; // [esp+Ch] [ebp-8h]
  _BYTE v9[4]; // [esp+10h] [ebp-4h] BYREF

  v1 = sub_101811E0("ai_network", -1);
  v2 = (int *)__RTDynamicCast(
                v1,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CAI_NetworkManager `RTTI Type Descriptor',
                0);
  if ( !v2 )
    Warning("classname %s used to create wrong class type\n", v8);
  dword_10693628 = (int)v2;
  v3 = v2[202];
  v2[63] |= 0x10u;
  dword_106935D8 = v3;
  v4 = (int *)sub_10162BE0(v9, "BigNet");
  v5 = *v2;
  v2[65] = *v4;
  (*(void (__thiscall **)(int *))(v5 + 96))(v2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
    sub_10110F90(&unk_10693678, 0);
  v6 = *(const char **)(dword_106B31C8 + 60);
  if ( !v6 )
    v6 = String;
  if ( sub_10086580((char)v6) )
  {
    sub_1008A460((int)v2, a1);
    if ( !byte_1069362D )
      dword_1069042C &= ~1u;
  }
  dword_10693080 = 0;
  sub_100EC3F0((int)sub_1008BD20, 0.0, 0);
  return sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
}
