// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1000FB10@<al>(float a1@<ebp>, int a2, float *a3, int a4, float *a5, int a6)
{
  float v7[22]; // [esp+14h] [ebp-BCh] BYREF
  _BYTE v8[12]; // [esp+6Ch] [ebp-64h] BYREF
  float v9[22]; // [esp+78h] [ebp-58h] BYREF
  float retaddr; // [esp+D0h] [ebp+0h]

  v9[19] = a1;
  v9[20] = retaddr;
  sub_1000E430(v7, (float *)(a2 + 4), a3);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v7,
    1174421555,
    a4,
    v8);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v8, (int)v9, 255, 0, 0, 1, -1.0);
  *a5 = v9[0];
  a5[1] = v9[1];
  a5[2] = v9[2];
  return 1;
}
