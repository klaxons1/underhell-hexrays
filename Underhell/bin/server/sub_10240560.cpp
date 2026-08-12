char __usercall sub_10240560@<al>(int a1@<ecx>, float *a2@<edi>, double a3@<st0>)
{
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // eax
  int *v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  int v10; // edx
  float **v11; // ecx
  int v12; // eax
  float *v13; // eax
  int v14; // eax
  float *v15; // eax
  int v16; // edx
  int v17; // edi
  int v18; // eax
  int v19; // esi
  unsigned int v20; // eax
  int v21; // ecx
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  long double v25; // st7
  int v26; // edi
  float *v27; // esi
  long double v28; // st7
  const char *v29; // esi
  float v31; // [esp+0h] [ebp-68h]
  int v32; // [esp+4h] [ebp-64h]
  int v33; // [esp+8h] [ebp-60h]
  float v34; // [esp+14h] [ebp-54h]
  _BYTE v35[12]; // [esp+24h] [ebp-44h] BYREF
  float v36[3]; // [esp+30h] [ebp-38h] BYREF
  int v37[3]; // [esp+3Ch] [ebp-2Ch] BYREF
  int v38[3]; // [esp+48h] [ebp-20h] BYREF
  float v39; // [esp+54h] [ebp-14h]
  float v40; // [esp+58h] [ebp-10h]
  int v41; // [esp+5Ch] [ebp-Ch]
  int v42; // [esp+60h] [ebp-8h]
  bool v43; // [esp+67h] [ebp-1h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  LOBYTE(v4) = sub_10240370(a1);
  v5 = *(_BYTE *)(a1 + 896) == 0;
  v43 = v4;
  if ( v5 )
  {
    v5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) == 0;
    LOBYTE(v4) = dword_106C5384;
    if ( v5 || v43 || *(_DWORD *)(dword_106C5384 + 48) )
    {
      v43 = *(_DWORD *)(dword_106C5384 + 48) == 1;
      v4 = 0;
      v41 = 0;
      if ( *(int *)(a1 + 884) > 0 )
      {
        while ( 1 )
        {
          v6 = *(_DWORD *)(*(_DWORD *)(a1 + 872) + 4 * v4);
          if ( v6 != -1 )
          {
            v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
            if ( off_1061BE18[4 * (v6 & 0xFFF) + 2] == v6 >> 12 )
            {
              v8 = (_DWORD *)*v7;
              if ( *v7 )
              {
                if ( sub_1023FE10((float *)a1, (int)&savedregs, (int)a2, (int)v8, *v7) )
                  break;
              }
            }
          }
LABEL_21:
          v4 = v41 + 1;
          v41 = v4;
          if ( v4 >= *(_DWORD *)(a1 + 884) )
            goto LABEL_22;
        }
        v9 = v8[661];
        v10 = (int)(v8 + 634);
        v42 = (int)(v8 + 634);
        if ( v9 != -1 )
        {
          a2 = (float *)off_1061BE18;
          v11 = (float **)&off_1061BE18[4 * (v9 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 )
          {
            a2 = *v11;
            if ( *v11 && !*((_BYTE *)a2 + 896) && sub_1023FE10(a2, (int)&savedregs, (int)a2, (int)v8, (int)v8) )
            {
              v12 = (*(int (__thiscall **)(_DWORD *))(*v8 + 516))(v8);
              v13 = (float *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 516))(a1, v38, v12);
              sub_1004BCD0(v13, (float *)v37);
              v40 = a3;
              v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 516))(v8);
              v15 = (float *)(*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a2 + 516))(a2, v35, v14);
              sub_1004BCD0(v15, v36);
              if ( a3 > v40 )
                sub_1023FFC0((char *)a1, v42);
              goto LABEL_19;
            }
            v10 = v42;
          }
        }
        sub_1023FFC0((char *)a1, v10);
LABEL_19:
        if ( !v43 )
          v43 = *(_DWORD *)(dword_106C5384 + 48) == 2;
        goto LABEL_21;
      }
LABEL_22:
      if ( v43 )
      {
        v16 = *(_DWORD *)(a1 + 252);
        *(float *)v38 = 10.0;
        *(float *)&v38[1] = 10.0;
        *(float *)&v38[2] = 10.0;
        *(float *)v37 = -10.0;
        *(float *)&v37[1] = -10.0;
        *(float *)&v37[2] = -10.0;
        if ( (v16 & 0x800) != 0 )
          sub_100DAE60(a1);
        v17 = a1 + 580;
        v42 = a1 + 580;
        sub_1011BB20(a1 + 580, (int)v37, (int)v38, 255, 0, 255, 64, 0.01023);
        v18 = sub_1025FB50(1);
        v19 = v18;
        if ( v18 )
        {
          v20 = *(_DWORD *)(v18 + 2644);
          if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(v19 + 2644) & 0xFFF) + 2] != v20 >> 12 )
            v21 = 0;
          else
            v21 = off_1061BE18[4 * (*(_DWORD *)(v19 + 2644) & 0xFFF) + 1];
          if ( v21 == a1 )
          {
            if ( sub_1023FE10((float *)a1, (int)&savedregs, v17, v19, v19) )
            {
              if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
                sub_100DAE60(a1);
              v34 = 0.01023;
              v33 = 255;
              v32 = 0;
            }
            else
            {
              if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
                sub_100DAE60(a1);
              v34 = 0.01023;
              v33 = 170;
              v32 = 255;
            }
            v24 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
            sub_1011BC50((float *)(a1 + 580), v24, v32, v33, 0, 1, v34);
            v25 = *(float *)(dword_106B31C8 + 12);
            v40 = *(float *)(v19 + 2640);
            v26 = 1;
            v27 = (float *)(v19 + 2540);
            v41 = 8;
            v28 = sin((fmod(v25, 2.0) - 1.0) * 3.141592653589793);
            v39 = v28 + v28;
            do
            {
              if ( (v26 & LODWORD(v40)) != 0 )
              {
                if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
                  sub_100DAE60(a1);
                sub_1011BC50((float *)v42, v27, 0, 32, 255, 0, 0.01023);
                v31 = v39 + 16.0;
                sub_1011C120((int)v27, v31, 0, 0, 255, 0, 0.01023);
              }
              v27 += 3;
              v26 = __ROL4__(v26, 1);
              --v41;
            }
            while ( v41 );
            v17 = v42;
          }
          else if ( sub_1023FE10((float *)a1, (int)&savedregs, v17, v19, v19) )
          {
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
            sub_1011BC50((float *)(a1 + 580), v22, 255, 255, 255, 1, 0.01023);
          }
          else
          {
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
            sub_1011BC50((float *)(a1 + 580), v23, 255, 0, 0, 1, 0.01023);
          }
        }
        v29 = *(const char **)(a1 + 828);
        if ( !v29 )
          v29 = String;
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        LOBYTE(v4) = sub_1011BA70(v17, 0, (int)v29, 0.01023, 255, 255, 255, 255);
      }
    }
  }
  return v4;
}
