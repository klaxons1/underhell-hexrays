void __thiscall sub_101DCE10(int this)
{
  int v2; // edi
  __int64 v3; // [esp-4h] [ebp-14h]

  v2 = *(_DWORD *)(this + 424);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 60))(v2, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 96))(v2);
  }
  *(float *)(this + 992) = 0.0;
  *(_DWORD *)(this + 988) = 0;
  HIDWORD(v3) = this;
  LODWORD(v3) = this;
  sub_1010DD80((_DWORD *)(this + 1060), v3, 0.0);
}
