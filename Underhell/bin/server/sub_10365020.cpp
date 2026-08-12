bool __userpurge sub_10365020@<al>(unsigned int a1@<ecx>, int *a2@<ebx>, unsigned int a3, int a4, int *a5)
{
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  int v12; // eax
  float v13; // eax
  float v14; // edx
  int v15; // eax
  int v16; // esi
  float v17; // [esp+0h] [ebp-88h]
  _BYTE v18[44]; // [esp+Ch] [ebp-7Ch] BYREF
  float v19; // [esp+38h] [ebp-50h]
  int v20; // [esp+58h] [ebp-30h]
  _DWORD v21[4]; // [esp+60h] [ebp-28h] BYREF
  float v22[3]; // [esp+70h] [ebp-18h] BYREF
  float v23[3]; // [esp+7Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+88h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v6 = *(float *)(a1 + 580) - *(float *)(a3 + 580);
  v7 = v6 * v6;
  v8 = *(float *)(a1 + 584) - *(float *)(a3 + 584);
  v9 = *(float *)(a1 + 588) - *(float *)(a3 + 588);
  v17 = v9 * v9 + v8 * v8 + v7;
  v10 = off_10689708(v17);
  if ( v10 < *(float *)(a1 + 3624) )
    return 0;
  if ( 0.0 != *(float *)(a1 + 3628) && v10 > *(float *)(a1 + 3628) )
    return 0;
  v12 = *(_DWORD *)(a1 + 248);
  if ( (v12 & 0x10000) == 0 )
    return 1;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v13 = *(float *)(a1 + 580);
    v14 = *(float *)(a1 + 588);
    v23[1] = *(float *)(a1 + 584);
    v23[0] = v13;
    v15 = *(_DWORD *)a3;
    v23[2] = v14;
    (*(void (__thiscall **)(unsigned int, float *))(v15 + 504))(a3, v22);
    v16 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)a3 + 320))(a3) )
      v16 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a3 + 1096))(a3);
    sub_10265720(v21, a3, v16, 0);
    sub_10023120(COERCE_FLOAT(&savedregs), v16, v23, v22, 1174421507, (int)v21, (int)v18);
    if ( a5 )
      *a5 = v20;
    return 1.0 == v19;
  }
  else
  {
    LOBYTE(a2) = sub_100CEF80(a1, (int)a5, a3, a4, a5);
    if ( (_BYTE)a2 )
    {
      if ( a3 == sub_10225BE0((_DWORD *)(a1 + 3632)) )
        LOBYTE(a2) = sub_100B93A0(a1 + 3632, a2, (char)a2);
    }
    return (char)a2;
  }
}
