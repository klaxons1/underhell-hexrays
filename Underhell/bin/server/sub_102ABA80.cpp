float *__thiscall sub_102ABA80(float *this, float *a2)
{
  float *result; // eax
  float v3; // ecx
  float *v4; // edx
  unsigned int v5; // esi
  float v6; // [esp+8h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  result = this;
  v6 = *a2;
  v3 = a2[1];
  v8 = a2[2];
  v4 = &v6;
  v7 = v3;
  v5 = 12;
  while ( *(_DWORD *)((char *)v4 + (char *)result - (char *)&v6) == *(_DWORD *)v4 )
  {
    v5 -= 4;
    ++v4;
    if ( v5 < 4 )
      return result;
  }
  *result = v6;
  result[1] = v7;
  result[2] = v8;
  return result;
}
