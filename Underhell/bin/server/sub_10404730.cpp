float *__stdcall sub_10404730(int a1, float *a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx
  float *result; // eax
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 412);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v4 )
      result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)*v3 + 576))(*v3);
    else
      result = (float *)(*(int (__thiscall **)(_DWORD))(MEMORY[0] + 576))(0);
  }
  else
  {
    result = sub_10404520(a1, v6);
  }
  *a2 = *result;
  a2[1] = result[1];
  a2[2] = result[2];
  return result;
}
