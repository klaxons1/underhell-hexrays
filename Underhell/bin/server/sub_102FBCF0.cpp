// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_102FBCF0@<al>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  float *v6; // eax
  int v8; // [esp+10h] [ebp-F0h]
  float v10[22]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v11[12]; // [esp+7Ch] [ebp-84h] BYREF
  float v12[10]; // [esp+88h] [ebp-78h] BYREF
  char v13; // [esp+B2h] [ebp-4Eh]
  char v14; // [esp+B3h] [ebp-4Dh]
  _DWORD *v15; // [esp+C8h] [ebp-38h]
  _DWORD v16[3]; // [esp+D8h] [ebp-28h] BYREF
  float v17[3]; // [esp+E4h] [ebp-1Ch] BYREF
  float *v18; // [esp+F0h] [ebp-10h]
  int v19; // [esp+F4h] [ebp-Ch]
  void *v20; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v19 = a2;
  v20 = retaddr;
  sub_10265570(v16, (int)a1, 0);
  v8 = a1[419];
  v16[0] = &CTraceFilterSimpleNPCExclude::`vftable';
  v18 = (float *)sub_10073730(v8);
  v6 = (float *)sub_10073710(a1[419]);
  v17[0] = *a5;
  v17[1] = a5[1];
  v17[2] = a5[2] + 1.0;
  sub_1001F200(v10, a5, v17, v6, v18);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v10,
    33701899,
    v16,
    v11,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v11, (int)v12, 255, 255, 0, 1, -1.0);
  if ( !v14 && !v13 && v12[8] >= 1.0 )
    return 1;
  if ( v15 && v15[106] && !(*(int (__thiscall **)(_DWORD *))(*v15 + 340))(v15) )
    sub_102FBB50(a1, a5);
  return 0;
}
