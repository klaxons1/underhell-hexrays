void __thiscall sub_100CD0F0(float *this, int a2, float a3)
{
  int v3; // ebx
  BOOL v4; // eax
  int v5; // edi
  _BYTE *v6; // esi
  int v7; // eax
  double v8; // st7
  double v9; // st7
  int (*v10)(void); // edx
  int v11; // eax
  int *v12; // ecx
  int v13; // edx
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  int (__thiscall ***v18)(_DWORD, _DWORD); // eax
  double v19; // st7
  int v20; // eax
  float *v21; // esi
  float v22; // [esp+Ch] [ebp-90h]
  float v23; // [esp+18h] [ebp-84h]
  _DWORD v24[20]; // [esp+28h] [ebp-74h] BYREF
  int v25[3]; // [esp+78h] [ebp-24h] BYREF
  int v26[2]; // [esp+84h] [ebp-18h] BYREF
  float v27; // [esp+8Ch] [ebp-10h]
  int v28; // [esp+90h] [ebp-Ch]
  float v29; // [esp+94h] [ebp-8h]
  float *v30; // [esp+98h] [ebp-4h]

  v3 = a2;
  v4 = a2 == 0;
  v5 = LODWORD(a3);
  v30 = this;
  v6 = *(_BYTE **)(LODWORD(a3) + 4 * v4 + 104);
  v7 = *(_DWORD *)(LODWORD(a3) + 4 * v4);
  if ( v6
    && v6[224] != 1
    && v6[306] == 6
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7)
    && v6 != (_BYTE *)sub_101C5260(v30) )
  {
    v8 = 0.0;
    if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
      v8 = 1.0;
    v23 = v8;
    if ( v30 != (float *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v6 + 632))(v6, LODWORD(v23)) )
    {
      v9 = v30[426];
      v10 = *(int (**)(void))(*(_DWORD *)v30 + 868);
      v22 = v30[426];
      a2 = 0;
      v11 = v10();
      sub_101C01F0(v3, v5, v11, v22, 0, (int)&a2, 0);
      v29 = v9;
      if ( v9 > 0.0 )
      {
        v12 = *(int **)(v5 + 4 * v3);
        v13 = *v12;
        a3 = *(float *)(dword_10696894 + 44);
        v14 = ((double (__thiscall *)(int *))*(_DWORD *)(v13 + 116))(v12);
        v15 = v14 * *(float *)(v5 + 12 * v3 + 56);
        v16 = *(float *)(v5 + 12 * v3 + 60) * v14;
        v17 = v14 * *(float *)(v5 + 12 * v3 + 64);
        *(float *)v26 = v15 * a3;
        *(float *)&v26[1] = v16 * a3;
        v27 = v17 * a3;
        v18 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 340))(v6);
        if ( v18 )
        {
          a3 = COERCE_FLOAT((**v18)(v18, 0));
          if ( a3 != 0.0 )
          {
            a2 |= 0x10u;
            v19 = sub_100D7A40(v26);
            v27 = v19 * *(float *)(dword_106968DC + 44) + v27;
            if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(a3) + 320))(COERCE_FLOAT(LODWORD(a3))) )
            {
              v28 = (*(int (__thiscall **)(float *))(*(_DWORD *)v30 + 448))(v30);
              if ( (double)v28 > v29 )
                sub_101E3110(1, 0, 4);
              else
                sub_101E3110(2, 0, 4);
            }
          }
        }
        (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v5 + 28) + 4))(*(_DWORD *)(v5 + 28), v25);
        sub_102487B0((int)v6, (int)v6, (int)v26, (int)v25, v29, a2, 0, 0);
        v20 = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v6 + 632))(v6, 1.0);
        if ( v20 )
          sub_10023330(v24, v20);
        v21 = v30;
        a3 = 0.0;
        sub_100C0ED0((_DWORD *)v30 + 208, &a3);
        sub_101BB4B0(v21, v24, v5, v3);
      }
    }
  }
}
