// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1018C1A0@<eax>(float *a1@<ecx>, float a2@<ebp>, float *a3)
{
  double v3; // st7
  double v4; // st6
  int result; // eax
  float v6[20]; // [esp+14h] [ebp-DCh] BYREF
  float v7[3]; // [esp+64h] [ebp-8Ch] BYREF
  float v8[20]; // [esp+70h] [ebp-80h] BYREF
  _DWORD v9[3]; // [esp+C0h] [ebp-30h] BYREF
  float v10[3]; // [esp+CCh] [ebp-24h] BYREF
  float v11[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v11[3] = a2;
  v11[4] = retaddr;
  v3 = a1[8];
  v11[0] = a1[8];
  v4 = a1[9];
  v11[1] = a1[9];
  v11[2] = a1[10] - 32.0;
  v10[0] = v3;
  v10[1] = v4;
  v10[2] = a1[10] + 1.0;
  sub_1000E430(v6, v10, v11);
  sub_1012D400(v9, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v6,
    16395,
    v9,
    v7);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v7, v8, 255, 0, 0, 1, 5.0);
  result = (int)a3;
  if ( v8[8] < 1.0 )
    return sub_10155350((int)v7, a3);
  *a3 = flt_103EA844;
  a3[1] = flt_103EA848;
  a3[2] = flt_103EA84C;
  return result;
}
