void __userpurge sub_10171980(
        int a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        int a10,
        float a11)
{
  int v12; // esi
  int v13; // edi
  float *v14; // eax
  float *v15; // esi
  double v16; // st7
  float v17; // [esp+14h] [ebp-18h]
  float v18; // [esp+18h] [ebp-14h]
  float v19; // [esp+18h] [ebp-14h]
  int v22; // [esp+48h] [ebp+1Ch]

  if ( a9 )
  {
    v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a9);
    if ( v12 )
    {
      LOBYTE(v22) = a5;
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v12);
      BYTE1(v22) = a6;
      HIBYTE(v22) = a8;
      BYTE2(v22) = a7;
      v14 = sub_10170080(a1, a4, v12);
      v15 = v14;
      if ( v14 )
      {
        sub_10035090(v14, 2, 0);
        *((_BYTE *)v15 + 84) = 19;
        v18 = 0.028571429 * a11;
        v17 = a11 * 0.039999999;
        v15[515] = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     LODWORD(v17),
                     LODWORD(v18),
                     a2,
                     a3);
        *((_DWORD *)v15 + 495) = 256;
        if ( *((_DWORD *)v15 + 22) != v22 )
          *((_DWORD *)v15 + 22) = v22;
        *((_DWORD *)v15 + 511) = *((unsigned __int8 *)v15 + 91);
        v15[527] = flt_10459240;
        *((_QWORD *)v15 + 264) = qword_10459244;
        v16 = (double)(4 * v13);
        v15[517] = v16;
        v15[496] = (double)v13 / v16 + *((float *)off_103DC81C + 3);
        v15[518] = 0.0;
        v15[497] = (float)(v13 - 1);
        v15[501] = 0.0;
        v19 = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
        sub_10034B80(v15, 2, v19);
      }
    }
  }
}
