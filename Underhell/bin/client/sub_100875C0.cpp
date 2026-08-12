void __userpurge sub_100875C0(_DWORD *a1@<ecx>, float a2@<ebx>, int a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // edi
  _DWORD v13[512]; // [esp+2Ch] [ebp-888h] BYREF
  _DWORD v14[4]; // [esp+82Ch] [ebp-88h] BYREF
  char v15; // [esp+83Ch] [ebp-78h]
  float v16; // [esp+850h] [ebp-64h]
  float v17; // [esp+854h] [ebp-60h]
  float v18; // [esp+858h] [ebp-5Ch]
  float v19; // [esp+85Ch] [ebp-58h]
  float v20; // [esp+860h] [ebp-54h]
  char v21[12]; // [esp+864h] [ebp-50h] BYREF
  float v22; // [esp+870h] [ebp-44h]
  float v23; // [esp+874h] [ebp-40h]
  float v24; // [esp+878h] [ebp-3Ch]
  float v25; // [esp+87Ch] [ebp-38h]
  char v26; // [esp+880h] [ebp-34h]
  float v27; // [esp+884h] [ebp-30h]
  char v28; // [esp+888h] [ebp-2Ch]
  __int16 v29; // [esp+89Ch] [ebp-18h]
  int v30; // [esp+8A0h] [ebp-14h]
  _DWORD *v31; // [esp+8A4h] [ebp-10h]
  int v32; // [esp+8A8h] [ebp-Ch]
  int v33; // [esp+8ACh] [ebp-8h]
  int v34; // [esp+8B0h] [ebp-4h] BYREF
  bool v35; // [esp+8BFh] [ebp+Bh]

  v3 = a1;
  v31 = a1;
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CClientShadowMgr::ComputeShadowDepthTextures",
    0,
    "Flashlight Shadows",
    0,
    4);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v30 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v5 = sub_100874F0((int)v3, a3, 1024, (int)v13);
  v6 = *(_DWORD *)(dword_1042C01C + 48) == 0;
  v32 = v5;
  v35 = !v6;
  v33 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v7 = v3[9] + 168 * *((unsigned __int16 *)v13 + v33);
      unknown_libname_2(&v34);
      v8 = v3[72];
      v9 = 0;
      if ( v8 <= 0 )
      {
LABEL_7:
        if ( dword_1042BFF4 < 10 )
        {
          Warning("Too many shadow maps this frame!\n");
          ++dword_1042BFF4;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 80))(
          *(unsigned __int16 *)(v7 + 4),
          0,
          0);
        sub_10233380(&v34);
      }
      else
      {
        while ( *(_BYTE *)(v3[74] + v9) )
        {
          if ( ++v9 >= v8 )
            goto LABEL_7;
        }
        sub_10233260(v3[69] + 4 * v9);
        *(_BYTE *)(v9 + v3[74]) = 1;
        v27 = 1.0;
        v26 = 0;
        v28 = 0;
        v29 = 1;
        v14[1] = 0;
        v14[0] = 0;
        v14[2] = (*(int (__thiscall **)(int, float))(*(_DWORD *)v34 + 12))(v34, COERCE_FLOAT(LODWORD(a2)));
        v14[3] = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 16))(v34);
        v15 = 0;
        LOBYTE(v29) = 0;
        v10 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 84))(*(unsigned __int16 *)(v7 + 4));
        v17 = *(float *)(v10 + 36);
        v16 = v17;
        v18 = *(float *)v10;
        v19 = *(float *)(v10 + 4);
        v20 = *(float *)(v10 + 8);
        sub_101F0F70(v10 + 12, v21);
        v24 = *(float *)(v10 + 28);
        v22 = v24;
        v25 = *(float *)(v10 + 32);
        v23 = v25;
        if ( v35 || *(_BYTE *)(v10 + 81) )
          sub_10084660((void *)(v7 + 12));
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
        if ( v11 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
        a2 = *(float *)(v10 + 96);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 616))(v11, *(float *)(v10 + 92));
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD *))(*(_DWORD *)dword_10439968 + 120))(
          dword_10439968,
          v31[8],
          v34,
          v14);
        (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)dword_1041318C + 80))(
          *(unsigned __int16 *)(v7 + 4),
          v34,
          0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
        sub_10233380(&v34);
        v3 = v31;
      }
      ++v33;
    }
    while ( v33 < v32 );
    v5 = v32;
    v4 = v30;
  }
  if ( *(_DWORD *)(dword_1042C0F4 + 48) )
  {
    if ( v5 <= 0 )
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_1041318C + 88))(0xFFFF);
    else
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 88))(v13[0]);
  }
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
