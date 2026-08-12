void __thiscall sub_103787F0(int this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // edx
  int v5; // eax
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  float *v9; // eax
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/hunter.mdl");
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  *(_DWORD *)(this + 1676) = 9;
  sub_10027A90(this, 0);
  sub_10020F00((char *)this);
  sub_100223F0(0);
  *(float *)(this + 800) = 500.0;
  *(_DWORD *)(this + 2324) = 0;
  sub_100CF450((_DWORD *)this, -1);
  v2 = *(_DWORD *)(dword_106E8574 + 48);
  v3 = (_DWORD *)(this + 216);
  if ( *(_DWORD *)(this + 216) != v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *v3 = v2;
  }
  if ( *(_DWORD *)(this + 220) != *v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = *v3;
  }
  *(float *)(this + 1684) = 0.0;
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v4, 3, 0);
  sub_10375B90(this);
  sub_10020460((_DWORD *)this, 75497473);
  sub_10020460((_DWORD *)this, 917504);
  sub_10020460((_DWORD *)this, 128);
  if ( !*(_DWORD *)(dword_106E8D0C + 48) )
    *(_DWORD *)(this + 252) |= 0x8000000u;
  if ( *(_DWORD *)(dword_106E945C + 48) )
    sub_10020460((_DWORD *)this, 2);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  v5 = *(_DWORD *)this;
  *(_BYTE *)(this + 4229) = 1;
  *(float *)(this + 2896) = *(float *)(dword_106E864C + 44);
  v12 = *(float *)(dword_106E9144 + 44);
  v6 = v12;
  if ( v12 < (double)*(float *)((*(int (__thiscall **)(int))(v5 + 1868))(this) + 28) )
  {
    v7 = v6 + 0.1;
    if ( v7 <= 60.0 )
      v7 = 60.0;
    v10 = v7;
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    sub_100756F0(v8, v10);
    v6 = v12;
  }
  v11 = v6;
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v9, v11);
  if ( *(_DWORD *)(this + 4172) )
    *(float *)(this + 4176) = *(float *)(dword_106B31C8 + 12) + 0.1;
}
