char __thiscall sub_10147790(int this, char *String2, char *a3, float *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  char result; // al

  sub_101BC610(String2, (int)a4, 0);
  *(float *)(this + 284) = a4[24];
  sub_10146130(this, a4);
  v5 = *(_DWORD *)(this + 4);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != *(_DWORD *)(this + 4) >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != *(_DWORD *)(this + 4) >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 24))(v6);
  sub_101DBFB0(a3, v7, v8);
  if ( a4[2] != flt_106F1CA8 || a4[3] != flt_106F1CAC || a4[4] != flt_106F1CB0 )
  {
    *((float *)a3 + 385) = a4[2];
    *((float *)a3 + 386) = a4[3];
    *((float *)a3 + 387) = a4[4];
    *((_DWORD *)a3 + 388) = a3 + 1540;
  }
  result = 1;
  if ( a4[5] > 0.0 )
    *((float *)a3 + 389) = a4[5];
  return result;
}
