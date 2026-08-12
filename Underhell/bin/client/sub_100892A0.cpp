char __thiscall sub_100892A0(_DWORD *this, unsigned __int16 a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v6; // esi
  char v7; // bl
  int v9; // esi
  int v10; // edx
  float *v11; // esi
  int v12; // ebx
  double v13; // st7
  double v14; // st7
  double v15; // st6
  int v16; // esi
  float *v17; // eax
  float v18; // edx
  float v19; // ecx
  float v20; // eax
  double v21; // st6
  double v22; // st7
  float v23; // [esp+1Ch] [ebp-6Ch] BYREF
  float v24; // [esp+20h] [ebp-68h]
  float v25; // [esp+24h] [ebp-64h]
  int v26[3]; // [esp+30h] [ebp-58h] BYREF
  _BYTE v27[12]; // [esp+3Ch] [ebp-4Ch] BYREF
  int v28[3]; // [esp+48h] [ebp-40h] BYREF
  int v29[3]; // [esp+54h] [ebp-34h] BYREF
  _DWORD v30[3]; // [esp+60h] [ebp-28h] BYREF
  int v31; // [esp+6Ch] [ebp-1Ch] BYREF
  float v32; // [esp+70h] [ebp-18h]
  float v33; // [esp+74h] [ebp-14h]
  int v34; // [esp+78h] [ebp-10h] BYREF
  float v35; // [esp+7Ch] [ebp-Ch]
  float v36; // [esp+80h] [ebp-8h]
  float v37; // [esp+84h] [ebp-4h] BYREF

  v4 = 168 * a2;
  if ( (*(_BYTE *)(this[9] + v4 + 8) & 1) != 0 )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::CullReceiver", 0, "Flashlight Shadows", 0, 4);
    v6 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 24))(*(unsigned __int16 *)(this[9] + v4 + 4));
    (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD *))(*a3 + 84))(a3, v27, v30);
    v7 = sub_101F16C0(v27, v30, v6);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return v7;
  }
  sub_100856C0((int)this, (int)a3, (float *)&v34, &v37);
  v9 = this[9];
  v10 = *(unsigned __int16 *)(v9 + v4 + 4);
  v11 = (float *)(v4 + v9);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041318C + 20))(dword_1041318C, v10);
  sub_10056890(v11 + 3, *(float *)&v34, v35, v36, (float *)v26);
  v13 = v11[20] * -0.5;
  *(float *)v28 = -0.5 * v11[19];
  *(float *)&v28[1] = v13;
  *(float *)&v28[2] = 0.0;
  v14 = *(float *)(v12 + 68);
  v15 = v11[20] * 0.5;
  *(float *)v29 = 0.5 * v11[19];
  *(float *)&v29[1] = v15;
  *(float *)&v29[2] = v14;
  if ( !(unsigned __int8)sub_100902F0((int)v28, (int)v29, (int)v26, v37) )
    return 1;
  v16 = a4;
  sub_100856C0((int)this, a4, (float *)&v31, (float *)&a4);
  if ( (unsigned __int8)sub_100902A0((int)&v31, *(float *)&a4, (int)&v34, v37) )
  {
    if ( !(unsigned __int8)sub_10085840((int)this, (int)a3, v16, (int)&v23) )
      return 0;
  }
  else
  {
    v23 = *(float *)&v34 - *(float *)&v31;
    v24 = v35 - v32;
    v25 = v36 - v33;
  }
  v17 = sub_10087890((int)this, a2);
  v18 = v17[1];
  v19 = *v17;
  v20 = v17[2];
  *(float *)&v30[1] = v18;
  *(float *)v30 = v19;
  *(float *)&v30[2] = v20;
  v21 = *(float *)&v34 * v23 + v35 * v24 + v36 * v25;
  v22 = v24 * v32 + v23 * *(float *)&v31 + v25 * v33;
  if ( v24 * v18 + v23 * v19 + v25 * v20 <= 0.0 )
  {
    if ( v21 >= v22 )
      return 1;
  }
  else if ( v21 <= v22 )
  {
    return 1;
  }
  return 0;
}
