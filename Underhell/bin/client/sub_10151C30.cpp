int __thiscall sub_10151C30(float *this, int a2)
{
  int v3; // eax
  int v4; // eax
  float *v5; // eax
  float v7; // [esp+0h] [ebp-24h]
  float v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-18h]
  int v10[4]; // [esp+14h] [ebp-10h] BYREF

  v9 = *((unsigned __int8 *)this + 112);
  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  sub_10017240((int)this, v3, 0, v9);
  v4 = *((_DWORD *)this + 21);
  *(float *)v10 = (double)(unsigned __int8)v4 * 0.00392156862745098;
  v10[3] = BYTE2(v4);
  *(float *)&v10[1] = (double)BYTE1(v4) * 0.00392156862745098;
  *(float *)&v10[2] = 0.00392156862745098 * (double)BYTE2(v4);
  v8 = this[303] * *((float *)off_103DC81C + 3);
  v7 = this[304];
  v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 4))(this);
  sub_1001A270(v5, this + 300, this + 297, v7, (float *)v10, v8);
  return 1;
}
