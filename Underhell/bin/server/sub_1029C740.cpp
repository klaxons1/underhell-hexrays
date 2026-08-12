_DWORD *__thiscall sub_1029C740(void *this, unsigned int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // ecx
  int (__thiscall *v6)(void *); // eax
  int v7; // eax
  int v8; // eax

  v3 = *((_DWORD *)this + 5);
  if ( v3 == -1 )
    goto LABEL_8;
  v4 = &off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    goto LABEL_8;
  v5 = a2;
  if ( a2 == -1 || off_1061BE18[4 * (a2 & 0xFFF) + 2] != a2 >> 12 || !off_1061BE18[4 * (a2 & 0xFFF) + 1] )
  {
    v6 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 52);
    *((float *)this + 7) = *(float *)(dword_106B31C8 + 12) + 10.0;
    v7 = v6(this);
    v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100000);
    sub_10023CB0(*((char **)this + 1), v8);
LABEL_8:
    v5 = a2;
  }
  *((_DWORD *)this + 5) = v5;
  return sub_10044510(*((_DWORD *)this + 1), (int)"Setting a new func_tank");
}
