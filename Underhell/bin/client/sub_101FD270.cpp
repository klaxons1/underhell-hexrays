void __userpurge sub_101FD270(_DWORD *a1@<ecx>, int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // ebp
  int (__thiscall *v6)(_DWORD, int); // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // esi
  int *v13; // ebx
  int v14; // ebp
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  _DWORD *v18; // esi
  int v19; // eax
  bool v20; // cc
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // [esp+50h] [ebp-22Ch]
  int v25; // [esp+64h] [ebp-218h]
  int v26; // [esp+64h] [ebp-218h]
  int v27; // [esp+68h] [ebp-214h]
  int v28; // [esp+6Ch] [ebp-210h]
  int v29; // [esp+70h] [ebp-20Ch]
  int v30; // [esp+74h] [ebp-208h]
  _DWORD *v31; // [esp+78h] [ebp-204h] BYREF
  int v32; // [esp+7Ch] [ebp-200h] BYREF
  int v33; // [esp+80h] [ebp-1FCh]
  int v34; // [esp+84h] [ebp-1F8h]
  int v35; // [esp+88h] [ebp-1F4h]
  int v36; // [esp+8Ch] [ebp-1F0h]
  int v37; // [esp+90h] [ebp-1ECh]
  int v38; // [esp+94h] [ebp-1E8h]
  _BYTE v39[180]; // [esp+98h] [ebp-1E4h] BYREF
  int v40; // [esp+14Ch] [ebp-130h]
  int v41; // [esp+150h] [ebp-12Ch]
  char v42; // [esp+154h] [ebp-128h]
  int v43[4]; // [esp+158h] [ebp-124h] BYREF
  int v44; // [esp+168h] [ebp-114h]
  int v45; // [esp+16Ch] [ebp-110h]
  int v46; // [esp+170h] [ebp-10Ch]
  int v47; // [esp+1D8h] [ebp-A4h]
  int v48; // [esp+230h] [ebp-4Ch]
  int v49; // [esp+238h] [ebp-44h]
  int v50; // [esp+23Ch] [ebp-40h]

  v3 = a1;
  v4 = 0;
  v37 = a1[64];
  if ( v37 )
  {
    CVProfile::EnterScope(
      g_VProfCurrentProfile,
      "CParticleSystemMgr::DrawRenderCache",
      0,
      "Particle/Effect_Rendering",
      0,
      4);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
    v29 = v5;
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
    v6 = *(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4);
    v33 = 8;
    v34 = 0;
    v7 = v6(g_pMemAlloc, 224);
    v8 = 0;
    v32 = v7;
    v35 = 0;
    v36 = v7;
    v27 = 0;
    if ( v37 > 0 )
    {
      v9 = 0;
      v28 = 0;
      do
      {
        v10 = (_DWORD *)(v3[61] + v9);
        if ( v10[4] )
        {
          v25 = a3 ? v3[66] : *v10;
          sub_101FCEE0(v3, v8, v5, &v32);
          v11 = v35;
          if ( v35 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 36))(v5, v25, 0);
            sub_10016C20((int)v39);
            v12 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0);
            v37 = v12;
            if ( v11 > 0 )
            {
              v13 = (int *)(v32 + 20);
              v30 = v35;
              do
              {
                sub_10061780((int)v39, v12, 2, *(v13 - 5), *(v13 - 4));
                if ( *v13 > 0 )
                {
                  v14 = 0;
                  v26 = *v13;
                  do
                  {
                    v15 = *(v13 - 3);
                    v16 = *(_DWORD *)(v15 + v14 + 4);
                    v24 = *(_DWORD *)(v15 + v14 + 16);
                    v17 = *(_DWORD *)(v15 + v14 + 12);
                    v18 = (_DWORD *)(v14 + v15);
                    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, _BYTE *, int, int, int))(*(_DWORD *)v16 + 44))(
                      v16,
                      *v18,
                      v18[2],
                      v29,
                      v39,
                      v4,
                      v17,
                      v24);
                    v4 += v18[5];
                    v14 += 24;
                    --v26;
                  }
                  while ( v26 );
                  v5 = v29;
                  v12 = v37;
                  v4 = 0;
                }
                if ( v42 )
                {
                  switch ( v41 )
                  {
                    case 4:
                      v19 = 2 * v50 - 2;
                      break;
                    case 5:
                      v19 = 2 * v50;
                      break;
                    case 6:
                      v19 = 3 * v50 - 6;
                      break;
                    case 7:
                      v19 = 6 * v50 / 4;
                      break;
                    case 8:
                      v19 = 0;
                      break;
                    default:
                      v19 = v50;
                      break;
                  }
                  sub_10016B00(v43, v41, v19);
                }
                (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v40 + 80))(v40, v50, v46, v39);
                v44 = 0;
                v45 = 0;
                v49 = 0;
                v48 = 0;
                v47 = -1;
                v40 = 0;
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 48))(v12, -1, 0);
                v13 += 7;
                --v30;
              }
              while ( v30 );
            }
            if ( v48 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v48 + 8))(v48) )
              (*(void (__thiscall **)(int))(*(_DWORD *)v48 + 16))(v48);
            if ( v44 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v44 + 8))(v44) )
              (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 16))(v44);
            v3 = v31;
          }
        }
        v8 = v27 + 1;
        v9 = v28 + 24;
        v20 = ++v27 < v38;
        v28 += 24;
      }
      while ( v20 );
    }
    v21 = v3[64];
    if ( v21 > 0 )
    {
      v22 = 0;
      do
      {
        v23 = v3[61] + v22 + 4;
        v22 += 24;
        --v21;
        *(_DWORD *)(v23 + 12) = 0;
      }
      while ( v21 );
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 88))(v5);
    sub_101FBF20(&v31);
    if ( v33 >= 0 )
    {
      if ( v31 )
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v31);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
