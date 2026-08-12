// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_100E20C0@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int *a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9)
{
  int v10; // edi
  float *v11; // eax
  int (__thiscall *v12)(float *); // edx
  float *v13; // eax
  int v14; // edx
  double v15; // st7
  int (__thiscall *v16)(int *, _DWORD); // eax
  int v17; // eax
  float *v18; // eax
  int v19; // edi
  int v20; // esi
  _DWORD *v21; // eax
  void (__thiscall *v22)(int, int, float *, _DWORD); // eax
  int v23; // edi
  float v26[23]; // [esp-70h] [ebp-7Ch] BYREF
  float v27; // [esp-14h] [ebp-20h]
  float v28; // [esp-10h] [ebp-1Ch] BYREF
  float v29; // [esp-Ch] [ebp-18h]
  float v30; // [esp-8h] [ebp-14h]
  float *v31; // [esp-4h] [ebp-10h]
  int v32; // [esp+0h] [ebp-Ch]
  void *v33; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v32 = a1;
  v33 = retaddr;
  v10 = (*(int (__thiscall **)(int *, int, int))(*a4 + 12))(a4, a2, a3);
  v31 = (float *)(*(int (__thiscall **)(int *))(*a4 + 12))(a4);
  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v28 = *v11 + a7;
  v29 = v11[1] + a7;
  v12 = *(int (__thiscall **)(float *))(*(_DWORD *)v31 + 4);
  v30 = a7 + v11[2];
  v13 = (float *)v12(v31);
  v14 = *a4;
  v26[21] = *v13 - a7;
  v26[22] = v13[1] - a7;
  v15 = v13[2] - a7;
  v28 = COERCE_FLOAT(&v28);
  v16 = *(int (__thiscall **)(int *, _DWORD))(v14 + 36);
  v27 = v15;
  v17 = v16(a4, LODWORD(v27));
  v18 = (float *)(*(int (__thiscall **)(int *, int))(*a4 + 36))(a4, v17);
  sub_1000E4B0(v26, v18, (float *)LODWORD(v29), (float *)LODWORD(v30), v31);
  v19 = a9;
  v20 = 0;
  if ( !a9 )
  {
    v21 = (_DWORD *)sub_100DDA40(16);
    if ( v21 )
    {
      v21[2] = 0;
      *v21 = &CPushAwayEnumerator::`vftable';
      v21[1] = a5;
      v21[3] = a6;
      v20 = (int)v21;
    }
    v19 = v20;
  }
  v22 = *(void (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)dword_10413184 + 56);
  v31 = (float *)v19;
  v22(dword_10413184, a8, v26, 0);
  v23 = *(_DWORD *)(v19 + 8);
  if ( v20 )
    sub_10034930(v20);
  return v23;
}
