void __usercall sub_1037F770(float *a1@<ecx>, int a2@<esi>)
{
  double v3; // st7
  int v4; // eax
  int v5; // eax
  float v6; // edx
  int (__thiscall *v7)(float *, _DWORD, float *, float *, _DWORD, int, _DWORD, _DWORD); // edx
  int v8; // esi
  float v9; // edx
  float v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // eax
  float v14; // [esp+28h] [ebp-9Ch]
  int v16[20]; // [esp+3Ch] [ebp-88h] BYREF
  float v17[3]; // [esp+8Ch] [ebp-38h] BYREF
  float v18[3]; // [esp+98h] [ebp-2Ch] BYREF
  float v19[3]; // [esp+A4h] [ebp-20h] BYREF
  int v20; // [esp+B0h] [ebp-14h]
  float v21; // [esp+B4h] [ebp-10h] BYREF
  float v22; // [esp+B8h] [ebp-Ch]
  float v23; // [esp+BCh] [ebp-8h]
  int v24; // [esp+C0h] [ebp-4h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)a1[909] )
    return;
  v3 = 32.0;
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1) )
  {
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) == 6 )
    {
      v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
      goto LABEL_7;
    }
    v3 = 32.0;
  }
  v6 = *a1;
  v19[0] = v3;
  v7 = *(int (__thiscall **)(float *, _DWORD, float *, float *, _DWORD, int, _DWORD, _DWORD))(LODWORD(v6) + 1072);
  v19[1] = v3;
  v19[2] = v3;
  v17[0] = -32.0;
  v17[1] = -32.0;
  v17[2] = -32.0;
  v5 = v7(a1, 108.0, v17, v19, 0, 128, 1.0, 0);
LABEL_7:
  v8 = v5;
  if ( v5 )
  {
    v14 = (float)*(int *)(dword_106E991C + 48);
    sub_10248110((int)v16, (int)a1, (int)a1, v14, 128, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 320))(v8, a2) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
      {
        if ( (*(float *)(dword_106B31C8 + 12) <= (double)a1[910]
           || (double)*(int *)(v8 + 216) * 0.5 <= (double)*(int *)(v8 + 220))
          && *(_BYTE *)(v8 + 447) )
        {
          v24 = 3 * *(_DWORD *)(dword_106E991C + 48);
          *(float *)&v16[13] = (float)v24;
        }
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        if ( ((_DWORD)a1[63] & 0x1000) != 0 )
          sub_100DAFD0((int)a1);
        sub_10248690((float *)v16, a1 + 119, (float *)(v8 + 580), 1.0);
        sub_100D9E70((int *)v8, v8, v16);
        v24 = -16777152;
        sub_102600B0((int *)v8, &v24, 0.5, 0.0, 1);
        v9 = *(float *)(v8 + 732);
        v10 = *(float *)(v8 + 736);
        v21 = *(float *)(v8 + 728);
        v23 = v10;
        v22 = v9;
        v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 60, 25);
        v21 = (double)v20 + v21;
        v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 60, 25);
        v22 = (double)v20 + v22;
        v23 = 0.0;
        sub_100E11A0(v8, &v21);
        sub_101E1CC0(v8, &v21, 0);
      }
    }
    else
    {
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      if ( ((_DWORD)a1[63] & 0x1000) != 0 )
        sub_100DAFD0((int)a1);
      sub_10248690((float *)v16, a1 + 119, (float *)(v8 + 580), 1.0);
      sub_100D9E70((int *)v8, v8, v16);
    }
    a1[909] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                2.0,
                4.0)
            + *(float *)(dword_106B31C8 + 12);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    v11 = *(_DWORD *)(v8 + 252) >> 11;
    v12 = 32.0;
    v21 = *(float *)(v8 + 580) + 32.0;
    v22 = *(float *)(v8 + 584) + 32.0;
    v23 = *(float *)(v8 + 588);
    if ( (v11 & 1) != 0 )
    {
      sub_100DAE60(v8);
      v12 = 32.0;
    }
    v18[0] = *(float *)(v8 + 580) - v12;
    v18[1] = *(float *)(v8 + 584) - v12;
    v18[2] = *(float *)(v8 + 588) - v12;
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 16);
    sub_102605C0(v18, &v21, v13);
    sub_1023C380(a1, (int)"NPC_Ichthyosaur.Bite", 0.0, 0);
    if ( *((_DWORD *)a1 + 593) == 64 )
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1416))(a1, dword_106E98AC);
  }
  else
  {
    if ( *((_DWORD *)a1 + 593) == 64 )
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1416))(a1, dword_106E98A8);
    sub_1023C380(a1, (int)"NPC_Ichthyosaur.BiteMiss", 0.0, 0);
  }
}
