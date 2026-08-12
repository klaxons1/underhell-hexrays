void __cdecl sub_101A96E0(int a1)
{
  _DWORD *v1; // eax
  int v2; // esi
  float v3[21]; // [esp+8h] [ebp-88h] BYREF
  float v4[3]; // [esp+5Ch] [ebp-34h] BYREF
  float v5[3]; // [esp+68h] [ebp-28h] BYREF
  float v6[3]; // [esp+74h] [ebp-1Ch] BYREF
  float v7; // [esp+80h] [ebp-10h] BYREF
  float v8; // [esp+84h] [ebp-Ch] BYREF
  float *v9; // [esp+88h] [ebp-8h] BYREF
  __int16 v10; // [esp+8Ch] [ebp-4h] BYREF
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "ImpactCallback", 0, "Particle/Effect_Rendering", 0, 4);
  v1 = (_DWORD *)sub_100A4440(a1, v6, v5, v4, &v10, &v9, &v8, &v7);
  v2 = (int)v1;
  if ( v1 )
  {
    if ( sub_100A47D0((int)&savedregs, a1, (int)v1, (int *)v6, (int *)v5, v9, v8, v7, v1, v3, 0, (float *)0xFFFFFFFF) )
      sub_100A4B90(v6, (int)v3, (int)v4, (int)v9, 1, 0);
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      sub_100A4600(v2, (int)v3, (int)v6, v10);
  }
  else
  {
    v3[11] = 1.0;
    sub_100A4600(0, (int)v3, (int)v6, v10);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
