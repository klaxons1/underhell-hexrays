int __thiscall sub_1035DD00(int this)
{
  const char *v2; // edi
  int v3; // ebx
  int v4; // edx
  int (__thiscall *v5)(int); // eax
  int result; // eax
  float v7[3]; // [esp+20h] [ebp-14h] BYREF
  int v8; // [esp+2Ch] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+30h] [ebp-4h] BYREF

  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v9);
  if ( !v2 || !*v2 )
  {
    v2 = "models/crow.mdl";
    *(_DWORD *)(this + 460) = *sub_10162BE0(&v8, "models/crow.mdl");
    sub_100D8500((_DWORD *)this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  v3 = (int)*(float *)(dword_106E7AFC + 44);
  if ( *(_DWORD *)(this + 220) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v3;
  }
  *(_DWORD *)(this + 1676) = 3;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v4, 3, 0);
  *(float *)(this + 1684) = -1.0;
  v7[0] = 6.0;
  v7[1] = 0.0;
  v7[2] = 11.0;
  sub_100DC4E0((float *)this, v7);
  *(float *)(this + 3632) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              0.0,
                              5.0)
                          + *(float *)(dword_106B31C8 + 12);
  sub_100CF450((_DWORD *)this, 0);
  *(_DWORD *)(this + 2324) = 0;
  *(_DWORD *)(this + 3640) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               0,
                               12);
  sub_100EBE30(this, 26);
  sub_100204A0((_DWORD *)this);
  sub_1035D090(this, (*(_DWORD *)(this + 248) >> 4) & 1);
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 1128))(this, 19, 4, 0);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1164);
  *(_BYTE *)(this + 3660) = 0;
  *(_BYTE *)(this + 3628) = 0;
  *(float *)(this + 3656) = *(float *)(dword_106B31C8 + 12);
  result = v5(this);
  *(_DWORD *)(this + 3624) = 1;
  *(float *)(this + 3664) = flt_106F1CA8;
  *(float *)(this + 3668) = flt_106F1CAC;
  *(float *)(this + 3672) = flt_106F1CB0;
  *(float *)(this + 3676) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3680) = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 2608) = -1;
  return result;
}
