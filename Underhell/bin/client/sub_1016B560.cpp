void __usercall sub_1016B560(int a1@<ecx>, float *a2@<esi>)
{
  float *v3; // edi
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // rt0
  char v11; // cl
  float v12; // [esp+18h] [ebp-20h]
  int v13; // [esp+20h] [ebp-18h]
  float v14; // [esp+24h] [ebp-14h]
  float *v16; // [esp+2Ch] [ebp-Ch] BYREF
  int v17; // [esp+30h] [ebp-8h]
  int v18; // [esp+34h] [ebp-4h]

  sub_100F32D0(&v16, (int)"TELargeFunnel");
  v3 = (float *)(a1 + 16);
  sub_100F3060((int)v16, v3);
  v13 = sub_100F29B0((int)v16, (int)v3, (int)a2, "sprites/flare6");
  v17 = -256;
  do
  {
    v18 = -256;
    do
    {
      a2 = sub_100F2B60((int)v16, (int)a2, 60, v13, v3);
      if ( a2 )
      {
        if ( *(_DWORD *)(a1 + 32) )
        {
          a2[3] = *v3;
          a2[4] = v3[1];
          a2[5] = v3[2];
          v14 = (float)v17;
          v12 = (float)v18;
          v4 = 100.0;
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4))(dword_10413198, 100.0, 800.0);
          v5 = v12;
          *(_WORD *)((char *)a2 + 51) = 255;
          v6 = v14;
        }
        else
        {
          v7 = (double)v17;
          v14 = v7;
          a2[3] = v7 + *v3;
          a2[4] = (double)v18 + *(float *)(a1 + 20);
          a2[5] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    100.0,
                    800.0)
                + *(float *)(a1 + 24);
          v8 = *v3 - a2[3];
          v5 = v3[1] - a2[4];
          v9 = v3[2] - a2[5];
          *(_WORD *)((char *)a2 + 51) = -256;
          v10 = v9;
          v6 = v8;
          v4 = v10;
        }
        a2[6] = v6 * 0.25;
        a2[7] = v5 * 0.25;
        a2[8] = v4 * 0.25;
        a2[11] = 0.0;
        a2[10] = 4.0;
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 10) >= 5 )
        {
          *((_WORD *)a2 + 24) = -1;
          *((_BYTE *)a2 + 50) = -1;
          *((_BYTE *)a2 + 53) = 15;
        }
        else
        {
          *((_WORD *)a2 + 24) = -256;
          *((_BYTE *)a2 + 50) = 0;
          *((_BYTE *)a2 + 53) = 4;
        }
        v11 = *((_BYTE *)a2 + 53);
        a2[9] = v14;
        *((_BYTE *)a2 + 54) = v11;
        *((_BYTE *)a2 + 55) = 0;
        a2[14] = 0.0;
      }
      v18 += 24;
    }
    while ( v18 <= 256 );
    v17 += 24;
  }
  while ( v17 <= 256 );
  if ( v16 )
    sub_100F2FF0((int)v16);
}
