char __usercall sub_100A49F0@<al>(void (__noreturn **a1)()@<eax>, int a2@<edx>, _DWORD *a3, int a4, int a5, char a6)
{
  float *v6; // esi
  char *v7; // edi
  int v8; // edi
  double v9; // st7
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // eax
  int v14; // [esp-4h] [ebp-40h]
  float v15[3]; // [esp+Ch] [ebp-30h] BYREF
  float v16[3]; // [esp+18h] [ebp-24h] BYREF
  float v17[3]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-Ch] BYREF

  v6 = (float *)a1;
  LOBYTE(a1) = *(_DWORD *)(dword_1042E0CC + 48) == 0;
  if ( *(_DWORD *)(dword_1042E0CC + 48) )
    LOBYTE(a1) = a6 & 1;
  v7 = (&off_103E0290)[2 * a2];
  if ( (_BYTE)a1 )
  {
    a1 = off_103E0294[2 * a2];
    if ( a1 )
      v7 = (char *)off_103E0294[2 * a2];
  }
  if ( v7 )
  {
    if ( sub_101F8C60(7040) )
      v8 = sub_100F23A0(0, v7);
    else
      v8 = 0;
    *(_BYTE *)(v8 + 6720) |= 0x40u;
    *(_DWORD *)(v8 + 6716) = 0;
    sub_100F1650(v8);
    if ( *(_DWORD *)(v8 + 80) )
    {
      v9 = (*(float *)(a4 + 24) * *v6 + v6[1] * *(float *)(a4 + 28) + *(float *)(a4 + 32) * v6[2]) * -2.0;
      v17[0] = *(float *)(a4 + 24) * v9 + *v6;
      v17[1] = *(float *)(a4 + 28) * v9 + v6[1];
      v17[2] = v9 * *(float *)(a4 + 32) + v6[2];
      v16[0] = *v6 * -1.0;
      v16[1] = v6[1] * -1.0;
      v16[2] = -1.0 * v6[2];
      v10 = (_DWORD *)(a4 + 12);
      if ( 1.0 == *(float *)(a4 + 44) )
        v10 = a3;
      v18[0] = *v10;
      v11 = v10[1];
      v12 = v10[2];
      v18[1] = v11;
      v14 = *(_DWORD *)(a4 + 76);
      v18[2] = v12;
      sub_100A43D0(0, (int)v18, a4 + 24, v14);
      sub_100A43D0(1, (int)v18, (int)v17, *(_DWORD *)(a4 + 76));
      sub_100A43D0(2, (int)v18, (int)v16, *(_DWORD *)(a4 + 76));
      v15[0] = (float)a5;
      v15[1] = v15[0];
      v15[2] = v15[0];
      sub_100F2080(3, v15);
      if ( (*(_DWORD *)(*(_DWORD *)(v8 + 80) + 24) & 0x10) != 0 )
      {
        sub_10155350(a4, v15);
        sub_100F2080(4, v15);
      }
    }
    LOBYTE(a1) = sub_100F1860(v8);
  }
  return (char)a1;
}
