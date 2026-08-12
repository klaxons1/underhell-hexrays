int __thiscall sub_1016BBA0(int this, int a2, float a3)
{
  void (__thiscall *v4)(int); // eax
  int result; // eax

  sub_100390F0((void *)this, (int *)(this + 20));
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)this + 392);
  *(_DWORD *)(this + 80) = -1;
  v4(this);
  *(float *)(this + 1984) = a3 + 0.75;
  *(_DWORD *)(this + 1980) = 0;
  sub_10039390((_WORD *)this, a2);
  LOBYTE(result) = sub_10035090((_BYTE *)this, 0, 0);
  *(float *)(this + 2000) = 0.5;
  *(_BYTE *)(this + 84) = 0;
  *(_DWORD *)(this + 1200) = 0;
  *(float *)(this + 2004) = 1.0;
  *(_DWORD *)(this + 1196) = 0;
  *(_DWORD *)(this + 2008) = 0;
  *(_DWORD *)(this + 2064) = 0;
  *(_BYTE *)(this + 2088) = 0;
  *(_WORD *)(this + 2016) = -1;
  return result;
}
