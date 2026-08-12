float *__thiscall sub_1028ABC0(float *this, float *a2)
{
  float *result; // eax
  double v3; // st7
  double v4; // st7
  float v5; // edx
  float v6; // ecx
  double v7; // st6
  float *v8; // ecx
  double v9; // st5
  unsigned int v10; // edx
  float v11[3]; // [esp+0h] [ebp-18h] BYREF
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]

  result = this;
  v3 = *this;
  v12 = *a2;
  v4 = v3 + v12;
  v5 = a2[1];
  v6 = a2[2];
  v11[0] = v4;
  v13 = v5;
  v14 = v6;
  v7 = v5 + result[1];
  v8 = v11;
  v11[1] = v7;
  v9 = v14 + result[2];
  v10 = 12;
  v11[2] = v9;
  while ( *(_DWORD *)((char *)v8 + (char *)result - (char *)v11) == *(_DWORD *)v8 )
  {
    v10 -= 4;
    ++v8;
    if ( v10 < 4 )
      return result;
  }
  *result = v4;
  result[1] = v7;
  result[2] = v9;
  return result;
}
