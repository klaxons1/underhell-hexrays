// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10045420(
        float *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7)
{
  bool v7; // zf
  int v9; // eax
  int v10; // edx
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  int v14; // eax
  float v15; // ecx
  void (__thiscall *v16)(float *, float *); // edx
  int v17; // eax
  float *v18; // eax
  int v19; // eax
  float *v20; // eax
  double v21; // st7
  void (__thiscall *v22)(int, float *, int, _BYTE *); // eax
  float v23; // ecx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  float v28[22]; // [esp+2Ch] [ebp-10Ch] BYREF
  _BYTE v29[12]; // [esp+84h] [ebp-B4h] BYREF
  float v30; // [esp+90h] [ebp-A8h] BYREF
  float v31; // [esp+94h] [ebp-A4h]
  float v32; // [esp+98h] [ebp-A0h]
  float v33; // [esp+B0h] [ebp-88h]
  int v34; // [esp+DCh] [ebp-5Ch] BYREF
  _BYTE v35[12]; // [esp+E8h] [ebp-50h] BYREF
  _DWORD v36[3]; // [esp+F4h] [ebp-44h] BYREF
  float v37[3]; // [esp+100h] [ebp-38h] BYREF
  float v38[3]; // [esp+10Ch] [ebp-2Ch] BYREF
  float *v39; // [esp+118h] [ebp-20h]
  float v40; // [esp+11Ch] [ebp-1Ch]
  float v41; // [esp+120h] [ebp-18h] BYREF
  float v42; // [esp+124h] [ebp-14h]
  float v43; // [esp+128h] [ebp-10h]
  int v44; // [esp+12Ch] [ebp-Ch]
  void *v45; // [esp+130h] [ebp-8h]
  void *retaddr; // [esp+138h] [ebp+0h]

  v44 = a2;
  v45 = retaddr;
  v7 = *(_DWORD *)(dword_1042F6CC + 48) == 0;
  v39 = 0;
  if ( v7 )
  {
    v9 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 848))(a1, a3, a4);
    v10 = *(_DWORD *)a1;
    v39 = (float *)v9;
    v11 = (float *)(*(int (__thiscall **)(float *))(v10 + 536))(a1);
    *a6 = *v11;
    a6[1] = v11[1];
    a6[2] = v11[2];
  }
  v12 = (*((float *)off_103DC81C + 3) - a1[1030]) * 0.33333334;
  v40 = v12;
  if ( v12 <= 1.0 )
  {
    if ( v12 < 0.0 )
      v40 = 0.0;
  }
  else
  {
    v40 = 1.0;
  }
  v13 = *((float *)off_103DC81C + 4) * 48.0 + a1[1023];
  a1[1023] = v13;
  if ( v13 <= 96.0 )
  {
    if ( v13 < 16.0 )
      v13 = 16.0;
  }
  else
  {
    v13 = 96.0;
  }
  a1[1023] = v13;
  v14 = *((_DWORD *)a6 + 2);
  v15 = *a6;
  *(float *)&v36[1] = a6[1];
  v16 = *(void (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 532);
  v36[2] = v14;
  *(float *)v36 = v15;
  v16(a1, &v41);
  v17 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 852))(a1);
  if ( v17 )
  {
    v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
    v41 = *v18;
    v42 = v18[1];
    v43 = v18[2];
    v19 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v43 = *(float *)(v19 + 104) + v43;
  }
  if ( v39 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v39 + 504))(v39) && v39 != a1 )
  {
    v20 = (float *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)v39 + 532))(v39, &v34);
    v37[0] = *v20 - v41;
    v37[1] = v20[1] - v42;
    v37[2] = v20[2] - v43;
    sub_101EE190(v37, v35);
    sub_10076A00((int)v36, (int)v35, (int)a6, v40);
  }
  sub_101EDFB0(a6, v38);
  off_103EDFEC();
  v21 = -a1[1023];
  v43 = 0.0;
  *a5 = v38[0] * v21 + v41;
  a5[1] = v38[1] * v21 + v42;
  a5[2] = v21 * v38[2] + v43;
  sub_10034140(SLOBYTE(v43));
  sub_1000E4B0(v28, &v41, a5, flt_103D9A3C, flt_103D9A48);
  sub_1012D400(a1, 0);
  v22 = *(void (__thiscall **)(int, float *, int, _BYTE *))(*(_DWORD *)dword_104131A0 + 16);
  v43 = COERCE_FLOAT(v29);
  v22(dword_104131A0, v28, 33570827, v35);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v29, (int)&v30, 255, 255, 0, 1, -1.0);
  sub_10034180();
  if ( v33 < 1.0 )
  {
    v24 = v30;
    v42 = v23;
    *a5 = v30;
    v25 = v31;
    a5[1] = v31;
    v26 = v32;
    a5[2] = v32;
    v42 = (v43 - v26) * (v43 - v26) + (v42 - v25) * (v42 - v25) + (v41 - v24) * (v41 - v24);
    a1[1023] = off_103EDFE0(v42);
  }
  *a7 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)a1 + 952))(a1);
}
