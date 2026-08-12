void __usercall sub_101A98B0(int a1@<edi>, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  float v4[6]; // [esp+1Ch] [ebp-88h] BYREF
  int v5[15]; // [esp+34h] [ebp-70h] BYREF
  float v6[3]; // [esp+70h] [ebp-34h] BYREF
  float v7[3]; // [esp+7Ch] [ebp-28h] BYREF
  int v8[3]; // [esp+88h] [ebp-1Ch] BYREF
  float v9; // [esp+94h] [ebp-10h] BYREF
  float v10; // [esp+98h] [ebp-Ch] BYREF
  float *v11; // [esp+9Ch] [ebp-8h] BYREF
  __int16 v12; // [esp+A0h] [ebp-4h] BYREF
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "ImpactHelicopterCallback", 0, "Particle/Effect_Rendering", 0, 4);
  v2 = (_DWORD *)sub_100A4440(a2, (float *)v8, v7, v6, &v12, &v11, &v10, &v9);
  v3 = (int)v2;
  if ( v2 )
  {
    if ( sub_100A47D0((int)&savedregs, a1, (int)v2, v8, (int *)v7, v11, v10, v9, v2, v4, 3, (float *)0xFFFFFFFF) )
    {
      sub_101A9520((float *)v8, (float *)v5, 2.0);
      if ( v11 == (float *)77 || v11 == (float *)80 )
        sub_100A4B90((float *)v8, (int)v4, (int)v6, (int)v11, 1, 1);
    }
    sub_100A4600(v3, (int)v4, (int)v8, v12);
  }
  else
  {
    *(float *)&v5[5] = 1.0;
    sub_100A4600(0, (int)v4, (int)v8, v12);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
