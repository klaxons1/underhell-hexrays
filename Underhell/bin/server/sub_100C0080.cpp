float *__thiscall sub_100C0080(int this, int a2, float *a3)
{
  float *result; // eax
  float v5; // edx
  _BYTE v6[48]; // [esp+4h] [ebp-3Ch] BYREF
  float v7; // [esp+34h] [ebp-Ch] BYREF
  float v8; // [esp+38h] [ebp-8h]
  float v9; // [esp+3Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 306) == 6 || (*(_BYTE *)(this + 256) & 1) == 0 )
    return (float *)sub_100DD530(a2, a3);
  if ( a2 )
  {
    sub_100BE180(this, *(_DWORD *)(this + 908), &v7);
    sub_104227F0(this + 728, v6);
    sub_10421C00(&v7, v6, a2);
  }
  result = a3;
  if ( a3 )
  {
    v5 = *(float *)(this + 492);
    v7 = *(float *)(this + 488);
    v9 = *(float *)(this + 496);
    *a3 = v9;
    v8 = v5;
    a3[1] = v7;
    a3[2] = v8;
  }
  return result;
}
