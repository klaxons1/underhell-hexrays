// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10044110@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>)
{
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  int (__thiscall *v8)(int, _BYTE *); // edx
  int v9; // eax
  float *v10; // eax
  void (__thiscall *v11)(int, float *, int); // edx
  float v14[22]; // [esp+2Ch] [ebp-ECh] BYREF
  _BYTE v15[12]; // [esp+84h] [ebp-94h] BYREF
  float v16[13]; // [esp+90h] [ebp-88h] BYREF
  __int16 v17; // [esp+C4h] [ebp-54h]
  int v18; // [esp+DCh] [ebp-3Ch] BYREF
  _BYTE v19[12]; // [esp+E8h] [ebp-30h] BYREF
  float v20[3]; // [esp+F4h] [ebp-24h] BYREF
  float v21; // [esp+100h] [ebp-18h] BYREF
  float v22; // [esp+104h] [ebp-14h]
  float v23; // [esp+108h] [ebp-10h]
  int v24; // [esp+10Ch] [ebp-Ch]
  void *v25; // [esp+110h] [ebp-8h]
  void *retaddr; // [esp+118h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  v4 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 36))(a1, a3);
  v5 = *v4;
  v21 = *v4;
  v6 = v4[1];
  v21 = COERCE_FLOAT(v19);
  v22 = v6;
  v7 = v4[2];
  v8 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 972);
  v23 = v4[2];
  v20[0] = v5;
  v20[1] = v6;
  v20[2] = v7 - 64.0;
  v9 = v8(a1, v19);
  v10 = (float *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 968))(a1, &v18, v9);
  sub_1000E4B0(v14, &v21, v20, v10, (float *)LODWORD(v22));
  sub_1012D400(a1, 8);
  v11 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_104131A0 + 16);
  v22 = COERCE_FLOAT(v15);
  v21 = COERCE_FLOAT(&v21);
  v11(dword_104131A0, v14, 81931);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v15, (int)v16, 255, 0, 0, 1, -1.0);
  if ( 1.0 == v16[8] )
    return 0;
  else
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, v17);
}
