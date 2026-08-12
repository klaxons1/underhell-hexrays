void __usercall sub_101F8570(int a1@<ecx>, int a2@<ebx>)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  bool v15; // al
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int *v20; // eax
  int *v21; // eax
  int j; // eax
  int v23; // esi
  int v24; // ebx
  int *v25; // eax
  int v26; // ebx
  int k; // eax
  int *v28; // eax
  int v29; // esi
  double v30; // st7
  int v31; // edi
  int v32; // edi
  void (__thiscall ***v33)(_DWORD, _DWORD); // esi
  int v35[2]; // [esp+30h] [ebp-2Ch] BYREF
  int v36; // [esp+38h] [ebp-24h]
  int v37; // [esp+3Ch] [ebp-20h]
  int v38; // [esp+40h] [ebp-1Ch]
  float v39; // [esp+44h] [ebp-18h]
  float v40; // [esp+48h] [ebp-14h]
  int v41; // [esp+4Ch] [ebp-10h]
  int v42; // [esp+50h] [ebp-Ch]
  float v43; // [esp+54h] [ebp-8h]
  int i; // [esp+58h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBasePlayer::PhysicsSimulate", 0, "Player", 0, 4);
  v3 = *(_DWORD *)(a1 + 308);
  if ( v3 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 2] == v3 >> 12 )
  {
    v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 308) & 0xFFF) + 1];
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 400))(v4);
  }
  v5 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( *(_DWORD *)(a1 + 244) != v5 )
  {
    *(_DWORD *)(a1 + 244) = v5;
    v6 = sub_101E8C00(a1);
    if ( v6 > 0 )
      sub_101F7580(a1, v6);
    if ( *(_BYTE *)(a1 + 3280) )
    {
      sub_101F82C0((int *)a1);
      sub_101F73F0((_DWORD *)(a1 + 3568));
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return;
    }
    v7 = *(_DWORD *)(a1 + 3580);
    v40 = *(float *)(dword_106B31C8 + 12);
    v8 = 0;
    v39 = *(float *)(dword_106B31C8 + 16);
    v41 = v7;
    v35[0] = 0;
    v35[1] = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v42 = 0;
    if ( v7 > 0 )
    {
      v43 = 0.0;
      do
      {
        if ( v8 < 0 || v8 >= *(_DWORD *)(a1 + 3580) )
          v9 = 0;
        else
          v9 = (int *)(LODWORD(v43) + *(_DWORD *)(a1 + 3568));
        if ( v9[3] )
        {
          v10 = v9[7];
          v11 = v9[6] - v9[5];
          if ( v10 < 24 )
          {
            if ( v10 > v11 )
            {
              i = v10 - v11;
              v10 = v11;
              do
              {
                v12 = v37;
                ++*(_DWORD *)(a1 + 4044);
                sub_101F8410(v35, v12, a1 + 4036);
                --i;
              }
              while ( i );
            }
            for ( ; v10 > 0; --v10 )
              sub_101F8410(v35, v37, 84 * (v10 + v9[5]) + *v9 - 84);
          }
          v13 = v9[5] - 1;
          if ( v13 >= 0 )
          {
            v14 = 84 * v13;
            for ( i = 84 * v13; ; v14 = i )
            {
              sub_101F8410(v35, v37, v14 + *v9);
              i -= 84;
              if ( --v13 < 0 )
                break;
            }
          }
          sub_101F7FB0(a1 + 4036, *v9);
          v7 = v41;
          v8 = v42;
        }
        LODWORD(v43) += 36;
        v42 = ++v8;
      }
      while ( v8 < v7 );
    }
    v15 = sub_100EA2A0();
    v16 = v37;
    i = v37;
    v17 = v15 + 1;
    v18 = *(_DWORD *)(dword_106B31C8 + 36);
    if ( v18 < v17 || v37 <= v17 )
      goto LABEL_35;
    v19 = v18 - 1;
    if ( v37 < v18 - 1 )
      v19 = v37;
    v16 = v37 - v19;
    i = v37 - v19;
    if ( v19 <= 0 )
    {
LABEL_35:
      sub_101F73F0((_DWORD *)(a1 + 3568));
    }
    else
    {
      v20 = (int *)sub_101F7510((int *)a1);
      sub_101F8490(v20, v35[0] + 84 * v16, v19);
    }
    v43 = *(float *)(dword_106B31C8 + 28);
    if ( v16 > 0 )
    {
      v21 = sub_10188570();
      (*(void (__thiscall **)(int *, int, int))(*v21 + 52))(v21, a1, a2);
      if ( *(_BYTE *)(a1 + 3361) )
      {
        for ( j = dword_106E1C58; j; j = *(_DWORD *)(j + 4) )
          *(_DWORD *)(j + 12) = a1;
      }
      v23 = v35[0];
      v42 = v16;
      do
      {
        v24 = *(_DWORD *)a1;
        v25 = sub_10188570();
        (*(void (__thiscall **)(int, int, int *))(v24 + 1524))(a1, v23, v25);
        if ( *(_DWORD *)(a1 + 3588) )
        {
          sub_101E5490(a1, a1 + 4332, a1 + 4344, v43);
          v43 = *(float *)(dword_106B31C8 + 28) + v43;
        }
        v23 += 84;
        --v42;
      }
      while ( v42 );
      v26 = i;
      for ( k = dword_106E1C58; k; k = *(_DWORD *)(k + 4) )
        *(_DWORD *)(k + 12) = 0;
      v28 = sub_10188570();
      (*(void (__thiscall **)(int *, _DWORD))(*v28 + 52))(v28, 0);
      if ( *(_WORD *)(a1 + 4882) )
      {
        v29 = *(_DWORD *)(a1 + 4864) + 40 * *(unsigned __int16 *)(a1 + 4878);
        *(float *)v29 = *(float *)dword_106B31C8;
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        *(float *)(v29 + 24) = *(float *)(a1 + 580);
        *(float *)(v29 + 28) = *(float *)(a1 + 584);
        *(float *)(v29 + 32) = *(float *)(a1 + 588);
        v30 = *(float *)(dword_106B31C8 + 12);
        *(_DWORD *)(v29 + 4) = v26;
        *(float *)(v29 + 16) = v30;
      }
    }
    v31 = v37;
    *(float *)(dword_106B31C8 + 12) = v40;
    v32 = v31 - 1;
    *(float *)(dword_106B31C8 + 16) = v39;
    if ( v32 >= 0 )
    {
      v33 = (void (__thiscall ***)(_DWORD, _DWORD))(v35[0] + 84 * v32);
      do
      {
        (**v33)(v33, 0);
        v33 -= 21;
        --v32;
      }
      while ( v32 >= 0 );
    }
    if ( v36 >= 0 )
    {
      if ( v35[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
