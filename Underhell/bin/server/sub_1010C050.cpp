char __stdcall sub_1010C050(int *a1, int a2)
{
  int v2; // esi
  float *v3; // eax
  float *v4; // eax
  char result; // al

  v2 = *a1;
  v3 = (float *)sub_1042FCC0(28);
  if ( v3 )
  {
    v4 = sub_1010BD00(v3, a2);
    v4[6] = *(float *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = v4;
    return 1;
  }
  else
  {
    result = 1;
    MEMORY[0x18] = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v2 + 20) = 0;
  }
  return result;
}
