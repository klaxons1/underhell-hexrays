// bad sp value at call has been detected, the output may be wrong!
char __usercall sub_103546F0@<al>(int a1@<ecx>, int a2@<ebp>)
{
  _BYTE *v3; // esi
  int (__thiscall *v4)(int); // edx
  float *v5; // eax
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  float *v12; // eax
  float *v13; // eax
  unsigned int v14; // eax
  char result; // al
  unsigned int v16; // eax
  int v17; // esi
  unsigned int v18; // edi
  int v19; // esi
  float v20[22]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v21[12]; // [esp+7Ch] [ebp-94h] BYREF
  float v22[20]; // [esp+88h] [ebp-88h] BYREF
  float v23[3]; // [esp+D8h] [ebp-38h] BYREF
  float v24[3]; // [esp+E4h] [ebp-2Ch] BYREF
  float v25; // [esp+F0h] [ebp-20h]
  _BYTE *v26; // [esp+F4h] [ebp-1Ch]
  float v27; // [esp+F8h] [ebp-18h]
  float *v28; // [esp+FCh] [ebp-14h]
  char v29; // [esp+103h] [ebp-Dh]
  int v30; // [esp+104h] [ebp-Ch]
  void *v31; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v30 = a2;
  v31 = retaddr;
  v27 = 3221225500.0;
  v29 = 0;
  v26 = 0;
  v3 = sub_1012BC90(&dword_1069E3E0, 0, "info_target_gunshipcrash");
  if ( !v3 )
    goto LABEL_12;
  do
  {
    if ( !v3[800] )
    {
      v4 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
      v29 = 1;
      v28 = (float *)v4(a1);
      v5 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 576))(v3);
      v6 = v5[1] - v28[1];
      v7 = v6 * v6;
      v8 = *v5 - *v28;
      v9 = v7;
      v10 = v5[2] - v28[2];
      v11 = v8 * v8 + v9 + v10 * v10;
      v25 = v11;
      if ( v11 < v27 )
      {
        v28 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 576))(v3);
        v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
        sub_1001F180(v20, v12, v28);
        sub_10265570(v24, 0, 0);
        (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v20,
          16395,
          v24,
          v21);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v21, (int)v22, 255, 0, 0, 1, 5.0);
        if ( 1.0 == v22[8] )
        {
          v26 = v3;
          v27 = v25;
        }
        else if ( *(_DWORD *)(dword_106E6A14 + 48) )
        {
          v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
          sub_1011BC50(v13, v22, 255, 0, 0, 1, 99.0);
        }
      }
    }
    v3 = sub_1012BC90(&dword_1069E3E0, (int)v3, "info_target_gunshipcrash");
  }
  while ( v3 );
  if ( v26 )
  {
    *(_DWORD *)(a1 + 4228) = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v26 + 8))(v26);
    *(float *)(a1 + 4232) = *(float *)(dword_106B31C8 + 12) + 0.5;
    *(float *)(a1 + 4124) = 0.0;
    if ( *(_DWORD *)(dword_106E6A14 + 48) )
    {
      v16 = *(_DWORD *)(a1 + 4228);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4228) & 0xFFF) + 2] != v16 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4228) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_1011BC50((float *)(a1 + 580), (float *)(v17 + 580), 0, 255, 0, 1, 0.5);
      v18 = *(_DWORD *)(a1 + 4228);
      v23[0] = 200.0;
      v23[1] = 200.0;
      v23[2] = 200.0;
      v24[0] = -200.0;
      v24[1] = -200.0;
      v24[2] = -200.0;
      if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
        v19 = 0;
      else
        v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      sub_1011BB20(v19 + 580, (int)v24, (int)v23, 0, 255, 0, 128, 0.5);
    }
    return 1;
  }
  else
  {
LABEL_12:
    v14 = *(_DWORD *)(a1 + 4228);
    if ( v14 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 4228) & 0xFFF) + 2] == v14 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 4228) & 0xFFF) + 1]
      || !v29 )
    {
      return 0;
    }
    else
    {
      result = 1;
      *(float *)(a1 + 4232) = *(float *)(dword_106B31C8 + 12) + 0.5;
      *(float *)(a1 + 4124) = *(float *)(dword_106B31C8 + 12) + 3.0;
    }
  }
  return result;
}
