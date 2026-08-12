void __userpurge sub_10211F60(_DWORD *a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  float *v5; // ebx
  float v6; // ecx
  float v7; // eax
  int v8; // edi
  double v10; // st7
  int v11; // eax
  int *v12; // edi
  int v13; // eax
  double v14; // st6
  double v15; // rt0
  double v16; // st7
  int v17; // edx
  _BYTE v19[12]; // [esp+24h] [ebp-A0h] BYREF
  float v20; // [esp+30h] [ebp-94h]
  float v21; // [esp+34h] [ebp-90h]
  float v22; // [esp+38h] [ebp-8Ch]
  int v23; // [esp+74h] [ebp-50h]
  _BYTE v24[12]; // [esp+78h] [ebp-4Ch] BYREF
  int v25[3]; // [esp+84h] [ebp-40h] BYREF
  float v26[3]; // [esp+90h] [ebp-34h] BYREF
  float v27; // [esp+9Ch] [ebp-28h] BYREF
  float v28; // [esp+A0h] [ebp-24h]
  float v29; // [esp+A4h] [ebp-20h]
  int v30; // [esp+A8h] [ebp-1Ch]
  float v31; // [esp+ACh] [ebp-18h] BYREF
  float v32; // [esp+B0h] [ebp-14h]
  float v33; // [esp+B4h] [ebp-10h]
  float v34; // [esp+B8h] [ebp-Ch] BYREF
  float v35; // [esp+BCh] [ebp-8h]
  float v36; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF
  float v38; // [esp+CCh] [ebp+8h]
  int v39; // [esp+CCh] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(a1[280] + 92))(a1 + 280, 3) )
  {
    v5 = (float *)(a4 + 12 * a3 + 32);
    v6 = *(float *)(a4 + 12 * a3 + 40);
    v7 = *(float *)(a4 + 12 * a3 + 36);
    v31 = *v5;
    v33 = v6;
    v32 = v7;
    if ( sub_10206850(a1, "impale_forward", (int)v25) )
    {
      sub_10422220(v25, &v34);
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      sub_10421C00(&v34, a1 + 125, &v27);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*a1 + 528))(a1, &v27, 0, 0);
    }
    if ( v28 * v32 + v31 * v27 + v29 * v33 >= 1000.0 )
    {
      v8 = *(_DWORD *)(a4 + 4 * (a3 == 0) + 104);
      if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v8 + 24)) )
      {
        if ( sub_100D7680(v8) )
        {
          v11 = sub_100D7680(v8);
          v12 = (int *)a1[106];
          v39 = v11;
          v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 632))(a1, 25.0);
          if ( !v13 || (*(int (__thiscall **)(int, int))(*(_DWORD *)v39 + 1080))(v39, v13) != 3 )
          {
            (*(void (__thiscall **)(int *, float *, _DWORD, int))(*v12 + 188))(v12, v26, 0, a2);
            v14 = 1.5 * v5[2];
            v15 = v5[1] * 1.5;
            v34 = *v5 * 1.5 + v26[0];
            v35 = v15 + v26[1];
            v36 = v14 + v26[2];
            sub_1002A5F0((int)&savedregs, (int)a1, v26, &v34, 1174421507, (int)a1, 0, (int)v19);
            v31 = v20;
            v32 = v21;
            v33 = v22;
            v30 = -1;
            if ( v23 )
            {
              v30 = sub_100C07F0(v39, v23);
              sub_100BEB30(v39, v30, (int)&v34, (int)v24);
              (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*a1 + 416))(a1, &v34, 0, 0);
              v31 = v34;
              v32 = v35;
              v33 = v36;
            }
            (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a4 + 28) + 4))(*(_DWORD *)(a4 + 28), &v31);
            if ( sub_101CFAB0(v39, &flt_106F1CA8, -1, 3, v12, (int)a1, 0, (int)&v31, v30, &flt_106F1CA8) )
            {
              v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*v12 + 116))(v12);
              v34 = *v5 * v16;
              v35 = v5[1] * v16;
              v36 = v16 * v5[2];
              sub_101BA7D0((int)v12, (int *)&v34, (int *)&flt_106F1CA8);
              sub_1025FAC0(v39);
              sub_10035270((int)a1, v17, 2048);
            }
          }
        }
      }
      else
      {
        if ( a3 )
          v10 = -1.0;
        else
          v10 = 1.0;
        v38 = v10;
        (***(void (__thiscall ****)(_DWORD, float *))(a4 + 28))(*(_DWORD *)(a4 + 28), &v34);
        if ( (v35 * v28 + v34 * v27 + v36 * v29) * v38 >= 0.707106781187 )
          sub_10210CB0((_DWORD **)a1, a3, a4);
      }
    }
    else
    {
      sub_1020F050(a1);
    }
  }
}
