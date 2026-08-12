int __thiscall sub_10144A20(int this, int a2)
{
  int result; // eax
  float v4; // [esp+4h] [ebp-14h]
  float v5; // [esp+14h] [ebp-4h]

  sub_100EC3F0((_DWORD *)this, (int)sub_10144780, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 860) + 0.1;
  if ( *(_DWORD *)(this + 856) != LODWORD(v5) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 856);
    *(float *)(this + 856) = v5;
  }
  v4 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 860);
  result = sub_100EC4A0((int *)this, v4, 0);
  if ( *(_BYTE *)(this + 869) )
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), (int)"SkyboxLerpContext");
  return result;
}
