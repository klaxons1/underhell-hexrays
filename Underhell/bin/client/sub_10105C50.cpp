int __thiscall sub_10105C50(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = a2;
  v3 = this[3];
  this[3] = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v3;
  v4 = this[1];
  this[1] = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = this[2];
  this[2] = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v5;
  v6 = *this;
  *this = *(_DWORD *)a2;
  *(_DWORD *)a2 = v6;
  LOWORD(v6) = *((_WORD *)this + 8);
  *((_WORD *)this + 8) = *(_WORD *)(a2 + 16);
  *(_WORD *)(a2 + 16) = v6;
  LOWORD(v6) = *((_WORD *)this + 9);
  *((_WORD *)this + 9) = *(_WORD *)(a2 + 18);
  *(_WORD *)(a2 + 18) = v6;
  LOWORD(v6) = *((_WORD *)this + 10);
  *((_WORD *)this + 10) = *(_WORD *)(a2 + 20);
  *(_WORD *)(a2 + 20) = v6;
  v7 = this[6];
  this[6] = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v7;
  LOWORD(v7) = *((_WORD *)this + 11);
  *((_WORD *)this + 11) = *(_WORD *)(a2 + 22);
  *(_WORD *)(a2 + 22) = v7;
  return result;
}
