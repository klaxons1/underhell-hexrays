void __thiscall sub_101CC920(unsigned __int16 *this)
{
  int v2; // ebx
  int v3; // edx
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // ebx
  float v8; // [esp+Ch] [ebp-8h] BYREF
  float v9; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  (*(void (__thiscall **)(unsigned __int16 *, _DWORD, int))(*(_DWORD *)this + 140))(this, 0, -1);
  (*(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)this + 76))(this, 0);
  sub_100E0EA0((int)this, &flt_106F1CB4);
  sub_100E0970((int)this, v3, 6, 0);
  sub_101129A0(this + 160, this[178] & 0xFFFB);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *((_DWORD *)this + 1422));
  *((_DWORD *)this + 1422) = 0;
  if ( *((int *)this + 283) > 0 )
  {
    v4 = this + 578;
    do
    {
      (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v4 + 140))(*v4, &v9, &v8);
      v5 = *v4;
      v9 = v9 * 0.02;
      v8 = 0.02 * v8;
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 136))(v5, &v9, &v9);
      ++v2;
      v4 += 6;
    }
    while ( v2 < *((_DWORD *)this + 283) );
  }
  sub_100EBE30((int)this, 1);
  v6 = 0;
  if ( *((int *)this + 283) > 0 )
  {
    v7 = this + 578;
    do
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 104))(*v7);
      ++v6;
      v7 += 6;
    }
    while ( v6 < *((_DWORD *)this + 283) );
  }
}
