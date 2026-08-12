// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1007F860@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float a6,
        _DWORD *a7)
{
  int v9; // ebx
  float *v10; // eax
  int v11; // ecx
  int v13; // ebx
  double v14; // st7
  float *v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  int v18; // ecx
  int v21[14]; // [esp+24h] [ebp-64h] BYREF
  int v22[2]; // [esp+5Ch] [ebp-2Ch] BYREF
  int v23; // [esp+64h] [ebp-24h]
  int v24; // [esp+68h] [ebp-20h] BYREF
  int v25; // [esp+6Ch] [ebp-1Ch]
  float v26; // [esp+70h] [ebp-18h]
  int v27; // [esp+74h] [ebp-14h] BYREF
  int v28; // [esp+78h] [ebp-10h]
  int v29; // [esp+7Ch] [ebp-Ch]
  int v30; // [esp+80h] [ebp-8h]
  int v31; // [esp+84h] [ebp-4h]
  int v32; // [esp+90h] [ebp+8h]
  int v33; // [esp+90h] [ebp+8h]

  if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, float, int, int))(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 2104) + 20))(
         a5,
         LODWORD(a6),
         a7,
         a3,
         a4,
         a2,
         v21[0],
         v21[1],
         v21[2],
         v21[3],
         v21[4],
         v21[5],
         v21[6],
         v21[7],
         v21[8],
         v21[9],
         v21[10],
         v21[11],
         v21[12],
         v21[13],
         v22[0],
         v22[1],
         v23,
         v24,
         v25,
         COERCE_FLOAT(LODWORD(v26)),
         v27,
         v28) )
  {
    return 1;
  }
  v30 = a1 - 8;
  if ( sub_1007E0C0(a5, a6) )
  {
    *a7 = 0;
    *(_DWORD *)(a5 + 56) |= 2u;
    *(float *)(a5 + 40) = a6;
    return 1;
  }
  v9 = *(_DWORD *)(a1 - 4);
  v32 = *(_DWORD *)(a1 + 28);
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  v31 = *(_DWORD *)(a1 + 4);
  v10 = (float *)sub_100A6140(v32);
  sub_10079A70(v31, (float *)(v9 + 580), v10);
  if ( *(float *)(*(_DWORD *)(a1 + 28) + 4) + 0.01 <= a6 )
  {
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 108) <= -0.001 )
    {
LABEL_12:
      if ( a6 >= 1.0 )
      {
        return 0;
      }
      else
      {
        *a7 = *(_DWORD *)(a5 + 68);
        *(float *)(a5 + 40) = 0.0;
        return 1;
      }
    }
    else
    {
      sub_10050BA0((float *)(a1 + 108), -1.0);
      memset(v21, 0, sizeof(v21));
      sub_1007DCD0(*(_DWORD *)(a1 - 4) + 716, (float *)(a5 + 12), (float *)(a5 + 84), (float *)&v24);
      v13 = 1;
      v33 = 1;
      while ( 1 )
      {
        v14 = sub_100737B0(*(_DWORD *)(*(_DWORD *)(a1 - 4) + 1676));
        v15 = (float *)(*(_DWORD *)(a1 - 4) + 716);
        v28 = (int)v21;
        v27 = 0;
        v26 = COERCE_FLOAT(v21);
        v16 = *(_DWORD **)(a1 + 16);
        *(float *)v22 = *(float *)&v24 * v14 * 2.0 * (double)v33 + *v15;
        sub_1007C550(v16, *(_DWORD *)(a1 + 4), v15, (float *)v22, 33701899, 0, 100.0, 0, (float *)v21);
        if ( !v21[0] )
        {
          v28 = (int)v21;
          v27 = 0;
          v26 = COERCE_FLOAT(v21);
          v17 = *(_DWORD **)(a1 + 16);
          v26 = 100.0;
          v25 = 0;
          v24 = 147467;
          v28 = v21[2];
          v23 = a5;
          v29 = v21[3];
          sub_1007C550(v17, *(_DWORD *)(a1 + 4), (float *)&v27, (float *)a5, 147467, 0, 100.0, 0, (float *)v21[2]);
          if ( !v21[0] )
            break;
        }
        v13 -= 2;
        v33 = v13;
        if ( v13 <= -2 )
          goto LABEL_12;
      }
      v18 = *(_DWORD *)(a1 + 4);
      v28 = 1;
      v27 = v18;
      ((void (__stdcall *)(int *))sub_100A5F50)(&v27);
      *a7 = 1;
      return 1;
    }
  }
  else
  {
    v11 = v30;
    *(_DWORD *)(a5 + 56) |= 2u;
    *(float *)(a5 + 40) = a6;
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 48))(v11);
    *a7 = 0;
    return 1;
  }
}
