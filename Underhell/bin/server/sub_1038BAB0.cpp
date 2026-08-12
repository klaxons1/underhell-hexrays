// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1038BAB0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9,
        int a10,
        float a11,
        char a12)
{
  int result; // eax
  double v14; // st7
  float v15; // [esp+0h] [ebp-158h]
  _BYTE v17[88]; // [esp+14h] [ebp-144h] BYREF
  _BYTE v18[80]; // [esp+6Ch] [ebp-ECh] BYREF
  float v19[20]; // [esp+BCh] [ebp-9Ch] BYREF
  float v20; // [esp+10Ch] [ebp-4Ch] BYREF
  float v21[3]; // [esp+118h] [ebp-40h] BYREF
  float v22[3]; // [esp+124h] [ebp-34h] BYREF
  _DWORD v23[4]; // [esp+130h] [ebp-28h] BYREF
  int v24; // [esp+140h] [ebp-18h]
  float v25; // [esp+144h] [ebp-14h]
  char v26; // [esp+148h] [ebp-10h]
  int v27; // [esp+14Ch] [ebp-Ch]
  void *v28; // [esp+150h] [ebp-8h]
  void *retaddr; // [esp+158h] [ebp+0h]

  v27 = a2;
  v28 = retaddr;
  v15 = (float)a9;
  sub_10248110((int)v18, a1, a1, v15, 4, 0);
  v25 = a11;
  v23[2] = 0;
  v24 = 0;
  v23[3] = v18;
  v26 = a12;
  v23[0] = &CTraceFilterMetroPolice::`vftable';
  v23[1] = a1;
  sub_1001F200(v19, a5, a6, a7, a8);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    1174421507,
    v23,
    v17,
    a3,
    a4);
  result = v24;
  if ( !v24 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v14 = *(float *)(a1 + 580);
    v25 = COERCE_FLOAT(v21);
    v22[0] = v14;
    v22[1] = *(float *)(a1 + 584);
    sub_10111910((_BYTE *)(a1 + 320), (float *)(a1 + 328), (float *)(a1 + 340), &v20, v21);
    v22[2] = v21[2] + 1.0;
    sub_1001F200(v19, v22, a6, a7, a8);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v19,
      100679691,
      v23,
      v17);
    return v24;
  }
  return result;
}
