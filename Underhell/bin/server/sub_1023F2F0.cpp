void __thiscall sub_1023F2F0(_DWORD *this, int a2, float a3, float a4, float a5)
{
  double v6; // st6
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  float v12; // [esp+0h] [ebp-10h]

  *(float *)(a2 + 36) = 0.0;
  *(_DWORD *)(a2 + 60) |= 1u;
  v6 = 1.0;
  if ( a3 <= 1.0 )
    v6 = a3;
  v12 = v6;
  sub_1023DBC0((float *)(a2 + 16), v12, 0.0);
  *(_DWORD *)(a2 + 60) |= 2u;
  sub_1023DBC0((float *)a2, a4, 0.0);
  if ( *(_DWORD *)(a2 + 68) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 16))(this, a2);
  }
  else
  {
    v7 = this[5];
    v8 = this[7];
    if ( v8 + 1 > v7 )
      sub_102ABFC0(v8 - v7 + 1);
    ++this[7];
    v9 = this[4];
    v10 = this[7] - v8 - 1;
    this[8] = v9;
    if ( v10 > 0 )
      memcpy((void *)(v9 + 4 * v8 + 4), (const void *)(v9 + 4 * v8), 4 * v10);
    v11 = (_DWORD *)(this[4] + 4 * v8);
    if ( v11 )
      *v11 = a2;
    sub_1023F0D0(a2, a5);
  }
}
