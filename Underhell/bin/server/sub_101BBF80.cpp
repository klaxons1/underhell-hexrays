int *__thiscall sub_101BBF80(int *this, int *a2)
{
  _DWORD *v3; // eax
  int v4; // edx
  int v5; // ecx
  int *v6; // ecx
  int *v7; // eax
  int v8; // edi
  double v9; // st7

  sub_101BBD40(this + 1, a2 + 1);
  sub_101BBE40(this + 6, a2 + 6);
  this[11] = a2[11];
  this[12] = a2[12];
  this[13] = a2[13];
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  this[17] = a2[17];
  this[18] = a2[18];
  this[19] = a2[19];
  v3 = this + 20;
  v4 = (char *)a2 - (char *)this;
  v5 = 20;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4);
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = a2 + 42;
  v7 = this + 40;
  v8 = 2;
  do
  {
    v9 = *(float *)((char *)v7 + v4);
    v7 += 10;
    *((float *)v7 - 10) = v9;
    v6 += 10;
    --v8;
    *(v7 - 9) = *(v6 - 11);
    *(v7 - 8) = *(v6 - 10);
    *(v7 - 7) = *(v6 - 9);
    *(v7 - 6) = *(v6 - 8);
    *(v7 - 5) = *(v6 - 7);
    *(v7 - 4) = *(v6 - 6);
    *(v7 - 3) = *(v6 - 5);
    *(v7 - 2) = *(v6 - 4);
    *(v7 - 1) = *(v6 - 3);
  }
  while ( v8 );
  return this;
}
