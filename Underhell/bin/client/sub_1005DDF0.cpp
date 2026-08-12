// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_1005DDF0@<al>(int a1@<ebp>, int a2@<esi>, int *a3)
{
  int v3; // edx
  int v4; // eax
  float v6[22]; // [esp+28h] [ebp-ECh] BYREF
  _BYTE v7[12]; // [esp+80h] [ebp-94h] BYREF
  int v8; // [esp+8Ch] [ebp-88h] BYREF
  int v9; // [esp+CCh] [ebp-48h]
  int v10; // [esp+D8h] [ebp-3Ch] BYREF
  float v11[3]; // [esp+E4h] [ebp-30h] BYREF
  float v12[3]; // [esp+F0h] [ebp-24h] BYREF
  float v13[2]; // [esp+FCh] [ebp-18h] BYREF
  float *v14; // [esp+104h] [ebp-10h]
  int v15; // [esp+108h] [ebp-Ch]
  void *v16; // [esp+10Ch] [ebp-8h]
  void *retaddr; // [esp+114h] [ebp+0h]

  v15 = a1;
  v16 = retaddr;
  (*(void (__thiscall **)(int *, float *, int))(*a3 + 532))(a3, v13, a2);
  v3 = *a3;
  v14 = v11;
  v4 = (*(int (__thiscall **)(int *))(v3 + 536))(a3);
  sub_101EDFB0(v4, v14);
  byte_1040D904 = 1;
  v12[0] = v11[0] * 56755.84 + v13[0];
  v12[1] = v11[1] * 56755.84 + COERCE_FLOAT(v13);
  v12[2] = 56755.84 * v11[2] + COERCE_FLOAT(v12);
  sub_1000E430(v6, v13, v12);
  sub_1012D400(a3, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v6,
    33570827,
    &v10,
    v7);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v7, (int)&v8, 255, 0, 0, 1, 5.0);
  byte_1040D904 = 0;
  return v9
      && __RTDynamicCast(
           v9,
           0,
           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
           (int)&C_PointCommentaryNode `RTTI Type Descriptor',
           0) != 0;
}
