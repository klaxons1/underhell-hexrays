int __thiscall sub_10151B60(int this, int a2)
{
  int result; // eax
  int v4; // edi
  float *v5; // eax

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    v4 = *(_DWORD *)(this + 1212);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    sub_100F3060(v4, v5);
    *(float *)(this + 1204) = 1.0 / (double)*(int *)(this + 1184);
    *(float *)(this + 1208) = 0.0;
    result = sub_100F29B0(*(_DWORD *)(this + 1212), v4, this, "particle/fire");
    *(_DWORD *)(this + 1200) = result;
  }
  return result;
}
