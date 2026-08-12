// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10406170(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // eax
  int v6; // ecx
  void (__thiscall *v7)(int, float *, int); // eax
  unsigned int v8; // eax
  int **v9; // ecx
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // ecx
  int *v13; // eax
  unsigned int v14; // ecx
  _DWORD *v15; // eax
  float v17[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v18[12]; // [esp+84h] [ebp-8Ch] BYREF
  float v19[13]; // [esp+90h] [ebp-80h] BYREF
  char v20; // [esp+C6h] [ebp-4Ah]
  float v21[3]; // [esp+E0h] [ebp-30h] BYREF
  float v22[3]; // [esp+ECh] [ebp-24h] BYREF
  float v23; // [esp+F8h] [ebp-18h] BYREF
  float v24; // [esp+FCh] [ebp-14h]
  float v25; // [esp+100h] [ebp-10h]
  int v26; // [esp+104h] [ebp-Ch]
  void *v27; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 528))(a1, v21, 0, 0, a3, a4);
  v5 = *((_DWORD *)a1 + 63) >> 11;
  v23 = v21[0] * 16.0;
  v24 = v21[1] * 16.0;
  v25 = 16.0 * v21[2];
  if ( (v5 & 1) != 0 )
    sub_100DAE60((int)a1);
  v6 = *((_DWORD *)a1 + 63) >> 11;
  v22[0] = a1[145] + v23;
  v22[1] = a1[146] + v24;
  v22[2] = a1[147] + v25;
  if ( (v6 & 1) != 0 )
    sub_100DAE60((int)a1);
  sub_1001F180(v17, a1 + 145, v22);
  sub_10265570(&v23, (int)a1, 0);
  v7 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v25 = COERCE_FLOAT(v18);
  v24 = COERCE_FLOAT(&v23);
  v7(dword_106B31F4, v17, 1174421507);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, 5.0);
  if ( *((_BYTE *)a1 + 225) )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 480))(a1, (int)a1 + 225);
    *((_BYTE *)a1 + 225) = 0;
  }
  sub_10112C00((int)(a1 + 80), 0);
  if ( 1.0 == v19[8] || (v20 & 4) == 0 )
    (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 1148))(a1);
  v8 = *((_DWORD *)a1 + 527);
  if ( v8 != -1 )
  {
    v9 = (int **)&off_1061BE18[4 * ((_DWORD)a1[527] & 0xFFF) + 1];
    v10 = v8 >> 12;
    if ( off_1061BE18[4 * ((_DWORD)a1[527] & 0xFFF) + 2] == v10 )
    {
      if ( *v9 )
      {
        if ( off_1061BE18[4 * ((_DWORD)a1[527] & 0xFFF) + 2] == v10 )
          v11 = *v9;
        else
          v11 = 0;
        sub_100F5880(v11, 0.1);
        a1[527] = NAN;
      }
    }
  }
  v12 = *((_DWORD *)a1 + 526);
  if ( v12 != -1 )
  {
    v13 = &off_1061BE18[4 * ((_DWORD)a1[526] & 0xFFF) + 1];
    v14 = v12 >> 12;
    if ( off_1061BE18[4 * ((_DWORD)a1[526] & 0xFFF) + 2] == v14 )
    {
      if ( *v13 )
      {
        if ( off_1061BE18[4 * ((_DWORD)a1[526] & 0xFFF) + 2] == v14 )
          v15 = (_DWORD *)*v13;
        else
          v15 = 0;
        v15[353] = -1;
        (*(void (__thiscall **)(_DWORD *))(*v15 + 1064))(v15);
        a1[526] = NAN;
      }
    }
  }
  sub_1023B860(a1, (int)"Missile.Ignite");
  sub_1025FAC0((int)a1);
}
