void __userpurge sub_102C95C0(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // edi
  double v9; // st7
  _BYTE v10[12]; // [esp+28h] [ebp-28h] BYREF
  float v11[3]; // [esp+34h] [ebp-1Ch] BYREF
  float v12; // [esp+40h] [ebp-10h] BYREF
  float v13; // [esp+44h] [ebp-Ch]
  float v14; // [esp+48h] [ebp-8h]
  int v15; // [esp+4Ch] [ebp-4h]
  float v16; // [esp+58h] [ebp+8h]

  v4 = sub_10219A30();
  v12 = (double)v4 * 0.000030518509 + (double)v4 * 0.000030518509 - 1.0;
  v5 = sub_10219A30();
  v13 = (double)v5 * 0.000030518509 + (double)v5 * 0.000030518509 - 1.0;
  v15 = sub_10219A30();
  v6 = (double)v15 * 0.000030518509 + (double)v15 * 0.000030518509 - 1.0;
  v14 = v6;
  if ( v6 < 0.0 )
    v14 = v6 * -1.0;
  off_10689714();
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.75,
         1.25,
         a2)
     * *(float *)(a1 + 1400);
  v11[0] = v12 * v7;
  v11[1] = v13 * v7;
  v11[2] = v7 * v14;
  sub_10422540(&v12, v10);
  v8 = sub_10403C30(a3, v10, v11, a1);
  v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.30000001,
          0.5);
  if ( ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.0) >= 0.30000001 )
    sub_10408410(v8, v16);
  else
    sub_10408470(v8, v16);
  v9 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 3.0);
  --*(_DWORD *)(a1 + 916);
  *(float *)(a1 + 804) = v9;
  if ( *(int *)(a1 + 916) <= 0 )
    sub_1025FAC0(a1);
}
