void __usercall sub_10154660(int a1@<ecx>, int a2@<esi>)
{
  int v3; // eax
  int v4; // edi
  int (__thiscall *v5)(int, float *); // edx
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st6
  double v12; // rt1
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double (__thiscall *v17)(int); // edx
  double v18; // st7
  double v19; // st7
  float *v20; // eax
  double v21; // st7
  bool v22; // zf
  double v23; // st7
  float *v24; // eax
  float *v25; // eax
  float v26; // [esp+34h] [ebp-54h]
  _BYTE v27[12]; // [esp+44h] [ebp-44h] BYREF
  float v28[3]; // [esp+50h] [ebp-38h] BYREF
  int v29[2]; // [esp+5Ch] [ebp-2Ch] BYREF
  float v30; // [esp+64h] [ebp-24h]
  float v31; // [esp+68h] [ebp-20h]
  float v32; // [esp+6Ch] [ebp-1Ch]
  float v33; // [esp+70h] [ebp-18h]
  float v34; // [esp+74h] [ebp-14h]
  float v35; // [esp+78h] [ebp-10h]
  float v36; // [esp+7Ch] [ebp-Ch]
  float v37; // [esp+80h] [ebp-8h]
  bool v38; // [esp+87h] [ebp-1h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "SnowFall", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = sub_100422D0();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 532);
    v35 = *((float *)off_103DC81C + 4);
    v6 = (float *)v5(v3, v28);
    *(float *)(a1 + 1216) = *v6;
    *(float *)(a1 + 1220) = v6[1];
    *(float *)(a1 + 1224) = v6[2];
    sub_100392A0((char *)v4, (int)v29, 0, 0);
    v30 = 0.0;
    sub_10038150(v4);
    v31 = *(float *)(v4 + 244);
    v32 = *(float *)(v4 + 248);
    v33 = *(float *)(v4 + 252);
    v7 = off_103EDFEC();
    v34 = v7;
    v8 = 0.40000001 * v7 * *(float *)(dword_1043D104 + 44) + 64.0;
    v9 = *(float *)v29 * v8;
    v10 = v8;
    v11 = *(float *)&v29[1] * v8;
    v12 = v10 * v30;
    *(float *)(a1 + 1216) = v9 + *(float *)(a1 + 1216);
    *(float *)(a1 + 1220) = v11 + *(float *)(a1 + 1220);
    *(float *)(a1 + 1224) = v12 + *(float *)(a1 + 1224);
    v13 = v7 * 1.25 * *(float *)(dword_1043D0BC + 44);
    v14 = v31 * v13;
    v15 = v32 * v13;
    v16 = v13 * v33;
    *(float *)(a1 + 1216) = v14 + *(float *)(a1 + 1216);
    *(float *)(a1 + 1220) = v15 + *(float *)(a1 + 1220);
    *(float *)(a1 + 1224) = v16 + *(float *)(a1 + 1224);
    v37 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 952))(v4);
    v36 = COERCE_FLOAT(sub_10012950((_DWORD *)v4));
    v38 = v37 != (double)SLODWORD(v36);
    v37 = 1.0;
    if ( v38 )
    {
      v36 = COERCE_FLOAT(sub_10012950((_DWORD *)v4));
      v17 = *(double (__thiscall **)(int))(*(_DWORD *)v4 + 952);
      v36 = (float)SLODWORD(v36);
      v18 = v17(v4);
      v37 = v36 / v18 * 0.5;
    }
    v19 = v35;
    if ( v35 < (double)*(float *)(a1 + 1204) )
    {
      *(float *)(a1 + 1204) = *(float *)(a1 + 1204) - v19;
    }
    else
    {
      v35 = v19 - *(float *)(a1 + 1204);
      *(float *)(a1 + 1204) = *(float *)(a1 + 1200);
      *(_DWORD *)(a1 + 1208) = 0;
      v20 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v4 + 532))(v4, v27, a2);
      v28[0] = *v20;
      v28[1] = v20[1];
      v28[2] = v20[2];
      if ( sub_10151D40((_DWORD *)a1, v28) == -1 )
      {
        v21 = *(float *)(dword_1043D074 + 44);
      }
      else
      {
        v21 = v34 * 0.5 + *(float *)(dword_1043D02C + 44);
        *(_DWORD *)(a1 + 1208) = 1;
      }
      v22 = !v38;
      *(float *)(a1 + 1228) = v21;
      v23 = *(float *)(a1 + 1228);
      v36 = *(float *)(a1 + 1228);
      if ( !v22 )
      {
        if ( *(_DWORD *)(a1 + 1208) == 1 )
          v23 = *(float *)(dword_1043D074 + 44);
        v36 = v23 * v37;
      }
      v24 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 532))(v4, v27);
      sub_10151DB0(a1, (float *)(a1 + 1216), v36, v24, (float *)v29);
      if ( *(_DWORD *)(a1 + 1256) && *(_DWORD *)(a1 + 1208) != 1 )
        *(_DWORD *)(a1 + 1208) = 2;
    }
    if ( *(_DWORD *)(a1 + 1208) )
    {
      sub_100F3060(*(_DWORD *)(a1 + 1212), (float *)(a1 + 1216));
      v26 = v37;
      v25 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 532))(v4, v27);
      sub_101542F0((_DWORD *)a1, v35, *(float *)(a1 + 1228), v25, (float *)v29, v26);
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
