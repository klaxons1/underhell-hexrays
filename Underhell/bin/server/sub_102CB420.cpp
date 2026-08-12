// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_102CB420@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, _DWORD *a3)
{
  void (__thiscall *v5)(_DWORD *); // edx
  unsigned int v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int, float *, int, _DWORD *); // edx
  _DWORD *v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  float v13[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v14[12]; // [esp+84h] [ebp-8Ch] BYREF
  float v15[16]; // [esp+90h] [ebp-80h] BYREF
  _DWORD *v16; // [esp+D0h] [ebp-40h]
  _DWORD v17[4]; // [esp+DCh] [ebp-34h] BYREF
  float v18[3]; // [esp+ECh] [ebp-24h] BYREF
  float v19[2]; // [esp+F8h] [ebp-18h] BYREF
  _BYTE *v20; // [esp+100h] [ebp-10h]
  int v21; // [esp+104h] [ebp-Ch]
  void *v22; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v21 = a2;
  v22 = retaddr;
  if ( !a3 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 744))(a1, v18);
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v5 = *(void (__thiscall **)(_DWORD *))(*a3 + 520);
  v20 = 0;
  LODWORD(v19[1]) = a1 + 145;
  LODWORD(v19[0]) = v19;
  v5(a3);
  v6 = a1[75];
  if ( v6 == -1 || off_1061BE18[4 * (a1[75] & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (a1[75] & 0xFFF) + 1];
  sub_10265720(v17, (int)a1, v7, 0);
  sub_1001F180(v13, v18, v19);
  v8 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
  v20 = v14;
  v8(dword_106B31F4, v13, 33570881, v17);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 0, 0, 1, -1.0);
  v9 = v16;
  v10 = (*(int (__thiscall **)(_DWORD *))(*a3 + 288))(a3);
  if ( v10 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 1088))(v10) )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1092))(v10);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 32))(v11);
      if ( v9 == (_DWORD *)v12 || v9 && sub_10019B00(v9) == v12 )
        return 1;
    }
  }
  return 1.0 == v15[8] || v16 == a3;
}
