void __thiscall sub_1018EE30(char *this)
{
  int v2; // ecx
  float *v3; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // esi

  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 125) = 0;
  *((_DWORD *)this + 11) = *(_DWORD *)(dword_106B8370 + 1068);
  *((_WORD *)this + 24) = 0;
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 187) = 0;
  *((_DWORD *)this + 188) = 0;
  v2 = 0;
  v3 = (float *)(this + 76);
  do
  {
    *(v3 - 2) = 0.0;
    ++v2;
    *v3++ = 0.0;
    *(v3 - 5) = 0.0;
    v3[100] = 0.0;
    this[v2 + 488] = 0;
  }
  while ( v2 < 2 );
  this[476] = 0;
  *(_DWORD *)this = dword_1063261C++;
  *((_DWORD *)this + 198) = 0;
  *((_DWORD *)this + 199) = 0;
  this[488] = 0;
  v4 = this + 524;
  v5 = 4;
  do
  {
    sub_1018EC70(v4);
    v4 += 9;
    --v5;
  }
  while ( v5 );
  v6 = 2;
  v7 = this + 668;
  do
  {
    sub_1018EC70(v7);
    v7 += 9;
    --v6;
  }
  while ( v6 );
}
