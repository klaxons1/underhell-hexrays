int __userpurge sub_10401110@<eax>(int a1@<ecx>, int a2@<edi>, float *a3, float a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  float v8; // edx
  float v9; // eax
  double v10; // st7
  double v11; // st5
  double v12; // st6
  int v13; // eax
  double v14; // st4
  double v15; // st6
  unsigned int v16; // ebx
  double v17; // st4
  double v18; // st6
  int *v19; // ecx
  int *v20; // ecx
  float *v21; // eax
  float v22; // ecx
  float v23; // edx
  float v24; // eax
  int result; // eax
  void (__noreturn ***v26)(); // edi
  void (__noreturn **v27)(); // esi
  int v28; // eax
  void (__noreturn ***v29)(); // edi
  void (__noreturn **v30)(); // esi
  int v31; // eax
  float v32; // [esp+14h] [ebp-8Ch]
  float v33; // [esp+24h] [ebp-7Ch] BYREF
  float v34; // [esp+28h] [ebp-78h]
  float v35; // [esp+2Ch] [ebp-74h]
  float v36; // [esp+30h] [ebp-70h] BYREF
  float v37; // [esp+34h] [ebp-6Ch]
  float v38; // [esp+38h] [ebp-68h]
  float v39[3]; // [esp+78h] [ebp-28h] BYREF
  int v40; // [esp+84h] [ebp-1Ch] BYREF
  float v41; // [esp+88h] [ebp-18h]
  float v42; // [esp+8Ch] [ebp-14h]
  float v43; // [esp+90h] [ebp-10h] BYREF
  float v44; // [esp+94h] [ebp-Ch]
  float v45; // [esp+98h] [ebp-8h]
  int v46; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF
  float v48; // [esp+A8h] [ebp+8h]

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 9772);
  v46 = v4;
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        if ( v6[1] == v7 )
          a2 = *v6;
        else
          a2 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 108))(off_10627F88, a2);
        sub_103FEC80(*(float *)&v4, 0, 1);
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v8 = *(float *)(a2 + 584);
        v9 = *(float *)(a2 + 588);
        v10 = *a3 * a4;
        v11 = a3[1];
        v43 = *(float *)(a2 + 580);
        v44 = v8;
        v12 = a4 * a3[2];
        v45 = v9;
        v39[0] = v10 + v43;
        v39[1] = v11 * a4 + v8;
        v39[2] = v12 + v9;
        sub_1002A5F0((int)&savedregs, (int)a3, &v43, v39, 1174421507, a2, 0, (int)&v33);
        v32 = (v33 - v36) * (v33 - v36) + (v34 - v37) * (v34 - v37) + (v35 - v38) * (v35 - v38);
        v13 = (int)off_10689708(v32);
        v14 = a3[2];
        v15 = a3[1] * 128.0 + v44;
        *(float *)&v40 = *a3 * 128.0 + v43;
        v41 = v15;
        v42 = 128.0 * v14 + v45;
        if ( v13 > 128 )
        {
          v16 = ((unsigned int)(v13 - 129) >> 7) + 1;
          do
          {
            sub_1023D4B0(1024, (float *)&v40, 128, 0.5, a2, 0, 0);
            --v16;
            v17 = a3[2];
            v18 = a3[1] * 128.0 + v41;
            *(float *)&v40 = *a3 * 128.0 + *(float *)&v40;
            v41 = v18;
            v42 = 128.0 * v17 + v42;
          }
          while ( v16 );
          v4 = v46;
        }
        sub_103FA670(a2, a3, &v36, 3);
        v48 = *(float *)(dword_106B31C8 + 12) + 0.5;
        if ( *(_DWORD *)(v4 + 1132) != LODWORD(v48) )
        {
          if ( *(_BYTE *)(v4 + 84) )
          {
            *(_BYTE *)(v4 + 88) |= 1u;
          }
          else
          {
            v19 = *(int **)(v4 + 24);
            if ( v19 )
              sub_100194B0(v19, 1132);
          }
          *(float *)(v4 + 1132) = v48;
        }
        if ( *(_DWORD *)(v4 + 1136) != *(_DWORD *)(v4 + 1132) )
        {
          if ( *(_BYTE *)(v4 + 84) )
          {
            *(_BYTE *)(v4 + 88) |= 1u;
          }
          else
          {
            v20 = *(int **)(v4 + 24);
            if ( v20 )
              sub_100194B0(v20, 1136);
          }
          *(float *)(v4 + 1136) = *(float *)(v4 + 1132);
        }
        v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
        v22 = *v21;
        v23 = v21[1];
        v24 = v21[2];
        v43 = v22;
        v44 = v23;
        v45 = v24;
        sub_103FF610((_DWORD *)v4, *(float *)&v4);
        *(_DWORD *)(v4 + 9828) = 4;
        if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
          sub_103FF0B0((_DWORD *)v4, v4, a2, &v43);
        else
          sub_103FEDE0((_DWORD *)v4, &v43);
      }
    }
  }
  result = sub_103FB400((_DWORD *)v4, *(float *)&a2);
  if ( result )
  {
    v26 = sub_1023DBA0();
    v27 = *v26;
    v28 = sub_103FB400((_DWORD *)v4, *(float *)&v26);
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v27[12])(v26, v28, 0.0, 1.0);
    v29 = sub_1023DBA0();
    v30 = *v29;
    v31 = sub_103FB400((_DWORD *)v4, *(float *)&v29);
    result = ((int (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v30[11])(v29, v31, 50.0, 1.0);
  }
  *(_DWORD *)(v4 + 1396) = 1;
  *(float *)(v4 + 1420) = *(float *)(dword_106B31C8 + 12) + 0.1;
  *(float *)(v4 + 1400) = *(float *)(dword_106B31C8 + 12) + 0.25;
  return result;
}
