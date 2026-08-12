int __thiscall sub_1034BA00(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  int result; // eax

  v2 = *(_DWORD *)(this + 4032);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4032) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
  v6 = *v5;
  v7 = v5[1];
  result = *((int *)v5 + 2);
  *(float *)(this + 3620) = v6;
  *(float *)(this + 3624) = v7;
  *(float *)(this + 3628) = *(float *)&result + 256.0;
  return result;
}
