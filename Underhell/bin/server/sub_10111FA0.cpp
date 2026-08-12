float *__thiscall sub_10111FA0(char *this, float *a2, float *a3)
{
  float *v4; // edi
  int v5; // eax
  float *result; // eax

  v4 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 32))(this);
  v5 = *((_DWORD *)this + 1);
  if ( (*(_DWORD *)(v5 + 252) & 0x4000) != 0 )
  {
    *(_DWORD *)(v5 + 252) &= ~0x4000u;
    sub_10111D60(this, a2, a3);
    result = a2;
    *((float *)this + 17) = *a2 - *v4;
    *((float *)this + 18) = a2[1] - v4[1];
    *((float *)this + 19) = a2[2] - v4[2];
    *((float *)this + 20) = *a3 - *v4;
    *((float *)this + 21) = a3[1] - v4[1];
    *((float *)this + 22) = a3[2] - v4[2];
  }
  else
  {
    *a2 = *((float *)this + 17) + *v4;
    a2[1] = *((float *)this + 18) + v4[1];
    a2[2] = *((float *)this + 19) + v4[2];
    result = a3;
    *a3 = *v4 + *((float *)this + 20);
    a3[1] = *((float *)this + 21) + v4[1];
    a3[2] = *((float *)this + 22) + v4[2];
  }
  return result;
}
