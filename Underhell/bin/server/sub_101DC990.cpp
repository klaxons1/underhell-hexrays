int __thiscall sub_101DC990(int this, int a2)
{
  double v2; // st7
  double v3; // st6
  float v5; // [esp+0h] [ebp-4h]

  v2 = 0.0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  *(float *)(this + 808) = v3;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  v5 = v2;
  return (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 800) + 8))(LODWORD(v5));
}
