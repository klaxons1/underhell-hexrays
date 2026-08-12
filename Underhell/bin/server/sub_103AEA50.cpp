int __thiscall sub_103AEA50(char *this, int a2)
{
  int (*v3)(void); // edx
  float *v4; // eax
  float *v5; // eax
  int result; // eax
  float v7[9]; // [esp+10h] [ebp-24h] BYREF

  v3 = *(int (**)(void))(*(_DWORD *)this + 1868);
  this[3912] = 1;
  v4 = (float *)v3();
  sub_100756F0(v4, 601.0);
  v5 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v5, 600.0);
  result = *((_DWORD *)this + 704);
  qmemcpy(v7, this + 3968, sizeof(v7));
  v7[1] = 0.80000001;
  v7[4] = 1200.0;
  qmemcpy(this + 3968, v7, 0x24u);
  *(_BYTE *)(result + 16) = 0;
  return result;
}
