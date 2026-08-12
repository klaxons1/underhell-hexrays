float *__thiscall sub_10013C00(float *this, float *a2)
{
  float *result; // eax
  unsigned int v3; // eax
  float *v4; // ecx
  double v5; // st6
  double v6; // rt0
  float v7[3]; // [esp+0h] [ebp-Ch] BYREF

  result = (float *)dword_1040239C;
  if ( !*(_DWORD *)(dword_1040239C + 48) )
  {
    v3 = *((_DWORD *)this + 1032);
    if ( v3 == -1
      || (result = (float *)(v3 >> 12), *((float **)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 2) != result)
      || !*((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 1) )
    {
      v4 = this + 906;
      v5 = 20.0 * a2[2];
      v6 = a2[1] * 20.0;
      v7[0] = *a2 * 20.0 + *v4;
      v7[1] = v6 + v4[1];
      v7[2] = v5 + v4[2];
      return sub_10012D70(v4, v7);
    }
  }
  return result;
}
