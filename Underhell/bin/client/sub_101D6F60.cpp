int __stdcall sub_101D6F60(int a1, int a2)
{
  int result; // eax
  float *v3; // esi
  BOOL v4; // edx
  char v5; // cl
  int v6; // ecx
  int v7; // [esp+10h] [ebp+4h]

  result = 2;
  v3 = (float *)(a1 + 8);
  do
  {
    *(v3 - 2) = (double)((*(_DWORD *)(a2 + 4 * (result - 2 >= 8)) >> (4 * ((result - 2) & 7))) & 0xF
                       | (16 * ((*(_DWORD *)(a2 + 4 * (result - 2 >= 8)) >> (4 * ((result - 2) & 7))) & 0xF)))
              / 255.0;
    *(v3 - 1) = (double)((*(_DWORD *)(a2 + 4 * (result - 1 >= 8)) >> (4 * ((result - 1) & 7))) & 0xF
                       | (16 * ((*(_DWORD *)(a2 + 4 * (result - 1 >= 8)) >> (4 * ((result - 1) & 7))) & 0xF)))
              / 255.0;
    *v3 = (double)((*(_DWORD *)(a2 + 4 * (result >= 8)) >> (4 * (result & 7))) & 0xF
                 | (16 * ((*(_DWORD *)(a2 + 4 * (result >= 8)) >> (4 * (result & 7))) & 0xF)))
        / 255.0;
    v3[1] = (double)((*(_DWORD *)(a2 + 4 * (result + 1 >= 8)) >> (4 * ((result + 1) & 7))) & 0xF
                   | (16 * ((*(_DWORD *)(a2 + 4 * (result + 1 >= 8)) >> (4 * ((result + 1) & 7))) & 0xF)))
          / 255.0;
    v3[2] = (double)((*(_DWORD *)(a2 + 4 * (result + 2 >= 8)) >> (4 * ((result + 2) & 7))) & 0xF
                   | (16 * ((*(_DWORD *)(a2 + 4 * (result + 2 >= 8)) >> (4 * ((result + 2) & 7))) & 0xF)))
          / 255.0;
    v3[3] = (double)((*(_DWORD *)(a2 + 4 * (result + 3 >= 8)) >> (4 * ((result + 3) & 7))) & 0xF
                   | (16 * ((*(_DWORD *)(a2 + 4 * (result + 3 >= 8)) >> (4 * ((result + 3) & 7))) & 0xF)))
          / 255.0;
    v7 = (*(_DWORD *)(a2 + 4 * (result + 4 >= 8)) >> (4 * ((result - 4) & 7))) & 0xF
       | (16 * ((*(_DWORD *)(a2 + 4 * (result + 4 >= 8)) >> (4 * ((result - 4) & 7))) & 0xF));
    v4 = result + 5 >= 8;
    v5 = 4 * ((result - 3) & 7);
    result += 8;
    v3 += 8;
    *(v3 - 4) = (double)v7 / 255.0;
    v6 = (*(_DWORD *)(a2 + 4 * v4) >> v5) & 0xF;
    *(v3 - 3) = (double)(v6 | (16 * v6)) / 255.0;
  }
  while ( result - 2 < 16 );
  return result;
}
