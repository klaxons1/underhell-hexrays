// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_100D0550@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        char a7)
{
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // ecx
  char *v11; // esi
  float *v12; // eax
  double v13; // st6
  double v14; // rt0
  unsigned int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  void (__thiscall *v19)(int, float *, int, void ***); // edx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int (__thiscall ***v25)(_DWORD, _DWORD); // eax
  int v26; // eax
  float v29[22]; // [esp+28h] [ebp-ECh] BYREF
  _BYTE v30[12]; // [esp+80h] [ebp-94h] BYREF
  float v31[19]; // [esp+8Ch] [ebp-88h] BYREF
  int v32; // [esp+D8h] [ebp-3Ch] BYREF
  void **v33; // [esp+E4h] [ebp-30h] BYREF
  int v34; // [esp+F4h] [ebp-20h]
  float v35[3]; // [esp+F8h] [ebp-1Ch] BYREF
  _BYTE *v36; // [esp+104h] [ebp-10h]
  int v37; // [esp+108h] [ebp-Ch]
  void *v38; // [esp+10Ch] [ebp-8h]
  void *retaddr; // [esp+114h] [ebp+0h]

  v37 = a2;
  v38 = retaddr;
  v8 = *(_DWORD *)(a1 + 1120);
  if ( v8 == -1 || (v9 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1120) & 0xFFF) + 1], v9[1] != v8 >> 12) )
    v10 = 0;
  else
    v10 = *v9;
  v11 = (char *)sub_100D7680(v10);
  if ( (*((_DWORD *)v11 + 63) & 0x800) != 0 )
    sub_100DAE60(v11);
  v12 = (float *)(*(int (__thiscall **)(char *, int *, int, int))(*(_DWORD *)v11 + 968))(v11, &v32, a3, a4);
  v13 = v12[1] - *((float *)v11 + 146);
  v14 = v12[2] - *((float *)v11 + 147);
  v35[0] = *v12 - *((float *)v11 + 145) + *a5;
  v35[1] = v13 + a5[1];
  v15 = *(_DWORD *)(a1 + 1120);
  v35[2] = v14 + a5[2];
  if ( v15 == -1 || off_1061BE18[4 * (v15 & 0xFFF) + 2] != v15 >> 12 )
    v16 = 0;
  else
    v16 = off_1061BE18[4 * (v15 & 0xFFF) + 1];
  v17 = (*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 368))(v11);
  sub_10265720(v16, v17, 6);
  v33 = &CWeaponLOSFilter::`vftable';
  v34 = 0;
  if ( v16 )
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 288))(v16);
    if ( v18 )
      v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 1096))(v18);
  }
  sub_1001F180(v29, v35, a6);
  v19 = *(void (__thiscall **)(int, float *, int, void ***))(*(_DWORD *)dword_106B31F4 + 16);
  v36 = v30;
  v19(dword_106B31F4, v29, 1174421507, &v33);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v30, (int)v31, 255, 0, 0, 1, -1.0);
  if ( 1.0 == v31[8] )
  {
    if ( *(_DWORD *)(dword_10698464 + 48) )
    {
      sub_1011BC50((int)v35, (int)a6, 0, 255, 0, 0, 1.0);
      return 1;
    }
    return 1;
  }
  v21 = LODWORD(v31[16]);
  v22 = (*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 368))(v11);
  v36 = (_BYTE *)v22;
  if ( v22 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 320))(v22) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v36 + 1088))(v36) )
      {
        v23 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v36 + 1092))(v36);
        v36 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 32))(v23);
        if ( (_BYTE *)v21 == v36 )
          return 1;
        v24 = sub_10019B00((_DWORD *)v21);
        if ( (_BYTE *)v24 == v36 )
          return 1;
      }
    }
  }
  if ( v21 != (*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 368))(v11) )
  {
    v25 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 340))(v21);
    if ( v25 )
      v26 = (**v25)(v25, 0);
    else
      v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 288))(v21);
    if ( !v26 )
    {
      if ( a7 )
      {
        sub_10023CB0(v11, 45);
        sub_100207F0(v11, v21);
        if ( *(_DWORD *)(dword_10698464 + 48) )
          sub_1011BC50((int)v30, (int)v31, 255, 0, 0, 0, 1.0);
      }
      return 0;
    }
    if ( (*(int (__thiscall **)(char *, int))(*(_DWORD *)v11 + 1080))(v11, v26) != 1 )
    {
      if ( a7 )
      {
        sub_10023CB0(v11, 42);
        return 0;
      }
      return 0;
    }
    return 1;
  }
  if ( *(_DWORD *)(dword_10698464 + 48) )
    sub_1011BC50((int)v35, (int)a6, 0, 255, 0, 0, 1.0);
  return 1;
}
