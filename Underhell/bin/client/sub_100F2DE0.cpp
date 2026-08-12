void __thiscall sub_100F2DE0(void *this, int a2)
{
  int v3; // eax
  int v4; // esi
  double v6; // st5
  double v7; // st7
  float v8; // [esp+20h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  v8 = *(float *)(a2 + 8);
  if ( v4 != v3 + 4 )
  {
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4) )
    {
      (*(void (__thiscall **)(void *, int, float))(*(_DWORD *)this + 64))(this, v4, COERCE_FLOAT(LODWORD(v8)));
      v6 = *(float *)(v4 + 28) * v8;
      v7 = *(float *)(v4 + 32) * v8;
      *(float *)(v4 + 12) = *(float *)(v4 + 24) * v8 + *(float *)(v4 + 12);
      *(float *)(v4 + 16) = v6 + *(float *)(v4 + 16);
      *(float *)(v4 + 20) = v7 + *(float *)(v4 + 20);
      *(float *)(v4 + 44) = *(float *)(v4 + 44) + v8;
      (*(void (__thiscall **)(void *, int, float))(*(_DWORD *)this + 60))(this, v4, COERCE_FLOAT(LODWORD(v8)));
      if ( *(float *)(v4 + 40) <= (double)*(float *)(v4 + 44) )
        sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v4);
      v4 = *(_DWORD *)(a2 + 16);
      if ( v4 == *(_DWORD *)(a2 + 4) + 4 )
        break;
    }
  }
}
