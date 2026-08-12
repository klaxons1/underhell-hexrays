char __thiscall sub_102D5D70(int this, int a2, int a3, int a4)
{
  int v5; // eax
  double v6; // st7
  int v8; // eax
  double v9; // st7
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]

  if ( a2 == dword_106E50B0 )
  {
    v5 = dword_106B31C8;
    v6 = *(float *)(this + 2120) - *(float *)(dword_106B31C8 + 12) + 5.0;
    *(float *)(this + 2120) = *(float *)(dword_106B31C8 + 12) + v6;
    *(float *)(this + 2124) = v6 - 1.5 + *(float *)(v5 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_102D5AE0, 0.0, 0);
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    return 1;
  }
  else if ( a2 == dword_106E50B4 )
  {
    v8 = dword_106B31C8;
    *(float *)(this + 2120) = *(float *)(dword_106B31C8 + 12);
    *(float *)(this + 2124) = *(float *)(v8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_102D5AE0, 0.0, 0);
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    return 1;
  }
  else if ( a2 == dword_106E50AC )
  {
    v9 = *(float *)(this + 2120) - *(float *)(dword_106B31C8 + 12) - 5.0;
    if ( v9 <= 0.0 )
      v9 = 0.0;
    v11 = v9 - 1.5;
    v10 = v9;
    sub_102D5D00(this, v10, v11);
    return 1;
  }
  else
  {
    return sub_100C7860((void *)this, a2, a3, a4);
  }
}
