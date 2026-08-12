void __userpurge sub_1014AA40(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // eax
  int v6; // ecx
  int **v7; // eax
  int v8; // ecx
  int v9; // edi
  void *v10; // esp
  void *v11; // esp
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // esi
  _DWORD *v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int *v20; // eax
  int v21; // eax
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  int v35; // edx
  int v36; // ecx
  int v37; // edx
  _DWORD *v38; // ecx
  int v39; // eax
  unsigned int v40; // edi
  int *v41; // eax
  _BYTE v42[12]; // [esp+18h] [ebp-A0h] BYREF
  _DWORD v43[3]; // [esp+24h] [ebp-94h] BYREF
  __int32 v44[2]; // [esp+30h] [ebp-88h] BYREF
  _DWORD v45[3]; // [esp+38h] [ebp-80h] BYREF
  __int32 v46[2]; // [esp+44h] [ebp-74h] BYREF
  _DWORD *v47; // [esp+4Ch] [ebp-6Ch]
  _DWORD v48[7]; // [esp+50h] [ebp-68h]
  _DWORD *v49; // [esp+6Ch] [ebp-4Ch]
  _DWORD v50[7]; // [esp+70h] [ebp-48h]
  _DWORD *v51; // [esp+8Ch] [ebp-2Ch]
  int v52; // [esp+90h] [ebp-28h]
  _BYTE *v53; // [esp+94h] [ebp-24h]
  int *v54; // [esp+98h] [ebp-20h]
  int v55; // [esp+9Ch] [ebp-1Ch]
  int v56; // [esp+A0h] [ebp-18h]
  int v57; // [esp+A4h] [ebp-14h]
  int v58; // [esp+A8h] [ebp-10h]
  _BYTE *v59; // [esp+ACh] [ebp-Ch]
  int v60; // [esp+B0h] [ebp-8h]
  bool v61; // [esp+B7h] [ebp-1h]

  v3 = a1;
  v52 = a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CViewRender::DrawOpaqueRenderables", 0, "DrawOpaqueRenderables", 0, 4);
  if ( *(_DWORD *)(dword_1043C084 + 48) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 128) + 272);
    if ( !v4 || *(_DWORD *)(*(_DWORD *)(v4 + 28) + 48) )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
      v5 = sub_1005FF10();
      (*(void (__thiscall **)(int *))(*v5 + 4))(v5);
      sub_101FAD20(off_103EE614);
      v6 = *(_DWORD *)(v3 + 144);
      v7 = (int **)(v6 + 589832);
      v8 = *(_DWORD *)(v6 + 688184);
      v61 = *(_DWORD *)(dword_1043C88C + 48) != 0;
      sub_10145D30(v7, v3, a2, 0, (unsigned int)&v7[3 * v8], a3);
      v9 = *(_DWORD *)(*(_DWORD *)(v3 + 144) + 688140)
         + *(_DWORD *)(*(_DWORD *)(v3 + 144) + 688156)
         + *(_DWORD *)(*(_DWORD *)(v3 + 144) + 688148)
         + *(_DWORD *)(*(_DWORD *)(v3 + 144) + 688164);
      v10 = alloca(4 * v9);
      v59 = v42;
      v11 = alloca(12 * v9);
      v12 = 0;
      v53 = v42;
      v60 = 0;
      v56 = 0;
      v58 = 0;
      v55 = 0;
      do
      {
        v13 = *(_DWORD *)(v3 + 144);
        v14 = (_DWORD *)(v12 + v13 + 49160);
        v51 = &v14[3 * *(_DWORD *)(v58 + v13 + 688140)];
        if ( v14 < v51 )
        {
          v15 = &v53[12 * v60];
          v54 = (int *)&v59[4 * (v9 - v60)];
          do
          {
            if ( *v14 )
            {
              v16 = (**(int (__thiscall ***)(_DWORD))*v14)(*v14);
              v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 28))(v16);
              v57 = v17;
              if ( v17 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 520))(v17) )
                {
                  v18 = *v14;
                  ++v60;
                  *v15 = v18;
                  v19 = v57;
                  v15[1] = v14[1];
                  v15[2] = v14[2];
                  v20 = v54 - 1;
                  v15 += 3;
                  *v20 = v19;
                  v54 = v20;
                  *v14 = 0;
                  *((_WORD *)v14 + 4) = 0;
                }
                else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 164))(v57) )
                {
                  v21 = v56;
                  *(_DWORD *)&v59[4 * v56] = v57;
                  v56 = v21 + 1;
                }
              }
            }
            v14 += 3;
          }
          while ( v14 < v51 );
          v3 = v52;
          v12 = v55;
        }
        v58 += 8;
        v12 += 98304;
        v55 = v12;
      }
      while ( v12 < 393216 );
      v22 = 0;
      if ( *(_DWORD *)(dword_1043C0CC + 48) )
      {
        v44[0] = 0;
        v44[1] = 0;
        _InterlockedExchange(v44, 0);
        v43[0] = sub_10083D00;
        v43[1] = 0;
        v43[2] = 0;
        sub_1002EF50((int)v43, (__int32)&v59[4 * (v9 - v60)], v60, 0x7FFFFFFF, 0);
        v46[0] = 0;
        v46[1] = 0;
        _InterlockedExchange(v46, 0);
        v45[0] = sub_10083D00;
        v45[1] = 0;
        v45[2] = 0;
        sub_1002EF50((int)v45, (__int32)v59, v56, 0x7FFFFFFF, 0);
      }
      v23 = *(_DWORD **)(v3 + 144);
      v24 = 3 * v23[172035];
      v47 = v23 + 12290;
      v25 = (int)&v23[v24 + 12290];
      v26 = v23[172034];
      v48[0] = v25;
      v49 = v23 + 2;
      v27 = (int)&v23[3 * v26 + 2];
      v28 = v23[172037];
      v50[0] = v27;
      v48[1] = v23 + 36866;
      v29 = (int)&v23[3 * v28 + 36866];
      v30 = v23[172036];
      v48[2] = v29;
      v50[1] = v23 + 24578;
      v31 = (int)&v23[3 * v30 + 24578];
      v32 = v23[172039];
      v50[2] = v31;
      v48[3] = v23 + 61442;
      v33 = (int)&v23[3 * v32 + 61442];
      v34 = v23[172038];
      v48[4] = v33;
      v50[3] = v23 + 49154;
      v35 = (int)&v23[3 * v34 + 49154];
      v36 = v23[172041];
      v50[4] = v35;
      v48[5] = v23 + 86018;
      v37 = (int)&v23[3 * v36 + 86018];
      v38 = v23 + 73730;
      v39 = 3 * v23[172040];
      v50[5] = v38;
      v48[6] = v37;
      v50[6] = &v38[v39];
      do
      {
        sub_10145EC0(v48[v22 - 1], v3, a3, v22 * 4, v48[v22], a3);
        v40 = v50[v22];
        sub_10143990(v50[v22 - 1], v40, a3);
        v22 += 2;
      }
      while ( v22 < 8 );
      sub_10145EC0((int)v53, v3, v40, a3, (unsigned int)&v53[12 * v60], a3);
      v41 = sub_1005FF10();
      (*(void (__thiscall **)(int *, int))(*v41 + 12))(v41, a3);
      sub_101FD270(a3);
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
