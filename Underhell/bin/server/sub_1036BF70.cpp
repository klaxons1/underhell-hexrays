void __thiscall sub_1036BF70(int this, float *a2)
{
  void (__stdcall *v3)(_DWORD, _DWORD); // edx
  double v4; // st7
  void (__thiscall *v5)(int, _DWORD, _DWORD); // eax
  _BYTE v6[8]; // [esp+1Ch] [ebp-24h] BYREF
  float v7; // [esp+24h] [ebp-1Ch]
  float v8[3]; // [esp+28h] [ebp-18h] BYREF
  float v9; // [esp+34h] [ebp-Ch] BYREF
  float v10; // [esp+38h] [ebp-8h]
  float v11; // [esp+3Ch] [ebp-4h]

  sub_101C73D0((unsigned int *)this, 0);
  if ( sub_1036AE90(this) )
  {
    v9 = *(float *)(this + 716);
    v10 = *(float *)(this + 720);
    v11 = *(float *)(this + 724) + 1.0;
    sub_1025F370((void *)this, &v9, 0);
  }
  sub_104222B0(this + 728, 0, 0, v6);
  if ( a2 )
  {
    v9 = *a2 * 4.0;
    v3 = *(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v10 = 4.0 * a2[1];
    v11 = v7;
    v4 = 40.0;
    v3(40.0, 80.0);
  }
  else
  {
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -4.0,
           4.0);
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -4.0,
            4.0);
    v5 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v11 = v7;
    v4 = 40.0;
    v5(dword_106B31E4, 40.0, 80.0);
  }
  v8[0] = v9 * v4;
  v8[1] = v10 * v4;
  v8[2] = v4 * v11;
  sub_100DD660(this, v8);
}
