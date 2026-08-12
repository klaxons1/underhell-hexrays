int __userpurge sub_10129160@<eax>(float *a1@<ecx>, float a2@<ebx>, float a3@<edi>, float a4, int *a5)
{
  int result; // eax
  double v7; // st7
  int v8; // edx
  float v9; // edx
  double (__thiscall *v10)(int, _DWORD); // edx
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int v14; // ebx
  int v15; // [esp+34h] [ebp-Ch] BYREF
  float v16; // [esp+38h] [ebp-8h]
  float v17; // [esp+3Ch] [ebp-4h]

  if ( a1[3] == a4 && *(float *)(dword_106B31C8 + 12) < (double)a1[4] )
    return 0;
  a1[3] = a4;
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0)
     * a1[2]
     + *(float *)(dword_106B31C8 + 12)
     + a1[1];
  a1[4] = v7;
  if ( v7 <= *(float *)(dword_106B31C8 + 12) )
    a1[4] = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  v8 = *a5;
  v17 = a2;
  v15 = v8;
  v9 = *((float *)a5 + 2);
  v16 = a3;
  v17 = v9;
  off_10689714();
  v10 = *(double (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
  *(float *)&v15 = 1.0;
  v11 = v10(dword_106B31E4, -1.0);
  *(float *)&v15 = v11 * *(a1 - 11) + *(float *)&v15;
  v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -1.0,
          1.0);
  v16 = v12 * *(a1 - 11) + v16;
  v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -1.0,
          1.0);
  v17 = v13 * *(a1 - 11) + v17;
  off_10689714();
  result = sub_10128C80((int)(a1 - 220), (float *)&v15, *(a1 - 16));
  --*((_DWORD *)a1 - 20);
  v14 = result;
  if ( *((int *)a1 - 20) <= 0 )
  {
    if ( (*(_BYTE *)(a1 - 158) & 1) != 0 )
    {
      *(a1 - 20) = *(a1 - 19);
      return result;
    }
    sub_100EC3F0((_DWORD *)a1 - 220, (int)sub_10246D70, 0.0, 0);
    sub_100EC4A0((int *)a1 - 220, *(float *)(dword_106B31C8 + 12), 0);
  }
  return v14;
}
