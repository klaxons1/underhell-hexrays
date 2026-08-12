int __thiscall sub_10220B80(float *this, float *a2, int a3, float a4, float a5, int a6)
{
  int v6; // eax
  int result; // eax

  *((_DWORD *)this + 18) = a2;
  *(_DWORD *)this = *((_DWORD *)a2 + 1581) >> 2;
  this[1] = a2[1517];
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1585) >> 2;
  this[3] = a2[1521];
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 1593) >> 2;
  this[5] = a2[1529];
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1587) >> 2;
  this[7] = a2[1523];
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 1589) >> 2;
  this[9] = a2[1525];
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 1590) >> 2;
  this[11] = a2[1526];
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 1594) >> 2;
  v6 = *((_DWORD *)a2 + 1530);
  this[14] = a4;
  *((_DWORD *)this + 13) = v6;
  this[15] = a5;
  result = a3;
  *((_DWORD *)this + 16) = a6;
  *((_DWORD *)this + 17) = a3;
  return result;
}
