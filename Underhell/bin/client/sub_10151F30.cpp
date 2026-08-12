void __userpurge sub_10151F30(int a1@<ecx>, int a2@<esi>, float *a3, int a4)
{
  int v5; // edi
  float *v6; // eax
  float *v7; // esi
  double v8; // st7
  int v9; // edx
  float v10; // [esp+1Ch] [ebp-Ch]
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+34h] [ebp+Ch]

  v5 = 36 * a4;
  v6 = sub_100F2B60(*(_DWORD *)(a1 + 1212), a2, 60, *(_DWORD *)(*(_DWORD *)(a1 + 1392) + 36 * a4), a3);
  v7 = v6;
  if ( v6 )
  {
    v6[11] = 0.0;
    v12 = *(float *)(dword_1043D14C + 44);
    v10 = RandomFloat(-5.0, 5.0);
    v11 = RandomFloat(-5.0, 5.0);
    v8 = RandomFloat(-25.0, -35.0);
    v9 = *(_DWORD *)(a1 + 1392);
    v7[6] = v10;
    v7[7] = v11;
    v7[8] = v8 * v12;
    v7[10] = fabs((a3[2] - *(float *)(v5 + v9 + 20)) / (v7[8] - 0.1));
    *((_BYTE *)v7 + 48) = *(_BYTE *)(dword_1043D344 + 48);
    *((_BYTE *)v7 + 49) = *(_BYTE *)(dword_1043D38C + 48);
    *((_BYTE *)v7 + 50) = *(_BYTE *)(dword_1043D3D4 + 48);
    *((_BYTE *)v7 + 53) = *(_BYTE *)(dword_1043D41C + 48);
    *((_BYTE *)v7 + 54) = *(_BYTE *)(dword_1043D464 + 48);
    *((_BYTE *)v7 + 51) = *(_BYTE *)(dword_1043D2B4 + 48);
    *((_BYTE *)v7 + 52) = *(_BYTE *)(dword_1043D2FC + 48);
    v7[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v7[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               -0.15000001,
               0.15000001);
    *((_BYTE *)v7 + 55) = 1;
  }
}
