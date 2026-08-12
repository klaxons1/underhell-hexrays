float *__stdcall sub_103BF930(float *a1)
{
  _DWORD *v1; // esi
  float *result; // eax
  float v3; // edx
  float v4; // ecx
  double v5; // st7
  char v6[8]; // [esp+0h] [ebp-Ch] BYREF
  float v7; // [esp+8h] [ebp-4h]

  if ( (dword_106EBD40 & 1) == 0 )
    dword_106EBD40 |= 1u;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v1 = (_DWORD *)sub_10261B20();
  else
    v1 = 0;
  sub_100F5A30(v1, (int)v6, 0, 0);
  if ( v7 < 0.0 )
  {
    flt_106EBD34 = 0.0;
    flt_106EBD38 = 0.0;
    flt_106EBD3C = 0.0;
    v5 = *(float *)(*(int (__thiscall **)(_DWORD *))(*v1 + 508))(v1);
    result = a1;
    v3 = flt_106EBD38;
    flt_106EBD34 = -v5;
    *a1 = flt_106EBD34;
    v4 = flt_106EBD3C;
  }
  else
  {
    result = a1;
    v3 = flt_106F1CB8;
    *a1 = flt_106F1CB4;
    v4 = flt_106F1CBC;
  }
  a1[1] = v3;
  a1[2] = v4;
  return result;
}
