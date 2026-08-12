int __thiscall sub_10412840(int this)
{
  int v2; // edx
  int v3; // edi
  int *v4; // ecx
  void (__thiscall *v5)(int); // eax
  int result; // eax
  float v7[3]; // [esp+28h] [ebp-18h] BYREF
  float v8[3]; // [esp+34h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/missile_defense.mdl");
  v8[0] = 36.0;
  v8[1] = 36.0;
  v8[2] = 64.0;
  v7[0] = -36.0;
  v7[1] = -36.0;
  v7[2] = 0.0;
  sub_1025F360((_DWORD *)this, (int)v7, (int)v8);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 0, 0);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  sub_100CF450((_DWORD *)this, -1);
  if ( *(_DWORD *)(this + 220) != 10 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 10;
  }
  *(float *)(this + 1684) = 0.1;
  *(_DWORD *)(this + 2324) = 0;
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 0x20000);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)this + 1128))(this, 21, 1, 5);
  v3 = *(_DWORD *)(this + 248) | 0x100;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  v5 = *(void (__thiscall **)(int))(*(_DWORD *)this + 800);
  *(float *)(this + 3636) = *(float *)(dword_106B31C8 + 12);
  v5(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  sub_100BFF30(this, 0, 10.0);
  sub_100BFF30(this, 1, 0.0);
  sub_100C1600(this, 1, 1);
  sub_100C1600(this, 2, 1);
  sub_100C1600(this, 3, 1);
  result = sub_100C1600(this, 4, 1);
  *(_DWORD *)(this + 2324) = 1;
  return result;
}
