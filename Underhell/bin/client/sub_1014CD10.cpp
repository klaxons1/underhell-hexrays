void __thiscall sub_1014CD10(int this)
{
  int v1; // ebx
  bool v2; // zf
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  _BYTE *v7; // eax
  _BYTE *v8; // ebx
  int v9; // eax
  float v10; // edx
  double v11; // st7
  float *v12; // eax
  int (__thiscall *v13)(_BYTE *, _DWORD); // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  float *v17; // eax
  double v18; // st6
  double v19; // st4
  double v20; // st5
  double v21; // st4
  float *v22; // eax
  double v23; // st5
  float *v24; // eax
  float *v25; // eax
  double v26; // st4
  double v27; // st5
  float *v28; // eax
  float *v29; // eax
  double v30; // st6
  double v31; // st4
  double v32; // st5
  float *v33; // eax
  float *v34; // eax
  double v35; // st4
  double v36; // st5
  _DWORD *v37[61]; // [esp+4h] [ebp-254h] BYREF
  _DWORD v38[46]; // [esp+F8h] [ebp-160h] BYREF
  float *v39; // [esp+1B0h] [ebp-A8h]
  float *v40; // [esp+1B8h] [ebp-A0h]
  unsigned int *v41; // [esp+1D8h] [ebp-80h]
  float v42; // [esp+1ECh] [ebp-6Ch]
  float v43; // [esp+1F0h] [ebp-68h]
  float v44; // [esp+1F4h] [ebp-64h]
  float v45; // [esp+1F8h] [ebp-60h]
  float v46; // [esp+1FCh] [ebp-5Ch]
  float v47; // [esp+200h] [ebp-58h]
  float v48; // [esp+204h] [ebp-54h]
  float v49; // [esp+208h] [ebp-50h]
  float v50; // [esp+20Ch] [ebp-4Ch]
  float v51; // [esp+210h] [ebp-48h]
  float v52; // [esp+214h] [ebp-44h]
  float v53; // [esp+218h] [ebp-40h]
  int v54; // [esp+21Ch] [ebp-3Ch]
  int v55; // [esp+220h] [ebp-38h]
  float v56; // [esp+224h] [ebp-34h]
  float v57; // [esp+228h] [ebp-30h]
  float v58; // [esp+22Ch] [ebp-2Ch]
  float v59; // [esp+230h] [ebp-28h]
  float v60; // [esp+234h] [ebp-24h]
  float v61; // [esp+238h] [ebp-20h]
  float v62; // [esp+23Ch] [ebp-1Ch]
  float v63; // [esp+240h] [ebp-18h]
  float v64; // [esp+244h] [ebp-14h]
  float v65; // [esp+248h] [ebp-10h]
  float v66; // [esp+24Ch] [ebp-Ch]
  float v67; // [esp+250h] [ebp-8h]
  float v68; // [esp+254h] [ebp-4h]

  v1 = this;
  v2 = *(_BYTE *)(this + 10292) == 0;
  v54 = this;
  if ( v2 && *(_DWORD *)(this + 10280) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v4 = 0;
    v55 = 0;
    while ( 1 )
    {
      if ( ((1 << (v4 & 0x1F)) & *(_DWORD *)(v1 + 4 * (v4 >> 5) + 16)) != 0 )
      {
        v5 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)off_103DCD78 + 16389) + 12))(
               (char *)off_103DCD78 + 65556,
               v4 + 1);
        if ( v5 )
        {
          v6 = v5 + 8;
          if ( v5 != -8 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6) )
          {
            v7 = (_BYTE *)__RTDynamicCast(
                            v6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&IClientNetworkable `RTTI Type Descriptor',
                            (int)&C_BasePlayer `RTTI Type Descriptor',
                            0);
            v8 = v7;
            if ( v7 )
            {
              if ( !sub_10042850(v7) )
              {
                v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 268))(v8);
                v10 = *(float *)(v9 + 4);
                v11 = flt_103E82D0 + *(float *)(v9 + 8);
                v58 = *(float *)v9;
                v59 = v10;
                v60 = v11;
                v12 = (float *)sub_101422F0();
                v62 = *v12;
                v63 = v12[1];
                v64 = v12[2];
                if ( fabs(v64) <= 0.95 )
                {
                  v64 = 0.0;
                  off_103EDFEC();
                  v13 = *(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v8 + 1020);
                  v56 = flt_103E82D4;
                  v14 = *(_DWORD *)v3;
                  v15 = v13(v8, 0);
                  (*(void (__thiscall **)(int, int))(v14 + 36))(v3, v15);
                  v16 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 224))(v3, 1, 0, 0, 0);
                  sub_10016C20((int)v37);
                  sub_10017110((int)v37, v16, 7, 1);
                  v66 = 8388863.0;
                  v65 = 8388863.0;
                  v57 = 8388863.0;
                  *v41 = LOBYTE(v66) | ((LOBYTE(v65) | ((LOBYTE(v57) | 0xFFFFFF00) << 8)) << 8);
                  v17 = v40;
                  *v40 = 0.0;
                  v17[1] = 0.0;
                  v18 = 0.0 * v56;
                  v68 = v18;
                  v67 = v56;
                  v19 = -v56;
                  v57 = v19;
                  v20 = v19 * v64 + v60;
                  v51 = v18 + v62 * v19 + v58;
                  v21 = v18 + v19 * v63 + v59;
                  v52 = v21;
                  v22 = v39;
                  v23 = v56 + v20;
                  v53 = v23;
                  *v39 = v51;
                  v22[1] = v21;
                  v22[2] = v23;
                  sub_10016A80(v38);
                  v61 = 8388863.0;
                  v65 = 8388863.0;
                  v66 = 8388863.0;
                  *v41 = LOBYTE(v61) | ((LOBYTE(v65) | ((LOBYTE(v66) | 0xFFFFFF00) << 8)) << 8);
                  v24 = v40;
                  *v40 = 1.0;
                  v24[1] = 0.0;
                  v25 = v39;
                  v42 = v68 + v62 * v56 + v58;
                  v26 = v68 + v63 * v56 + v59;
                  v43 = v26;
                  v27 = v67 + v56 * v64 + v60;
                  v44 = v27;
                  *v39 = v42;
                  v25[1] = v26;
                  v25[2] = v27;
                  sub_10016A80(v38);
                  v61 = 8388863.0;
                  v68 = 8388863.0;
                  v67 = 8388863.0;
                  *v41 = LOBYTE(v61) | ((LOBYTE(v68) | ((LOBYTE(v67) | 0xFFFFFF00) << 8)) << 8);
                  v28 = v40;
                  *v40 = 1.0;
                  v28[1] = 1.0;
                  v29 = v39;
                  v30 = 0.0 * v57;
                  v66 = v30;
                  v65 = v57;
                  v48 = v30 + v62 * v56 + v58;
                  v31 = v30 + v63 * v56 + v59;
                  v49 = v31;
                  v32 = v57 + v56 * v64 + v60;
                  v50 = v32;
                  *v39 = v48;
                  v29[1] = v31;
                  v29[2] = v32;
                  sub_10016A80(v38);
                  v61 = 8388863.0;
                  v68 = 8388863.0;
                  v67 = 8388863.0;
                  *v41 = LOBYTE(v61) | ((LOBYTE(v68) | ((LOBYTE(v67) | 0xFFFFFF00) << 8)) << 8);
                  v33 = v40;
                  *v40 = 0.0;
                  v33[1] = 1.0;
                  v45 = v66 + v62 * v57 + v58;
                  v34 = v39;
                  v35 = v66 + v57 * v63 + v59;
                  v46 = v35;
                  v36 = v65 + v57 * v64 + v60;
                  v47 = v36;
                  *v39 = v45;
                  v34[1] = v35;
                  v34[2] = v36;
                  sub_10016A80(v38);
                  sub_10016E00((int)v37, 0, 0);
                  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 48))(v16, -1, 0);
                  sub_10016BC0(v37);
                  v4 = v55;
                }
              }
            }
          }
        }
      }
      v55 = ++v4;
      if ( v4 >= 17 )
        break;
      v1 = v54;
    }
    if ( v3 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    }
  }
}
