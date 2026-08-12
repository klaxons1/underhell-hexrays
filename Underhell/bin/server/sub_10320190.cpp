int __cdecl sub_10320190(int a1)
{
  float v2; // ecx
  float v3; // edx
  int v4; // eax
  void *v5; // edi
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  float *v10; // ebx
  int *v11; // edi
  float *v12; // eax
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  float *v17; // eax
  int v18; // ecx
  int v19; // edx
  double v20; // st6
  double v21; // st7
  int *v22; // ebx
  int (__thiscall *v23)(int, _DWORD, int); // edx
  float *v24; // eax
  int v25; // ebx
  int v26; // esi
  int result; // eax
  char *v28; // [esp+38h] [ebp-144h]
  char *v29; // [esp+38h] [ebp-144h]
  char *v30; // [esp+38h] [ebp-144h]
  _BYTE v31[48]; // [esp+4Ch] [ebp-130h] BYREF
  _BYTE v32[48]; // [esp+7Ch] [ebp-100h] BYREF
  _BYTE v33[48]; // [esp+ACh] [ebp-D0h] BYREF
  _BYTE v34[48]; // [esp+DCh] [ebp-A0h] BYREF
  float v35; // [esp+10Ch] [ebp-70h]
  float v36; // [esp+110h] [ebp-6Ch]
  float v37; // [esp+114h] [ebp-68h]
  float v38; // [esp+118h] [ebp-64h]
  float v39; // [esp+11Ch] [ebp-60h]
  char v40; // [esp+120h] [ebp-5Ch]
  float v41[3]; // [esp+124h] [ebp-58h] BYREF
  int *v42; // [esp+130h] [ebp-4Ch]
  float v43; // [esp+134h] [ebp-48h] BYREF
  float v44; // [esp+138h] [ebp-44h]
  float v45; // [esp+13Ch] [ebp-40h]
  float v46[3]; // [esp+140h] [ebp-3Ch] BYREF
  float v47; // [esp+14Ch] [ebp-30h] BYREF
  float v48; // [esp+150h] [ebp-2Ch]
  float v49; // [esp+154h] [ebp-28h]
  float v50; // [esp+158h] [ebp-24h] BYREF
  float v51; // [esp+15Ch] [ebp-20h]
  float v52; // [esp+160h] [ebp-1Ch]
  float v53; // [esp+164h] [ebp-18h] BYREF
  float v54; // [esp+168h] [ebp-14h]
  float v55; // [esp+16Ch] [ebp-10h]
  int v56; // [esp+170h] [ebp-Ch] BYREF
  float v57; // [esp+174h] [ebp-8h]
  float v58; // [esp+178h] [ebp-4h]
  int *v59; // [esp+184h] [ebp+8h]
  int v60; // [esp+184h] [ebp+8h]

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v2 = *(float *)(a1 + 704);
  v3 = *(float *)(a1 + 708);
  v46[2] = *(float *)(a1 + 712);
  v46[0] = v2;
  v46[1] = v3;
  (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)a1 + 528))(a1, &v43, 0, v41);
  v4 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CNPC_AttackHelicopter `RTTI Type Descriptor',
         0);
  v5 = (void *)v4;
  if ( v4 )
  {
    v6 = sub_100BEF30(v4, "damage0");
    if ( v6 > -1 )
    {
      sub_100BCCA0(v5, v6, (int)&v56, (int)v46);
      sub_104222B0(v46, &v43, 0, v41);
    }
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(float *)(a1 + 580);
  v8 = *(float *)(a1 + 584);
  v47 = 0.0;
  v9 = *(float *)(a1 + 588);
  v48 = 0.0;
  v53 = v7;
  v49 = 0.0;
  v54 = v8;
  v55 = v9;
  if ( *(_DWORD *)(dword_10698344 + 48) )
    (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)a1 + 528))(a1, 0, &v47, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v10 = (float *)(a1 + 476);
  v11 = sub_1031FD30(&v53, v46, (float *)(a1 + 476), (int)"models/gibs/helicopter_brokenpiece_06_body.mdl", 1);
  v28 = off_1066C8C4[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2)];
  v12 = sub_1014AE30((float *)&v56, 0.0, 360.0);
  sub_103157F0(a1, &v53, v12, (int)v28, 0);
  v13 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v56 = v41[0] * -38.0;
  v57 = v41[1] * -38.0;
  v58 = -38.0 * v41[2];
  v50 = v43 * 100.0;
  v51 = v44 * 100.0;
  v52 = 100.0 * v45;
  if ( (v13 & 1) != 0 )
    sub_100DAE60(a1);
  v14 = *(_DWORD *)(a1 + 252) >> 12;
  v15 = *(float *)(a1 + 584) + v51 + v57;
  v16 = *(float *)(a1 + 588) + v52 + v58;
  v53 = *(float *)(a1 + 580) + v50 + *(float *)&v56;
  v54 = v15;
  v55 = v16;
  *(float *)&v56 = v47 * -800.0;
  v57 = v48 * -800.0;
  v58 = -800.0 * v49;
  if ( (v14 & 1) != 0 )
    sub_100DAFD0(a1);
  v50 = *(float *)&v56 + *v10;
  v51 = *(float *)(a1 + 480) + v57;
  v52 = *(float *)(a1 + 484) + v58;
  v59 = sub_1031FD30(&v53, v46, &v50, (int)"models/gibs/helicopter_brokenpiece_04_cockpit.mdl", 0);
  v29 = off_1066C8C4[(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2)];
  v17 = sub_1014AE30((float *)&v56, 0.0, 360.0);
  sub_103157F0(a1, &v53, v17, (int)v29, 0);
  if ( v11 )
    v59[281] = *(_DWORD *)(*(int (__thiscall **)(int *))(*v11 + 8))(v11);
  else
    v59[281] = -1;
  v18 = *(_DWORD *)(a1 + 252) >> 11;
  *(float *)&v56 = v43 * -175.0;
  v57 = v44 * -175.0;
  v58 = -175.0 * v45;
  if ( (v18 & 1) != 0 )
    sub_100DAE60(a1);
  v19 = *(_DWORD *)(a1 + 252) >> 12;
  v20 = *(float *)(a1 + 584) + v57;
  v21 = *(float *)(a1 + 588) + v58;
  v53 = *(float *)(a1 + 580) + *(float *)&v56;
  v54 = v20;
  v55 = v21;
  *(float *)&v56 = v47 * 800.0;
  v57 = v48 * 800.0;
  v58 = 800.0 * v49;
  if ( (v19 & 1) != 0 )
    sub_100DAFD0(a1);
  v50 = *(float *)&v56 + *v10;
  v51 = v57 + *(float *)(a1 + 480);
  v52 = v58 + *(float *)(a1 + 484);
  v22 = sub_1031FD30(&v53, v46, &v50, (int)"models/gibs/helicopter_brokenpiece_05_tailfan.mdl", 2);
  v23 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8);
  v42 = v22;
  v30 = off_1066C8C4[v23(dword_106B31E4, 0, 2)];
  v24 = sub_1014AE30((float *)&v56, 0.0, 360.0);
  sub_103157F0(a1, &v53, v24, (int)v30, 0);
  if ( v11 )
    v22[281] = *(_DWORD *)(*(int (__thiscall **)(int *))(*v11 + 8))(v11);
  else
    v22[281] = -1;
  v25 = v59[106];
  v26 = v11[106];
  v60 = v42[106];
  sub_10422700(v34);
  v36 = 0.0;
  v40 = 1;
  v37 = 0.0;
  v35 = 1.0;
  v38 = 1.0;
  v39 = 1.0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v26 + 192))(v26, v31);
  sub_10424F80(v31, v32);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v60 + 192))(v60, v33);
  sub_10421E30(v32, v33, v34);
  v36 = 0.0;
  v37 = 0.0;
  v35 = 1.0;
  v38 = 1.0;
  v39 = 1.0;
  v40 = 1;
  v11[282] = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
               dword_106BAFF4,
               v26,
               v60,
               0,
               v34);
  sub_10422700(v34);
  v36 = 0.0;
  v40 = 1;
  v37 = 0.0;
  v35 = 1.0;
  v38 = 1.0;
  v39 = 1.0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v26 + 192))(v26, v32);
  sub_10424F80(v32, v31);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v25 + 192))(v25, v33);
  sub_10421E30(v31, v33, v34);
  v36 = 0.0;
  v37 = 0.0;
  v35 = 1.0;
  v38 = 1.0;
  v39 = 1.0;
  v40 = 1;
  result = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
             dword_106BAFF4,
             v26,
             v25,
             0,
             v34);
  v11[283] = result;
  return result;
}
