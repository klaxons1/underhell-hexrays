// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1000F970@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        int a7,
        float *a8)
{
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  double (__thiscall *v12)(int, _DWORD, _DWORD); // edx
  float v14[4]; // [esp+30h] [ebp-DCh] BYREF
  float v15[8]; // [esp+40h] [ebp-CCh] BYREF
  int v16; // [esp+60h] [ebp-ACh]
  float v17; // [esp+68h] [ebp-A4h]
  _BYTE v18[12]; // [esp+90h] [ebp-7Ch] BYREF
  float v19; // [esp+9Ch] [ebp-70h] BYREF
  float v20; // [esp+A0h] [ebp-6Ch]
  float v21; // [esp+A4h] [ebp-68h]
  float v22; // [esp+A8h] [ebp-64h]
  float v23; // [esp+ACh] [ebp-60h]
  float v24; // [esp+B0h] [ebp-5Ch]
  char v25; // [esp+C0h] [ebp-4Ch]
  float v26[2]; // [esp+ECh] [ebp-20h] BYREF
  float v27; // [esp+F4h] [ebp-18h]
  float v28; // [esp+F8h] [ebp-14h]
  int v29; // [esp+FCh] [ebp-10h]
  int v30; // [esp+100h] [ebp-Ch]
  void *v31; // [esp+104h] [ebp-8h]
  void *retaddr; // [esp+10Ch] [ebp+0h]

  v30 = a2;
  v31 = retaddr;
  sub_1000E430(v15, (float *)(a5 + 4), a6);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v15,
    1174421555,
    a7,
    v18,
    a3,
    a4);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v18, (int)&v19, 255, 0, 0, 1, -1.0);
  v26[0] = v19;
  v29 = 0;
  v26[1] = v20;
  v28 = COERCE_FLOAT(v26);
  v27 = v21 - 0.1;
  if ( ((**(int (__thiscall ***)(int, float *))dword_104131A0)(dword_104131A0, v26) & 0x30) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 76))(a1) )
  {
    v28 = *(float *)(a5 + 44);
    v10 = (_DWORD *)sub_101AB1E0();
    v28 = COERCE_FLOAT(sub_10007F10(v10, SLODWORD(v28)));
    v11 = (_DWORD *)sub_101AB1E0();
    v29 = sub_10007F40(v11, SLODWORD(v28));
    sub_1000E650(v14);
    v14[0] = v19;
    v14[1] = v20;
    v14[2] = v21;
    v15[2] = v22;
    v15[3] = v23;
    v15[4] = v24;
    v12 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v28 = (float)v29;
    v27 = (float)SLODWORD(v28);
    v17 = v12(dword_10413198, LODWORD(v27), LODWORD(v28));
    if ( (v25 & 0x10) != 0 )
      v16 |= 1u;
    sub_10168E60("gunshotsplash", v14);
  }
  *a8 = v19;
  a8[1] = v20;
  a8[2] = v21;
  return 1;
}
