void __thiscall sub_101DD790(int this, int a2)
{
  int v3; // edi
  __int64 v4; // [esp-4h] [ebp-14h]

  v3 = *(_DWORD *)(this + 424);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  }
  *(float *)(this + 992) = 0.0;
  *(_DWORD *)(this + 988) = 0;
  HIDWORD(v4) = this;
  LODWORD(v4) = this;
  sub_1010DD80((_DWORD *)(this + 1060), v4, 0.0);
}
