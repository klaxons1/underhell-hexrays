unsigned int __thiscall sub_10325740(int *this)
{
  int v2; // edi
  double v3; // st7
  void (__thiscall *v4)(int, float *, float *); // edx
  int v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]

  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v2 = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 368))(this) + 424);
    if ( v2 )
    {
      sub_100BD6D0(this, this[2474], (int)v7, &v8, 0, 0);
      v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v2 + 116))(v2) * 50.0;
      v4 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v2 + 240);
      v8 = v8 * v3;
      v9 = v9 * v3;
      v10 = v3 * v10;
      v4(v2, &v8, &flt_106F1CA8);
    }
    v5 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( v5 )
    {
      this[2475] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      return sub_103244B0((int)this, 0);
    }
    this[2475] = -1;
  }
  return sub_103244B0((int)this, 0);
}
