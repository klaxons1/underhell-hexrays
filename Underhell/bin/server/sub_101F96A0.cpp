void __usercall sub_101F96A0(int a1@<ebx>, float *a2@<edi>)
{
  double v2; // st7
  _BYTE v3[12]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v4[32]; // [esp+38h] [ebp-54h] BYREF
  float v5; // [esp+58h] [ebp-34h]
  char v6; // [esp+62h] [ebp-2Ah]
  char v7; // [esp+63h] [ebp-29h]
  float v8[3]; // [esp+80h] [ebp-Ch] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "RestorePlayerTo", 0, "CLagCompensationManager", 0, 4);
  sub_10265A60(a1, a2, a2, 33636363, a1, 8, v3);
  if ( v7 || v6 )
  {
    if ( *(_DWORD *)(dword_106BD1CC + 48) )
      DevMsg(
        "RestorePlayerTo() could not restore player position for client \"%s\" ( %.1f %.1f %.1f )\n",
        (const char *)(a1 + 4296),
        *a2,
        a2[1],
        a2[2]);
    sub_10265A60(a1, a1 + 716, a2, 33636363, a1, 8, v3);
    if ( v7 || v6 )
    {
      if ( *(_DWORD *)(dword_106BD1CC + 48) )
        DevMsg(" restore failed entirely\n");
    }
    else
    {
      v2 = flt_1063EBE4 * v5;
      v8[0] = (*a2 - *(float *)(a1 + 716)) * v2 + *(float *)(a1 + 716);
      v8[1] = (a2[1] - *(float *)(a1 + 720)) * v2 + *(float *)(a1 + 720);
      v8[2] = v2 * (a2[2] - *(float *)(a1 + 724)) + *(float *)(a1 + 724);
      sub_1025F370(a1, v8, 1);
      if ( *(_DWORD *)(dword_106BD1CC + 48) )
        DevMsg(" restore got most of the way\n");
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    sub_1025F370(a1, v4, 1);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
