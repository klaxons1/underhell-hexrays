int __thiscall sub_103AEAE0(char *this, int a2)
{
  int v3; // edx
  float *v4; // eax
  float *v5; // eax
  int result; // eax
  float v7; // [esp+0h] [ebp-34h]
  float v8[9]; // [esp+10h] [ebp-24h] BYREF

  v3 = *(_DWORD *)this;
  this[3912] = 0;
  v7 = *(float *)(dword_106EB3FC + 44);
  v4 = (float *)(*(int (**)(void))(v3 + 1868))();
  sub_100756C0(v4, v7);
  v5 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
  sub_100756F0(v5, 60.0);
  result = *((_DWORD *)this + 704);
  qmemcpy(v8, this + 3968, sizeof(v8));
  v8[1] = *(float *)(dword_106EB324 + 44);
  v8[4] = *(float *)(dword_106EB2DC + 44);
  qmemcpy(this + 3968, v8, 0x24u);
  *(_BYTE *)(result + 16) = 1;
  return result;
}
