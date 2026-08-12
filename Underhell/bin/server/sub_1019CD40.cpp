// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_1019CD40(int a1@<ecx>, float a2@<ebp>, int a3@<esi>, int a4)
{
  double v5; // st5
  double v6; // st6
  double v7; // st4
  double v8; // st3
  double v9; // st7
  double v10; // rtt
  double v11; // st4
  double v12; // st5
  double v13; // st1
  double v14; // st7
  float v16[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v17[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v18[13]; // [esp+80h] [ebp-80h] BYREF
  __int16 v19; // [esp+B4h] [ebp-4Ch]
  int v20; // [esp+CCh] [ebp-34h] BYREF
  float v21[3]; // [esp+D8h] [ebp-28h] BYREF
  float v22[7]; // [esp+E4h] [ebp-1Ch] BYREF
  float retaddr; // [esp+100h] [ebp+0h]

  v22[4] = a2;
  v22[5] = retaddr;
  *(_DWORD *)(a1 + 52) = a4;
  *(float *)(a1 + 56) = 0.0;
  *(float *)(a1 + 60) = 0.0;
  *(float *)(a1 + 64) = 0.0;
  switch ( *(_DWORD *)(a1 + 52) )
  {
    case 0:
      *(float *)(a1 + 60) = *(float *)(a1 + 60) - 1.0;
      break;
    case 1:
      *(float *)(a1 + 56) = *(float *)(a1 + 56) + 1.0;
      break;
    case 2:
      *(float *)(a1 + 60) = *(float *)(a1 + 60) + 1.0;
      break;
    case 3:
      *(float *)(a1 + 56) = *(float *)(a1 + 56) - 1.0;
      break;
    default:
      break;
  }
  v5 = *(float *)(a1 + 60);
  v6 = 5.0 * *(float *)(a1 + 64);
  v7 = (*(float *)(a1 + 20) + *(float *)(a1 + 8)) * 0.5;
  v8 = *(float *)(a1 + 56) * 5.0 + (*(float *)(a1 + 12) + *(float *)a1) * 0.5;
  v9 = (*(float *)(a1 + 16) + *(float *)(a1 + 4)) * 0.5;
  v22[0] = v8;
  v10 = v7;
  v11 = v5 * 5.0 + v9;
  v22[1] = v11;
  v12 = v6 + v10;
  v22[2] = v12;
  v13 = *(float *)(a1 + 64);
  v14 = *(float *)(a1 + 60) * 32.0;
  v21[0] = v8 - *(float *)(a1 + 56) * 32.0;
  v21[1] = v11 - v14;
  v21[2] = v12 - 32.0 * v13;
  sub_1001F180(v16, v22, v21);
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v16,
    81931,
    &v20,
    v17,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v17, (int)v18, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v18[8]
    && (*(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v19) + 74)
     || (LODWORD(v18[9]) & 0x20000000) != 0) )
  {
    *(float *)(a1 + 56) = v18[3];
    *(float *)(a1 + 60) = v18[4];
    *(float *)(a1 + 64) = v18[5];
  }
}
