void __userpurge sub_1015C2E0(int a1@<ecx>, int a2@<edi>, int *a3, int a4)
{
  int v5; // eax
  float *v6; // eax
  float *v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  float *v11; // eax

  if ( a1 == 1424 )
    v5 = 0;
  else
    v5 = a1 - 232;
  if ( sub_100F0010(a3, a1 - 228, v5) )
  {
    v6 = (float *)sub_100DDA40(260);
    v7 = v6;
    if ( v6 )
    {
      sub_100F2BA0(v6, (int)"C_SporeExplosion");
      *(_DWORD *)v7 = &SporeEffect::`vftable';
      v8 = (int)v7;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(a1 + 44) = v8;
    if ( v8 )
    {
      v9 = sub_100F29B0(v8, a2, a1, "particle/fire");
      v10 = *(_DWORD *)(a1 - 1424);
      *(_DWORD *)(a1 + 32) = v9;
      v11 = (float *)(*(int (__thiscall **)(int))(v10 + 36))(a1 - 1424);
      sub_100F3060(*(_DWORD *)(a1 + 44), v11);
      sub_100F29C0(*(float **)(a1 + 44), 64.0, 128.0);
    }
  }
}
