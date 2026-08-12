int __thiscall sub_102F2FC0(int this)
{
  const char *v2; // eax
  int v3; // ebx
  int v4; // edx
  int result; // eax
  float v6[3]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v7[4]; // [esp+14h] [ebp-4h] BYREF

  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v7);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  v3 = (int)*(float *)(dword_106E26EC + 44);
  if ( *(_DWORD *)(this + 220) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v3;
  }
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  *(_DWORD *)(this + 1676) = 8;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v4, 4, 0);
  *(float *)(this + 1684) = -1.0;
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 80.0;
  sub_100DC4E0((float *)this, v6);
  sub_100CF450((_DWORD *)this, 2);
  *(_DWORD *)(this + 2324) = 0;
  sub_100204A0((_DWORD *)this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  *(_DWORD *)(this + 2608) = -1;
  *(_DWORD *)(this + 252) |= 0x8000000u;
  return result;
}
