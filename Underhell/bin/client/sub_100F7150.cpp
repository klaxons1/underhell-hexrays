int __thiscall sub_100F7150(int *this, float *a2, float *a3, int a4)
{
  int v5; // eax
  bool v6; // zf
  double v7; // st7
  float *v8; // ebx
  float *v9; // eax
  float v11[3]; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  v5 = (*(int (__thiscall **)(int *))(*this + 492))(this);
  v6 = *((_BYTE *)this + 393) == 0;
  v7 = *a2;
  v12 = v5;
  v11[0] = v7 + *a3;
  v11[1] = a2[1] + a3[1];
  v11[2] = a2[2] + a3[2];
  if ( v6 || (this[97] & 4) != 0 || (this[97] & 0x20) != 0 )
    v12 &= ~0x2000000u;
  v8 = (float *)(*(int (__thiscall **)(int *))(*this + 264))(this);
  v9 = (float *)(*(int (__thiscall **)(int *))(*this + 260))(this);
  return sub_10012C30((int)&savedregs, (int)this, a2, v11, v9, v8, v12, (int)this, this[184], a4);
}
