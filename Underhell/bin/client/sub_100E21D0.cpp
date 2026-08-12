int __usercall sub_100E21D0@<eax>(int a1@<esi>, int a2, int a3)
{
  int v3; // esi
  int (__thiscall *v4)(int); // eax
  int result; // eax
  int v6; // ebx
  float *v7; // edi
  int (__thiscall ***v8)(_DWORD); // eax
  int (__thiscall ***v9)(_DWORD); // esi
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st6
  double v17; // st7
  double v18; // rt0
  double v19; // st4
  double v20; // st5
  double v21; // st6
  float *v22; // eax
  double v23; // st6
  double v24; // st7
  double v25; // rtt
  double v26; // st6
  double v27; // st7
  double v28; // st6
  double v29; // rt0
  double v30; // st6
  double v31; // st5
  double v32; // rt1
  double v33; // st5
  int v34[512]; // [esp+18h] [ebp-848h] BYREF
  float v35[3]; // [esp+818h] [ebp-48h] BYREF
  float v36[3]; // [esp+824h] [ebp-3Ch] BYREF
  float v37[3]; // [esp+830h] [ebp-30h] BYREF
  float v38; // [esp+83Ch] [ebp-24h]
  int v39; // [esp+840h] [ebp-20h]
  float v40; // [esp+844h] [ebp-1Ch]
  float v41; // [esp+848h] [ebp-18h] BYREF
  float v42; // [esp+84Ch] [ebp-14h]
  float v43; // [esp+850h] [ebp-10h]
  float v44; // [esp+854h] [ebp-Ch]
  float v45; // [esp+858h] [ebp-8h]
  float v46; // [esp+85Ch] [ebp-4h]
  int savedregs; // [esp+860h] [ebp+0h] BYREF

  sub_101EE040(a3 + 12, v35, v36, 0);
  v3 = sub_100E20C0((int)&savedregs, a2, a1, (int *)a2, (int)v34, 512, 0.0, 4, 0);
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 268);
  v39 = v3;
  result = v4(a2);
  v6 = 0;
  v7 = (float *)result;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v8 = (int (__thiscall ***)(_DWORD))__RTDynamicCast(
                                           v34[v6],
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                                           (int)&IMultiplayerPhysics `RTTI Type Descriptor',
                                           0);
      v9 = v8;
      if ( !v8 || (result = (**v8)(v8), result == 1) )
      {
        v10 = 30.0;
        if ( v9 )
        {
          v10 = ((double (__thiscall *)(int (__thiscall ***)(_DWORD)))(*v9)[1])(v9);
          if ( v10 <= 30.0 )
          {
            if ( v10 >= 10.0 )
            {
              if ( v10 <= 0.0 )
                v10 = 0.0;
            }
            else
            {
              v10 = 10.0;
            }
          }
          else
          {
            v10 = 30.0;
          }
        }
        v11 = v34[v6];
        v40 = v10 * 0.033333335;
        sub_1008EBC0((_BYTE *)(v11 + 352), v7, &v41);
        sub_1008EBC0((_BYTE *)(a2 + 352), &v41, v37);
        v44 = v37[0] - v41;
        v45 = v37[1] - v42;
        v46 = v37[2] - v43;
        v12 = off_103EDFEC();
        v38 = v12;
        if ( v12 <= 5.0 )
          goto LABEL_14;
        result = sub_1008EB40(a2 + 352, &v41);
        if ( (_BYTE)result )
          break;
      }
LABEL_37:
      if ( ++v6 >= v39 )
        return result;
    }
    v12 = v38;
LABEL_14:
    v13 = -0.0099999998;
    v14 = v44;
    if ( v44 > -0.0099999998 )
    {
      v15 = 0.0099999998;
      if ( v14 < 0.0099999998 && v45 > -0.0099999998 && v45 < 0.0099999998 && v46 > -0.0099999998 && v46 < 0.0099999998 )
      {
        v16 = v7[1] - v42;
        v17 = v7[2] - v43;
        v44 = *v7 - v41;
        v45 = v16;
        v46 = v17;
        v12 = off_103EDFEC();
        v13 = -0.0099999998;
        v15 = 0.0099999998;
        v14 = v44;
      }
      v18 = v15;
      v19 = v14;
      v20 = v18;
      if ( v19 <= v13 || v19 >= v20 )
      {
LABEL_31:
        v21 = v19;
        goto LABEL_32;
      }
      if ( v45 > v13 )
      {
        if ( v45 < v20 && v46 > v13 )
        {
          v21 = v19;
          if ( v46 < v20 )
          {
            v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v34[v6] + 268))(v34[v6]);
            v23 = v7[1] - v22[1];
            v24 = v7[2] - v22[2];
            v44 = *v7 - *v22;
            v45 = v23;
            v46 = v24;
            v12 = off_103EDFEC();
            v21 = v44;
          }
          goto LABEL_32;
        }
        goto LABEL_31;
      }
      v14 = v19;
    }
    v21 = v14;
LABEL_32:
    if ( v12 <= 1.0 )
      v12 = 1.0;
    v25 = v21;
    v26 = *(float *)(dword_1043502C + 44) / v12;
    v27 = v25;
    v28 = v26 * v40;
    if ( v28 >= *(float *)(dword_10435074 + 44) )
      v28 = *(float *)(dword_10435074 + 44);
    result = a3;
    v29 = v28 * 0.25;
    v30 = v27 * v29;
    v44 = v30;
    v31 = v45 * v29;
    v45 = v31;
    v32 = v31;
    v33 = v29 * v46;
    v46 = v33;
    *(float *)(a3 + 24) = v35[1] * v32 + v35[0] * v30 + v35[2] * v33 + *(float *)(a3 + 24);
    *(float *)(a3 + 28) = v33 * v36[2] + v30 * v36[0] + v32 * v36[1] + *(float *)(a3 + 28);
    goto LABEL_37;
  }
  return result;
}
