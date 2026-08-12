void __userpurge sub_10352B10(int a1@<ecx>, int a2@<esi>, int a3, float *a4, float *a5)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // [esp+1Ch] [ebp-38h]
  float v13; // [esp+24h] [ebp-30h]
  int v14[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v15; // [esp+48h] [ebp-Ch]
  float v16; // [esp+4Ch] [ebp-8h]
  float v17; // [esp+50h] [ebp-4h]

  if ( (*(_BYTE *)(a3 + 64) & 2) != 0 )
  {
    if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
    {
      v15 = *a4 * -1.0;
      v16 = a4[1] * -1.0;
      v17 = -1.0 * a4[2];
      v15 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5,
              a2)
          + v15;
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5)
          + v16;
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5)
          + v17;
      off_10689714();
      v6 = *(_DWORD *)(a1 + 24);
      *(float *)v14 = v15 * 1024.0 + a5[3];
      *(float *)&v14[1] = v16 * 1024.0 + a5[4];
      *(float *)&v14[2] = 1024.0 * v17 + a5[5];
      v13 = 3500.0;
      v12 = v6;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
      sub_102651C0(a5 + 3, (float *)v14, v7, v12, NAN, SLOBYTE(v13), 0, 0);
    }
    v8 = *(_DWORD *)(a3 + 44);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
    {
      if ( sub_10337EB0() )
      {
        v10 = (int *)sub_10337EB0();
        sub_103349E0(v10, 0);
      }
      v11 = sub_1006AFF0();
      sub_1006D050((int)v11, "TLK_CITIZEN_RESPONSE_SHOT_GUNSHIP", 0, 0);
    }
  }
  else
  {
    sub_102B30D0((_BYTE *)a1, a3, (int)a4, (int)a5);
  }
}
