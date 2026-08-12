void __userpurge sub_10095B00(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4)
{
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  double v11; // st6
  double v12; // st7
  double v13; // st6
  double v14; // st6
  int *v15; // edi
  int v16; // esi
  int v17; // eax
  float v18[4]; // [esp+40h] [ebp-10h] BYREF

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::BuildDetailObjectRenderLists",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 44))(dword_1044CC48)
    && *(_DWORD *)(dword_1043C114 + 48)
    && (*(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 40)) )
  {
    v18[0] = *a4;
    v18[1] = a4[1];
    v18[2] = a4[2];
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10439968 + 60))(dword_10439968, a3, a2);
    v6 = *(_DWORD *)(a1 + 20) - 1;
    for ( LODWORD(v18[3]) = v5; v6 >= 0; --v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 44))(
             dword_10413178,
             *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_10413178 + 56))(
          dword_10413178,
          *(_DWORD *)(4 * v6 + *(_DWORD *)(a1 + 8)),
          0,
          0,
          0);
      }
    }
    v7 = (_DWORD *)sub_100422D0();
    if ( v7 )
      v8 = sub_100138E0(v7);
    else
      v8 = (float)1.0;
    *(float *)(a1 + 156) = *(float *)(dword_1042CC5C + 44) * *(float *)(dword_1042CC5C + 44);
    *(float *)(a1 + 160) = *(float *)(dword_1042CC5C + 44) - *(float *)(dword_1042CCA4 + 44);
    v9 = *(float *)(a1 + 156) / v8;
    *(float *)(a1 + 156) = v9;
    v10 = v9;
    v11 = *(float *)(a1 + 160) / v8;
    v12 = v10;
    *(float *)(a1 + 160) = v11;
    if ( v11 <= 0.0 )
      v13 = 0.0;
    else
      v13 = v11 * v11;
    *(float *)(a1 + 160) = v13;
    v14 = v12 - 1.0;
    if ( v12 - 1.0 > *(float *)(a1 + 160) )
      v14 = *(float *)(a1 + 160);
    *(float *)(a1 + 160) = v14;
    *(float *)(a1 + 164) = 255.0 / (v12 - v14);
    v15 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 168))(dword_1041315C);
    v16 = *v15;
    LODWORD(v18[0]) = v18;
    v17 = sub_101422C0();
    (*(void (__thiscall **)(int *, int))(v16 + 12))(v15, v17);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
