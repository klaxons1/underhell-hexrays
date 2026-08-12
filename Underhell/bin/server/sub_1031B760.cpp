void __thiscall sub_1031B760(int *this, int a2)
{
  int v3; // edi
  int *v4; // esi
  float v5; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 24) == 1 && *(float *)(a2 + 8) > 0.0 )
  {
    v5 = *(float *)(a2 + 8);
    v3 = (int)((double)(*(int (__thiscall **)(int *))(*this + 448))(this) * v5 * 0.0099999998);
    v4 = this + 55;
    if ( *v4 != v3 )
    {
      (*(void (__thiscall **)(int *, int *))(*(v4 - 55) + 464))(v4 - 55, v4);
      *v4 = v3;
    }
  }
}
