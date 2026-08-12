void __userpurge sub_10171470(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        float *a4,
        float *a5,
        int a6,
        int a7,
        float a8,
        float a9,
        float a10,
        int a11,
        float a12)
{
  int v12; // eax
  float *v13; // esi
  int v14; // edi
  double v15; // st7
  float *v16; // eax
  float *v17; // esi
  int (__thiscall *v18)(int, int, int, int, int); // edx
  int v19; // eax
  int (__thiscall *v20)(int, int, int); // edx
  int v21; // eax
  int (__thiscall *v22)(int, int, int); // edx
  double v23; // st7
  int v24; // edx
  float v27; // [esp+3Ch] [ebp-40h]
  float v28; // [esp+40h] [ebp-3Ch]
  float v29; // [esp+44h] [ebp-38h]
  float v30[3]; // [esp+48h] [ebp-34h] BYREF
  float v31; // [esp+54h] [ebp-28h]
  float v32; // [esp+58h] [ebp-24h]
  float v33; // [esp+5Ch] [ebp-20h]
  float v34; // [esp+60h] [ebp-1Ch]
  float v35; // [esp+64h] [ebp-18h]
  float v36; // [esp+68h] [ebp-14h]
  int v37; // [esp+6Ch] [ebp-10h]
  int v38; // [esp+70h] [ebp-Ch]
  int v39; // [esp+74h] [ebp-8h]
  int v40; // [esp+78h] [ebp-4h]
  int v41; // [esp+88h] [ebp+Ch]
  int v42; // [esp+88h] [ebp+Ch]
  int v43; // [esp+8Ch] [ebp+10h]
  float v44; // [esp+9Ch] [ebp+20h]

  v39 = a1;
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a6);
  v40 = v12;
  if ( v12 )
  {
    v13 = a4;
    v38 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v12);
    v31 = *a5 - *a4;
    v32 = a5[1] - a4[1];
    v33 = a5[2] - a4[2];
    v29 = v33;
    v27 = v31;
    v28 = v32;
    off_103EDFEC();
    v14 = 0;
    v41 = 0;
    v44 = a10 * 0.00390625;
    if ( a7 > 0 )
    {
      while ( 1 )
      {
        v15 = 0.0;
        if ( v14 )
          v15 = (double)v41 / ((double)a7 - 1.0);
        v30[0] = v31 * v15 + *v13;
        v30[1] = v32 * v15 + v13[1];
        v30[2] = v15 * v33 + v13[2];
        v16 = (float *)sub_1016FF80(v39, v30, v40);
        v17 = v16;
        if ( !v16 )
          break;
        *((_DWORD *)v16 + 495) |= 0x8A8u;
        v18 = *(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_10413198 + 8);
        v34 = v27 * a12;
        v35 = v28 * a12;
        v36 = a12 * v29;
        v19 = v18(dword_10413198, -127, 128, a2, a3);
        v20 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
        v34 = (double)v19 * v44 + v34;
        v21 = v20(dword_10413198, -127, 128);
        v22 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8);
        v35 = (double)v21 * v44 + v35;
        v42 = v22(dword_10413198, -127, 128);
        v23 = (double)v42 * v44 + v36;
        v17[527] = v34;
        v17[528] = v35;
        v17[529] = v23;
        sub_10034A30(v17, v30);
        v17[515] = a9;
        sub_10035090(v17, 3, 0);
        LOWORD(v43) = -1;
        BYTE2(v43) = -1;
        HIBYTE(v43) = *((_BYTE *)v17 + 91);
        *((_BYTE *)v17 + 84) = 14;
        *((_DWORD *)v17 + 511) = a11;
        if ( *((_DWORD *)v17 + 22) != v43 )
          *((_DWORD *)v17 + 22) = v43;
        v24 = *(_DWORD *)dword_10413198;
        a3 = v38 - 1;
        v37 = v38 - 1;
        a2 = 0;
        v17[518] = (float)(*(int (__thiscall **)(int))(v24 + 8))(dword_10413198);
        v17[497] = (float)v37;
        v41 = ++v14;
        v17[496] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     0.0,
                     4.0)
                 + *((float *)off_103DC81C + 3)
                 + a8;
        if ( v14 >= a7 )
          break;
        v13 = a4;
      }
    }
  }
  else
  {
    Warning("No model %d!\n", a6);
  }
}
