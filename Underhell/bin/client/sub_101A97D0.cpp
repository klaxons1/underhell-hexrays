void __usercall sub_101A97D0(int a1@<edi>, int a2@<esi>, int a3)
{
  _DWORD *v3; // eax
  float v4[6]; // [esp+18h] [ebp-88h] BYREF
  int v5[15]; // [esp+30h] [ebp-70h] BYREF
  float v6[3]; // [esp+6Ch] [ebp-34h] BYREF
  float v7[3]; // [esp+78h] [ebp-28h] BYREF
  int v8[3]; // [esp+84h] [ebp-1Ch] BYREF
  float v9; // [esp+90h] [ebp-10h] BYREF
  float v10; // [esp+94h] [ebp-Ch] BYREF
  float *v11; // [esp+98h] [ebp-8h] BYREF
  __int16 v12; // [esp+9Ch] [ebp-4h] BYREF
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "ImpactAirboatGunCallback", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = (_DWORD *)sub_100A4440(a3, (float *)v8, v7, v6, &v12, &v11, &v10, &v9);
  if ( v3 )
  {
    if ( sub_100A47D0((int)&savedregs, a1, a2, v8, (int *)v7, v11, v10, v9, v3, v4, 3, (float *)0xFFFFFFFF) )
      sub_101A9520((float *)v8, (float *)v5, 2.0);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    *(float *)&v5[5] = 1.0;
    sub_100A4600(0, (int)v4, (int)v8, v12);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
