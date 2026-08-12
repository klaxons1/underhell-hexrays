// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_100117C0(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // eax
  double v6; // st6
  double v7; // rt0
  int v8; // eax
  double v9; // st7
  double v10; // st7
  int v11; // eax
  float *v12; // eax
  void (__thiscall *v13)(int *, _BYTE *); // edx
  double v14; // st7
  double (__thiscall *v15)(int *, _DWORD, _DWORD, _DWORD); // edx
  double v16; // st7
  int (__thiscall *v17)(int *, _DWORD); // edx
  int v18; // eax
  float v20[20]; // [esp+40h] [ebp-DCh] BYREF
  _BYTE v21[12]; // [esp+90h] [ebp-8Ch] BYREF
  _BYTE v22[76]; // [esp+9Ch] [ebp-80h] BYREF
  int v23; // [esp+E8h] [ebp-34h] BYREF
  int v24; // [esp+ECh] [ebp-30h] BYREF
  float v25; // [esp+F4h] [ebp-28h]
  int v26; // [esp+F8h] [ebp-24h]
  float v27; // [esp+FCh] [ebp-20h]
  float v28; // [esp+100h] [ebp-1Ch]
  int v29; // [esp+104h] [ebp-18h] BYREF
  float v30; // [esp+108h] [ebp-14h]
  int v31; // [esp+10Ch] [ebp-10h]
  _DWORD v32[3]; // [esp+110h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+11Ch] [ebp+0h]

  v32[0] = a2;
  v32[1] = retaddr;
  sub_10011170(a1, &v23, 0, 0, 0, -1, 0.0, 0);
  v5 = (*(int (__thiscall **)(int *, int, int))(*a1 + 36))(a1, a3, a4);
  v6 = *(float *)(v5 + 4);
  v7 = *(float *)(v5 + 8) + 8.0;
  v29 = *(int *)v5;
  v26 = v29;
  v30 = v6;
  v27 = v6;
  *(float *)&v31 = v7;
  v28 = v7 - 32.0;
  sub_1000E430(v20, (float *)LODWORD(v30), (float *)v31);
  sub_1012D400(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v20,
    100679691,
    &v24,
    v21);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v21, (int)v22, 255, 0, 0, 1, 5.0);
  if ( v22[43] )
  {
    v8 = (*(int (__thiscall **)(int *))(*a1 + 36))(a1);
    v29 = *(int *)v8;
    v9 = *(float *)(v8 + 4);
    *(float *)&v31 = COERCE_FLOAT(v21);
    v30 = v9;
    v10 = *(float *)(v8 + 8);
    v11 = *a1;
    v29 = (int)a1;
    v28 = 2.4121176e-35;
    v27 = COERCE_FLOAT(&v29);
    *(float *)&v31 = v10 - 32.0;
    v12 = (float *)(*(int (__thiscall **)(int *))(v11 + 36))(a1);
    sub_1000FCE0((int)v32, (int)a1, v12, (float *)LODWORD(v27), SLODWORD(v28), v29, SLODWORD(v30), v31);
  }
  v13 = *(void (__thiscall **)(int *, _BYTE *))(*a1 + 792);
  v31 = 64;
  v13(a1, v21);
  if ( 0.0 != ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 812))(a1) )
  {
    v14 = ((double (__thiscall *)(int *, _DWORD, _DWORD))*(_DWORD *)(*a1 + 816))(a1, 0, 0);
    v15 = *(double (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a1 + 812);
    v28 = v14;
    v16 = v15(a1, 150.0, 1.0, LODWORD(v28));
    v17 = *(int (__thiscall **)(int *, _DWORD))(*a1 + 36);
    v25 = v16;
    v18 = v17(a1, LODWORD(v25));
    nullsub_4(v18);
  }
}
