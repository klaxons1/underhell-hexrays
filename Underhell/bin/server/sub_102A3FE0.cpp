int __thiscall sub_102A3FE0(int **this)
{
  int v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v2 = ((int (__thiscall *)(int **))(*this)[13])(this);
  v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100016);
  if ( sub_10023D10(this[1], v3) )
  {
    sub_10039F40(this[1], 16);
    sub_10081C10(this[1][647]);
    (*(void (__thiscall **)(int *, int **, int **, float *))(*this[1] + 416))(
      this[1],
      this + 19,
      this + 22,
      &flt_106F1CA8);
    sub_100EAB80(this[1], 8);
    return 100015;
  }
  v5 = ((int (__thiscall *)(int **))(*this)[13])(this);
  v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100001);
  if ( !sub_10023D10(this[1], v6) && this[26] != (int *)1 )
    return sub_102A06F0((int)this);
  if ( this[4] == (int *)2 )
  {
    v7 = ((int (__thiscall *)(int **))(*this)[13])(this);
    v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100001);
    sub_10023E00((char *)this[1], v8);
    this[26] = 0;
    return 0;
  }
  if ( *(float *)(dword_106B31C8 + 12) < (double)*((float *)this + 52) )
    return 0;
  v9 = ((int (__thiscall *)(int **))(*this)[13])(this);
  v10 = sub_1007DB30((_DWORD *)(v9 + 52), 100001);
  sub_10023E00((char *)this[1], v10);
  return 100007;
}
