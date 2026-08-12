int __thiscall sub_103F7B40(int this)
{
  int v2; // edx
  int result; // eax
  int *v4; // ecx
  float v5; // [esp+4h] [ebp-24h]
  float v6[3]; // [esp+10h] [ebp-18h] BYREF
  float v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/crossbow_bolt.mdl");
  sub_100E0970(this, v2, 5, 2);
  v7[0] = 0.30000001;
  v7[1] = 0.30000001;
  v7[2] = 0.30000001;
  v6[0] = -0.30000001;
  v6[1] = -0.30000001;
  v6[2] = -0.30000001;
  sub_1025F360((_DWORD *)this, (int)v6, (int)v7);
  sub_10112C00(this + 320, 2);
  *(float *)(this + 552) = 0.050000001;
  sub_101C6CC0((float *)this);
  *(_DWORD *)(this + 196) = sub_103F7190;
  sub_100EC3F0((_DWORD *)this, (int)sub_103F7010, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = sub_100EC4A0((int *)this, v5, 0);
  if ( *(_DWORD *)(this + 848) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 848) = 1;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 848);
      *(_DWORD *)(this + 848) = 1;
    }
  }
  return result;
}
