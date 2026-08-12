int __thiscall sub_103D6120(int this, float a2)
{
  int v3; // ecx
  float v5; // [esp+0h] [ebp-Ch]

  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  v3 = *(_DWORD *)(this + 1152);
  if ( v3 )
    sub_10242820(v3, 0, a2);
  sub_100EC3F0((_DWORD *)this, (int)sub_103D6080, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + a2;
  return sub_100EC4A0((int *)this, v5, 0);
}
