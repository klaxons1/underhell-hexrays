void __thiscall sub_10111810(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  double v8; // st5
  double v9; // st6
  double v10; // st7
  double v11; // st5
  unsigned int v12; // eax
  double v13; // st6
  _DWORD *v14; // edi
  _DWORD *v15; // eax
  int v16; // ebx
  int v17; // edi
  _BYTE v18[48]; // [esp+24h] [ebp-60h] BYREF
  float v19[3]; // [esp+54h] [ebp-30h] BYREF
  float v20; // [esp+60h] [ebp-24h] BYREF
  float v21; // [esp+64h] [ebp-20h]
  float v22; // [esp+68h] [ebp-1Ch]
  float v23; // [esp+6Ch] [ebp-18h] BYREF
  float v24; // [esp+70h] [ebp-14h]
  float v25; // [esp+74h] [ebp-10h]
  float v26; // [esp+78h] [ebp-Ch]
  float v27; // [esp+7Ch] [ebp-8h]
  float v28; // [esp+80h] [ebp-4h]
  int v29; // [esp+A0h] [ebp+1Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_ServerRagdollAttached::SetupBones", 0, "Client_Animation", 0, 4);
  if ( a2 )
  {
    v8 = *(float *)(this + 2788) + 0.2;
    if ( v8 == *(float *)(this + 2788) )
    {
      v9 = 1.0;
      v10 = 0.0;
      if ( *((float *)off_103DC81C + 3) < v8 )
        v11 = 0.0;
      else
        v11 = 1.0;
    }
    else
    {
      v11 = (*((float *)off_103DC81C + 3) - *(float *)(this + 2788)) / (v8 - *(float *)(this + 2788));
      if ( v11 <= 1.0 )
      {
        if ( v11 < 0.0 )
          v11 = 0.0;
      }
      else
      {
        v11 = 1.0;
      }
      v10 = 0.0;
      v9 = 1.0;
    }
    v12 = *(_DWORD *)(this + 324);
    v13 = v9 - v11;
    v26 = *(float *)(this + 2756) * v13;
    v27 = *(float *)(this + 2760) * v13;
    v28 = v13 * *(float *)(this + 2764);
    if ( v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v12 & 0xFFF) + 2) != v12 >> 12 )
      v14 = 0;
    else
      v14 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v12 & 0xFFF) + 1);
    v23 = v10;
    v24 = v10;
    v25 = v10;
    if ( v14 )
    {
      (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(v14[1] + 64))(0, -1, 524032, *((float *)off_103DC81C + 3));
      sub_100266B0(v14, *(_DWORD *)(this + 2784), (int)v18);
      sub_101ED860(this + 2744, v18, &v23);
    }
    sub_1010F860(this, a2, a3, a4, a5, a6, a7);
    if ( v14 )
    {
      sub_101ED860(
        this + 2768,
        *(_DWORD *)(this + 1284) + 48 * *(_DWORD *)(this + 4 * *(_DWORD *)(this + 2780) + 2628),
        v19);
      v20 = v23 - v19[0];
      v21 = v24 - v19[1];
      v22 = v25 - v19[2];
      v28 = v22;
      v26 = v20;
      v27 = v21;
      sub_10037BA0(this, &v23);
      *(float *)(this + 2756) = v20;
      *(float *)(this + 2760) = v21;
      *(float *)(this + 2764) = v22;
    }
    v15 = a2;
    v16 = 0;
    if ( *(int *)(*a2 + 156) > 0 )
    {
      v29 = 0;
      do
      {
        if ( (a6 & *(_DWORD *)(v15[11] + 4 * v16)) != 0 )
        {
          v17 = v29 + *(_DWORD *)(this + 1284);
          sub_101EDA00(v17, 3, &v20);
          v20 = v20 + v26;
          v21 = v21 + v27;
          v22 = v22 + v28;
          sub_101EDA20(&v20, 3, v17);
          v15 = a2;
        }
        v29 += 48;
        ++v16;
      }
      while ( v16 < *(_DWORD *)(*v15 + 156) );
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
