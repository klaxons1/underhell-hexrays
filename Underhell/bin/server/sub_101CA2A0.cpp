bool __usercall sub_101CA2A0@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v4; // esi
  unsigned int v5; // eax
  int *v6; // ecx
  float *v7; // eax
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v17; // [esp-C8h] [ebp-D4h] BYREF
  int *v18; // [esp-C4h] [ebp-D0h]
  char v19; // [esp-91h] [ebp-9Dh]
  float v20[21]; // [esp-70h] [ebp-7Ch] BYREF
  float v21[3]; // [esp-1Ch] [ebp-28h] BYREF
  float v22[3]; // [esp-10h] [ebp-1Ch] BYREF
  int v23; // [esp-4h] [ebp-10h]
  int v24; // [esp+0h] [ebp-Ch]
  void *v25; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  if ( *(_DWORD *)(a1 + 808) == -1
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 2] != *(_DWORD *)(a1 + 808) >> 12 )
  {
    v4 = 0;
  }
  else
  {
    v4 = off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 1];
  }
  v5 = *(_DWORD *)(a1 + 812);
  if ( v5 == -1 || (v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 1], v6[1] != v5 >> 12) )
    v23 = 0;
  else
    v23 = *v6;
  if ( !v4 || !v23 )
    return 0;
  v7 = (float *)(*(int (__thiscall **)(int, int, int, int, int *))(*(_DWORD *)(v4 + 320) + 4))(
                  v4 + 320,
                  a3,
                  a4,
                  v17,
                  v18);
  v22[0] = *v7 - 1.0;
  v22[1] = v7[1] - 1.0;
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)(v4 + 320) + 8);
  v22[2] = v7[2] - 1.0;
  v9 = (float *)v8(v4 + 320);
  v21[0] = *v9 + 1.0;
  v21[1] = v9[1] + 1.0;
  v10 = v9[2] + 1.0;
  v11 = *(_DWORD *)(v4 + 252) >> 11;
  v21[2] = v10;
  if ( (v11 & 1) != 0 )
    sub_100DAE60(v4);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_1001F200(v20, (float *)(v4 + 580), (float *)(v4 + 580), v22, v21);
  v12 = *(_DWORD *)dword_106B31F4;
  v13 = *(_DWORD *)v4;
  v18 = &v17;
  v14 = (*(int (__thiscall **)(int, int))(v13 + 636))(v4, v23);
  (*(void (__thiscall **)(int, float *, int))(v12 + 8))(dword_106B31F4, v20, v14);
  return v19 != 0;
}
