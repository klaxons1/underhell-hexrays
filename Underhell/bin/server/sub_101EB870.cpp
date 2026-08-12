void __usercall sub_101EB870(float *a1@<ecx>, int a2@<edi>, double a3@<st0>)
{
  float *v3; // esi
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  double v9; // st7
  int v10; // eax
  int (__thiscall *v11)(float *); // edx
  int v12; // eax
  void (__thiscall *v13)(float *, int *, _DWORD); // edx
  double v14; // st7
  int v15; // eax
  int v16; // eax
  float v17; // [esp+18h] [ebp-C4h]
  float v18; // [esp+1Ch] [ebp-C0h]
  int v19; // [esp+1Ch] [ebp-C0h]
  _BYTE v20[12]; // [esp+2Ch] [ebp-B0h] BYREF
  int v21; // [esp+38h] [ebp-A4h]
  float v22; // [esp+3Ch] [ebp-A0h]
  float v23; // [esp+40h] [ebp-9Ch]
  float v24; // [esp+58h] [ebp-84h]
  char v25; // [esp+62h] [ebp-7Ah]
  char v26; // [esp+63h] [ebp-79h]
  int v27; // [esp+80h] [ebp-5Ch]
  float v28; // [esp+84h] [ebp-58h] BYREF
  float v29; // [esp+88h] [ebp-54h]
  float v30; // [esp+8Ch] [ebp-50h]
  int v31; // [esp+90h] [ebp-4Ch] BYREF
  float v32; // [esp+94h] [ebp-48h]
  float v33; // [esp+98h] [ebp-44h]
  float v34; // [esp+9Ch] [ebp-40h] BYREF
  float v35; // [esp+A0h] [ebp-3Ch]
  float v36; // [esp+A4h] [ebp-38h]
  float v37; // [esp+A8h] [ebp-34h] BYREF
  float v38; // [esp+ACh] [ebp-30h]
  float v39; // [esp+B0h] [ebp-2Ch]
  int v40; // [esp+B4h] [ebp-28h] BYREF
  float v41; // [esp+B8h] [ebp-24h]
  float v42; // [esp+BCh] [ebp-20h]
  float v43; // [esp+C0h] [ebp-1Ch] BYREF
  float v44; // [esp+C4h] [ebp-18h]
  float v45; // [esp+C8h] [ebp-14h]
  int v46; // [esp+CCh] [ebp-10h] BYREF
  float v47; // [esp+D0h] [ebp-Ch]
  float v48; // [esp+D4h] [ebp-8h]
  char v49; // [esp+DBh] [ebp-1h] BYREF
  int savedregs; // [esp+DCh] [ebp+0h] BYREF

  v3 = a1;
  if ( *((_BYTE *)a1 + 2172) )
  {
    if ( *((_BYTE *)a1 + 2122) )
    {
      if ( *((_BYTE *)a1 + 2123) )
      {
        if ( *((_BYTE *)a1 + 2124) )
        {
          *((_BYTE *)a1 + 2123) = 0;
        }
        else
        {
          (*(void (__thiscall **)(float *, int *))(*(_DWORD *)a1 + 968))(a1, &v40);
          (*(void (__thiscall **)(float *, float *, float *, _DWORD))(*(_DWORD *)v3 + 528))(v3, &v28, &v37, 0);
          *(float *)&v46 = *(float *)&v40 - v37 * 8.0;
          v47 = v41 - v38 * 8.0;
          v48 = v42 - 8.0 * v39;
          v34 = *(float *)&v40 + v28 * 56755.84;
          v35 = v41 + v29 * 56755.84;
          v36 = 56755.84 * v30 + v42;
          sub_1002A5F0((int)&savedregs, (int)v3, (float *)&v40, &v34, 1174421507, (int)v3, 0, (int)v20);
          v43 = *(float *)&v21 - *(float *)&v46;
          v44 = v22 - v47;
          v45 = v23 - v48;
          off_10689714();
          v9 = v3[532];
          sub_101E9580(v3, COERCE_INT(v3[532]), &v43, 1, (float *)&v46);
          v49 = 0;
          sub_100F7B70((_BYTE *)v3 + 2122, &v49);
          *((_BYTE *)v3 + 2123) = 0;
          v49 = 0;
          sub_10172DC0((_BYTE *)v3 + 2121, &v49);
          v10 = sub_101E7EA0(v3, 1);
          sub_100D18C0(v10);
          v17 = v9 + *(float *)(dword_106B31C8 + 12);
          sub_100EC4A0((int *)v3, v17, (int)"FlashLightContext");
        }
        return;
      }
    }
    else
    {
      if ( !*((_BYTE *)a1 + 2123) )
      {
        v16 = sub_101E7EA0(a1, 1);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 860))(v16, 32);
        v49 = 0;
        sub_10172DC0((_BYTE *)v3 + 2121, &v49);
        return;
      }
      sub_100CF500(a1, 1, "grenade");
      (*(void (__thiscall **)(float *, float *, int))(*(_DWORD *)v3 + 504))(v3, &v37, a2);
      sub_100F5A30(v3, (int)&v43, (int)&v34, 0);
      v19 = *((_DWORD *)v3 + 105);
      v11 = *(int (__thiscall **)(float *))(*(_DWORD *)v3 + 636);
      *(float *)&v46 = v34 * -8.0 + v43 * 18.0 + v37;
      v47 = v35 * -8.0 + v44 * 18.0 + v38;
      v48 = 18.0 * v45 + v39 + -8.0 * v36;
      v28 = 6.0;
      v29 = 6.0;
      v30 = 6.0;
      *(float *)&v31 = -6.0;
      v32 = -6.0;
      v33 = -6.0;
      v12 = v11(v3);
      sub_100231A0((int)&savedregs, (int)v3, &v37, (float *)&v46, (float *)&v31, &v28, v12, (int)v3, v19, (int)v20);
      if ( v24 < 1.0 || v25 || v26 )
      {
        v46 = v21;
        v47 = v22;
        v48 = v23;
      }
      v13 = *(void (__thiscall **)(float *, int *, _DWORD))(*(_DWORD *)v3 + 540);
      v45 = v45 + 0.1;
      v13(v3, &v40, 0);
      v14 = (double)*(int *)(dword_106BB7B4 + 48);
      *(float *)&v40 = v43 * v14 + *(float *)&v40;
      v41 = v44 * v14 + v41;
      v42 = v14 * v45 + v42;
      v27 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1200, 1200);
      *(float *)&v31 = 600.0;
      v32 = (float)v27;
      v33 = 0.0;
      sub_102D5F00((int)&v46, (int)&flt_106F1CB4, (int)&v40, (int)&v31, (int)v3, 3.0, 0);
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v3, 1);
      *((_BYTE *)v3 + 2123) = 0;
      a1 = v3;
    }
    v15 = sub_101E7EA0(a1, 1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 836))(v15, 0);
    return;
  }
  v4 = *((_DWORD *)a1 + 1007);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * ((_DWORD)a1[1007] & 0xFFF) + 1],
        off_1061BE18[4 * ((_DWORD)v3[1007] & 0xFFF) + 2] != v4 >> 12) )
  {
    v6 = 0;
  }
  else
  {
    v6 = *v5;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 836))(v6, 0);
  v7 = *((_DWORD *)v3 + 1007);
  if ( v7 == -1 || off_1061BE18[4 * ((_DWORD)v3[1007] & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * ((_DWORD)v3[1007] & 0xFFF) + 1];
  sub_100D18C0(v8);
  v18 = a3 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)v3, v18, (int)"FlashLightContext");
  if ( !*((_BYTE *)v3 + 5061) )
    (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 1268))(v3);
}
