char __usercall sub_102B0630@<al>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  float *v4; // esi
  int v5; // ebx
  int v6; // eax
  double (__thiscall *v7)(int); // edx
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  float *v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // edx
  double v16; // st7
  int (__thiscall *v17)(int, int, int); // eax
  int v19; // [esp+24h] [ebp-F4h]
  float v20; // [esp+28h] [ebp-F0h]
  float v21; // [esp+28h] [ebp-F0h]
  _BYTE v23[4]; // [esp+3Ch] [ebp-DCh] BYREF
  float v24; // [esp+40h] [ebp-D8h]
  float v25; // [esp+44h] [ebp-D4h]
  float v26; // [esp+48h] [ebp-D0h]
  float v27; // [esp+4Ch] [ebp-CCh]
  float v28; // [esp+50h] [ebp-C8h]
  float v29; // [esp+54h] [ebp-C4h]
  float v30[3]; // [esp+8Ch] [ebp-8Ch] BYREF
  float v31[8]; // [esp+98h] [ebp-80h] BYREF
  float v32; // [esp+B8h] [ebp-60h]
  int v33; // [esp+D8h] [ebp-40h]
  float v34; // [esp+E0h] [ebp-38h]
  float v35; // [esp+E4h] [ebp-34h] BYREF
  float v36; // [esp+E8h] [ebp-30h]
  float v37; // [esp+ECh] [ebp-2Ch]
  float v38; // [esp+F0h] [ebp-28h] BYREF
  float v39; // [esp+F4h] [ebp-24h]
  float v40; // [esp+F8h] [ebp-20h]
  float v41; // [esp+FCh] [ebp-1Ch] BYREF
  float v42; // [esp+100h] [ebp-18h]
  float v43; // [esp+104h] [ebp-14h]
  float v44; // [esp+108h] [ebp-10h] BYREF
  float v45; // [esp+10Ch] [ebp-Ch]
  float v46; // [esp+110h] [ebp-8h]
  int v47; // [esp+114h] [ebp-4h]
  int savedregs; // [esp+118h] [ebp+0h] BYREF

  *(_BYTE *)(a1 + 1396) = 0;
  v3 = sub_100D1940((_DWORD *)a1);
  v4 = (float *)v3;
  if ( v3 )
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
    if ( (_BYTE)v3 )
    {
      v35 = v4[182];
      v36 = v4[183];
      v37 = v4[184];
      v47 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -4);
      v35 = (double)v47 + v35;
      v47 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -4, 4);
      v36 = (double)v47 + v36;
      v37 = 0.0;
      sub_101E3110(v4, 9u, 0, 4u);
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v4 + 968))(v4, &v38);
      v5 = *(_DWORD *)v4;
      v20 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1448))(a1);
      v6 = (*(int (__thiscall **)(float *, float *, _DWORD, _DWORD))(v5 + 1500))(v4, &v44, 1.0, LODWORD(v20));
      v41 = *(float *)v6;
      v42 = *(float *)(v6 + 4);
      v7 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 1448);
      v43 = *(float *)(v6 + 8);
      v8 = v7(a1);
      v44 = v41 * v8 + v38;
      v45 = v42 * v8 + v39;
      v46 = v8 * v43 + v40;
      sub_1002A5F0((int)&savedregs, (int)v4, &v38, &v44, 100679691, (int)v4, 0, (int)v30);
      v9 = 189;
      v21 = ((double (__thiscall *)(int, int, int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 1452))(a1, 189, 128, 0);
      v19 = sub_100D1940((_DWORD *)a1);
      v10 = sub_100D1940((_DWORD *)a1);
      sub_10248110((int)v23, v10, v19, v21, 4, a2);
      v27 = v30[0];
      v28 = v30[1];
      v29 = v30[2];
      v24 = v41;
      v25 = v42;
      v26 = v43;
      sub_10023860((int)&savedregs, (int)v23, v30, v31, (int *)&v41);
      if ( 1.0 == v32 )
      {
        v44 = v44 - v41 * 27.712;
        v45 = v45 - v42 * 27.712;
        v46 = v46 - 27.712 * v43;
        sub_100231A0((int)&savedregs, (int)v4, &v38, &v44, flt_106607F8, flt_10660804, 100679691, (int)v4, 0, (int)v30);
        if ( v32 < 1.0 )
        {
          if ( v33 )
          {
            v11 = *(_DWORD *)(v33 + 252) >> 11;
            v12 = (float *)v33;
            v47 = v33;
            if ( (v11 & 1) != 0 )
            {
              sub_100DAE60(v33);
              v12 = (float *)v47;
            }
            v44 = v12[145] - v38;
            v45 = v12[146] - v39;
            v46 = v12[147] - v40;
            off_10689714();
            if ( v45 * v42 + v44 * v41 + v46 * v43 >= 0.70721 )
            {
              v47 = sub_102B0210((int)&savedregs, a1, (int)v4, (int)v30, (int)flt_106607F8, (int)flt_10660804, (int)v4);
              v9 = v47;
            }
            else
            {
              v32 = 1.0;
            }
          }
        }
      }
      ++*(_DWORD *)(a1 + 1372);
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v4, 1);
      if ( 1.0 == v32 )
      {
        v13 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1448))(a1);
        v44 = v41 * v13 + v38;
        v45 = v13 * v42 + v39;
        v46 = v13 * v43 + v40;
        LOBYTE(v3) = sub_102B0060((_DWORD *)a1, &v38, &v44);
      }
      else
      {
        sub_102AFD90((__int16 *)a1, (int)v30, v9, 0);
        sub_101E1CC0((int)v4, &v35, 0);
        v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -8, -12);
        v15 = *(_DWORD *)dword_106B31E4;
        v47 = v14;
        v16 = (double)v14;
        v17 = *(int (__thiscall **)(int, int, int))(v15 + 8);
        v34 = v16;
        v47 = v17(dword_106B31E4, 1, 2);
        v44 = v34;
        v45 = (float)v47;
        v46 = 0.0;
        LOBYTE(v3) = (unsigned __int8)sub_100F7A60(v4, &v44);
      }
    }
  }
  return v3;
}
