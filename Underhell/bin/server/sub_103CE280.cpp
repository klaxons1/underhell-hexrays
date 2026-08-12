char __thiscall sub_103CE280(int this, float *a2, int a3, float a4, int *a5)
{
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !sub_100224E0((int)a2, a3, a4, a5) )
    return 0;
  if ( *a5 < 0 && (a2[21] != flt_106F1CA8 || a2[22] != flt_106F1CAC || a2[23] != flt_106F1CB0) )
  {
    if ( a3 )
      *(_DWORD *)(this + 3836) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    else
      *(_DWORD *)(this + 3836) = -1;
    v7[0] = a2[21] * -1.0;
    v7[1] = a2[22] * -1.0;
    v7[2] = -1.0 * a2[23];
    *(float *)(this + 3840) = sub_10265030(v7);
  }
  return 1;
}
