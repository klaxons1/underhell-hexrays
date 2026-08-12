void __thiscall sub_10254DA0(unsigned int this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+0h] [ebp-Ch]

  if ( sub_100E9200((_DWORD *)this, 0) <= *(float *)(dword_106B31C8 + 12) )
  {
    if ( a2 )
      *(_DWORD *)(this + 880) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(this + 880) = -1;
    v3 = *(_DWORD *)(this + 880);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
    sub_1010DD80((_DWORD *)(this + 1092), __SPAIR64__(this, v4), 0.0);
    if ( *(float *)(this + 808) <= 0.0 )
    {
      *(_DWORD *)(this + 196) = 0;
      v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v6, 0);
      sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    }
    else
    {
      sub_100EC3F0((_DWORD *)this, (int)sub_102543C0, 0.0, 0);
      v5 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 808);
      sub_100EC4A0((int *)this, v5, 0);
    }
  }
}
