float *__thiscall sub_100616B0(float *this, float *a2)
{
  float *result; // eax
  float *v3; // esi
  float *v4; // edx
  int v5; // edi
  int v6; // ecx
  double v7; // st7
  float *v8; // esi
  float *v9; // edx
  int v10; // ecx
  double v11; // st7

  result = this;
  *this = *a2;
  v3 = a2 + 14;
  v4 = this + 5;
  v5 = (char *)a2 - (char *)this;
  v6 = 41;
  do
  {
    v7 = *(v3 - 13);
    v3 += 18;
    *(v4 - 4) = v7;
    v4 += 18;
    --v6;
    *(v4 - 21) = *(v3 - 30);
    *(v4 - 20) = *(v3 - 29);
    *(v4 - 19) = *(v3 - 28);
    *(v4 - 18) = *(float *)((char *)v4 + v5 - 72);
    *(v4 - 17) = *(v3 - 26);
    *(v4 - 16) = *(v3 - 25);
    *(v4 - 15) = *(v3 - 24);
    *(v4 - 14) = *(v3 - 23);
    *(v4 - 13) = *(v3 - 22);
    *(v4 - 12) = *(v3 - 21);
    *(v4 - 11) = *(v3 - 20);
    *(v4 - 10) = *(v3 - 19);
    *(v4 - 9) = *(v3 - 18);
    *(v4 - 8) = *(v3 - 17);
    *(v4 - 7) = *(v3 - 16);
    *(v4 - 6) = *(v3 - 15);
    *(v4 - 5) = *(v3 - 14);
  }
  while ( v6 );
  v8 = a2 + 740;
  v9 = result + 739;
  v10 = 41;
  do
  {
    v11 = *(float *)((char *)v9 + v5);
    v9 += 2;
    *(v9 - 2) = v11;
    v8 += 2;
    --v10;
    *(v9 - 1) = *(v8 - 2);
  }
  while ( v10 );
  result[821] = a2[821];
  return result;
}
