void __thiscall sub_103335A0(int this)
{
  int v2; // edx
  bool v3; // zf
  _BYTE *v4; // edi
  int v5; // ebx
  float v6; // [esp+0h] [ebp-2Ch]
  float v7[3]; // [esp+14h] [ebp-18h] BYREF
  float v8[3]; // [esp+20h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v8[0] = 16.0;
  v8[1] = 16.0;
  v8[2] = 16.0;
  v7[0] = -16.0;
  v7[1] = -16.0;
  v7[2] = -16.0;
  sub_1025F360((_DWORD *)this, (int)v7, (int)v8);
  sub_100E0970(this, v2, 0, 0);
  sub_100CF450((_DWORD *)this, 0);
  sub_103333F0((_BYTE *)this);
  v3 = (*(_DWORD *)(this + 248) & 0x80000) == 0;
  *(float *)(this + 552) = 0.0;
  *(float *)(this + 1684) = cos(*(float *)(this + 1684) * 0.017453292 * 0.5);
  if ( v3 )
    sub_100CF450((_DWORD *)this, -1);
  else
    sub_100CF450((_DWORD *)this, 0);
  sub_100EA940((int *)this, 0x2000);
  *(_DWORD *)(this + 252) |= 0x8000000u;
  sub_100EC3F0((_DWORD *)this, (int)sub_10332C30, 0.0, 0);
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v6, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  if ( (*(_DWORD *)(this + 248) & 0x10000) != 0 )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  if ( (*(_DWORD *)(this + 248) & 0x200000) != 0 )
    sub_100E9630((float *)this, 0, 0, 0);
  v4 = (_BYTE *)(this + 225);
  if ( (*(_DWORD *)(this + 248) & 0x20000) != 0 )
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *v4 = 0;
    }
  }
  else if ( *v4 != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *v4 = 2;
  }
  sub_100EAB80((_DWORD *)this, 32);
  sub_101C6E40(this);
  sub_10020460((_DWORD *)this, 0x80000000);
  v5 = *(_DWORD *)(this + 220);
  if ( *(_DWORD *)(this + 216) != v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = v5;
  }
  if ( *(float *)(this + 3676) > 0.0 )
    sub_100EA940((int *)this, 0x10000);
}
