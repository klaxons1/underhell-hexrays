void __thiscall sub_101FA120(__m128 *this, float a2)
{
  double v3; // st7
  __int16 v4; // fps
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  __int32 v8; // eax
  __m128 v9; // xmm0
  int v10; // ebx
  int i; // edi
  __int32 v12; // edi
  int v13; // ebx
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+Ch] [ebp-14h]

  v3 = this[2].m128_f32[1];
  v6 = 0;
  if ( a2 > v3 )
  {
    v14 = a2 - this[2].m128_f32[1];
    v5 = a2 < v3;
    v7 = a2 == v3;
    sub_101F7F00(v4, (int)this, v14);
    this[412].m128_i32[0] &= ~1u;
    this[2].m128_f32[1] = a2;
    v8 = this[4].m128_i32[0];
    v9 = 0;
    v9.m128_f32[0] = a2;
    this[1] = _mm_shuffle_ps(v9, v9, 0);
    v10 = *(_DWORD *)(v8 + 640);
    for ( i = 0; i < v10; ++i )
      (*(void (__stdcall **)(_DWORD, __m128 *, __int32))(**(_DWORD **)(*(_DWORD *)(this[4].m128_i32[0] + 628) + 4 * i)
                                                       + 112))(
        LODWORD(a2),
        this,
        this[373].m128_i32[2] + *(_DWORD *)(*(_DWORD *)(this[4].m128_i32[0] + 768) + 4 * i));
    v12 = this[375].m128_i32[2];
    if ( v12 )
    {
      v13 = 0;
      do
      {
        v15 = a2 - *(float *)(*(_DWORD *)(this[4].m128_i32[0] + 688) + v13 + 36);
        sub_101FA120(v15);
        v12 = *(_DWORD *)(v12 + 5980);
        v13 += 40;
      }
      while ( v12 );
    }
  }
}
