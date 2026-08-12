char __thiscall sub_10192370(int this, int a2)
{
  int v2; // edi
  char result; // al
  float **v5; // eax
  float *v6; // edi
  int v7; // ecx
  int v8; // edi
  float *v9; // eax

  v2 = a2;
  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !v2 )
  {
    *(float *)(this + 1204) = *((float *)off_103DC81C + 3);
    sub_10036100(this - 8, 8);
    v5 = sub_100F32D0((float **)&a2, (int)"C_EntityDissolve");
    v6 = *v5;
    if ( *v5 != *(float **)(this + 1184) )
    {
      if ( v6 )
        sub_100F2950(*v5);
      v7 = *(_DWORD *)(this + 1184);
      if ( v7 )
        sub_100F2FF0(v7);
      *(_DWORD *)(this + 1184) = v6;
    }
    if ( a2 )
      sub_100F2FF0(a2);
    v8 = *(_DWORD *)(this + 1184);
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    result = sub_100F3060(v8, v9);
    *(float *)(this + 1188) = 0.0078125;
    *(float *)(this + 1192) = 0.0;
  }
  return result;
}
