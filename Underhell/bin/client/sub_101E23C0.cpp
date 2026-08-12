void __thiscall sub_101E23C0(int this, float a2)
{
  int v3; // ecx
  float v4; // [esp+8h] [ebp+4h]

  v3 = *(_DWORD *)(this + 24);
  if ( v3 )
  {
    v4 = a2 - *(float *)(v3 + 72);
    *(float *)(this + 16) = v4 / ((double (__thiscall *)(int))**(_DWORD **)v3)(v3);
  }
}
