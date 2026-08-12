int __thiscall sub_103E5B30(float *this, int a2)
{
  int (__thiscall *v3)(float *, int); // eax

  if ( a2 )
    this[393] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[393] = NAN;
  v3 = *(int (__thiscall **)(float *, int))(*(_DWORD *)this + 76);
  this[394] = 0.0;
  if ( a2 )
  {
    this[422] = 0.015;
    this[423] = 1.8;
    this[424] = 0.012;
    this[425] = 0.40000001;
    this[426] = 0.40000001;
    this[427] = 5.0;
    return v3(this, a2);
  }
  else
  {
    this[422] = 0.02;
    this[423] = 2.4000001;
    this[424] = 0.012;
    this[425] = 0.039999999;
    this[426] = 0.40000001;
    this[427] = 1.0;
    v3(this, 0);
    return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this + 281) + 264))(1.0);
  }
}
