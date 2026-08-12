char __cdecl sub_100A4B90(float *a1, int a2, int a3, int a4, int a5, char a6)
{
  float *v6; // eax
  double v7; // st6
  double v8; // rt0
  float *v9; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // rt2
  _DWORD v16[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v17; // [esp+28h] [ebp-Ch] BYREF
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]
  char v20; // [esp+40h] [ebp+Ch]

  v6 = (float *)a2;
  if ( (*(_WORD *)(a2 + 66) & 0x384) == 0 )
  {
    if ( *(_DWORD *)(dword_1042E114 + 48) )
    {
      LOBYTE(v6) = sub_100A49F0((void (__noreturn **)())a3, a4, a1, a2, a5, a6);
    }
    else
    {
      v20 = *(_DWORD *)(dword_1042E0CC + 48) == 0;
      if ( *(_DWORD *)(dword_1042E0CC + 48) )
        v20 = a6 & 1;
      switch ( a4 )
      {
        case 'C':
        case 'T':
          LOBYTE(v6) = sub_10155850(a1, v6, a4, a5, v20);
          break;
        case 'W':
          LOBYTE(v6) = sub_10155850(a1, v6, 87, a5, v20);
          break;
        case 'D':
        case 'N':
          LOBYTE(v6) = sub_10158070(a1, v6, a5);
          break;
        case 'A':
          LOBYTE(v6) = sub_10156AA0(a1, v6);
          break;
        case 'M':
        case 'V':
          v9 = v6 + 6;
          v10 = (*(float *)a3 * v6[6] + v6[7] * *(float *)(a3 + 4) + *(float *)(a3 + 8) * v6[8]) * -2.0;
          v11 = v10 * v6[6];
          v12 = v10;
          v13 = v6[7] * v10 + *(float *)(a3 + 4);
          v14 = v12 * v6[8] + *(float *)(a3 + 8);
          v17 = v11 + *(float *)a3;
          v18 = v13;
          v19 = v14;
          v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -0.2,
                  0.2)
              + v17;
          v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -0.2,
                  0.2)
              + v18;
          v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  -0.2,
                  0.2)
              + v19;
          LOBYTE(v6) = sub_1017B5F0(a1, &v17, v9, a5);
          break;
        case 'P':
          v7 = v6[7];
          v8 = v6[8];
          v17 = v6[6] + *a1;
          v18 = v7 + a1[1];
          v19 = v8 + a1[2];
          LOBYTE(v6) = ((int (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_103DFD80)[3])(
                         off_103DFD80,
                         &v17,
                         1,
                         1,
                         0);
          break;
        case 'Z':
          v17 = -*(float *)a3;
          v18 = -*(float *)(a3 + 4);
          v19 = -*(float *)(a3 + 8);
          sub_101EE190(&v17, v16);
          LOBYTE(v6) = sub_100E92B0(
                         "warp_shield_impact",
                         *(_DWORD *)a1,
                         *((_DWORD *)a1 + 1),
                         *((_DWORD *)a1 + 2),
                         v16[0],
                         v16[1],
                         v16[2],
                         0);
          break;
      }
    }
  }
  return (char)v6;
}
