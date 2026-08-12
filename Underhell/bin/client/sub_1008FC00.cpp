int __thiscall sub_1008FC00(int this, float *a2, float *a3)
{
  int result; // eax
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  double v10; // st7
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  unsigned __int16 v14; // ax
  float v15; // [esp+0h] [ebp-1Ch]

  if ( *(float *)(this + 8) != *a2
    || *(float *)(this + 12) != a2[1]
    || *(float *)(this + 16) != a2[2]
    || (result = sub_1008E580((float *)(this + 20), a3), !(_BYTE)result) )
  {
    sub_1008E690((float *)(this + 8), a2);
    sub_1008E6F0((float *)(this + 20), a3);
    v5 = a3[1] - a2[1];
    v6 = v5 * v5;
    v7 = *a3 - *a2;
    v8 = v6;
    v9 = a3[2] - a2[2];
    v15 = v7 * v7 + v8 + v9 * v9;
    v10 = off_103EDFE0(v15);
    v11 = *(_DWORD *)(this + 4);
    *(float *)(this + 32) = v10 * 0.5;
    *(_DWORD *)(v11 + 312) |= 0x4000u;
    sub_1008F420((int *)this);
    v12 = *(_DWORD *)(this + 4);
    v13 = *(_DWORD *)off_103DD080;
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)(v12 + 4) + 28))(v12 + 4);
    return (*(int (__thiscall **)(void *, _DWORD))(v13 + 140))(off_103DD080, v14);
  }
  return result;
}
