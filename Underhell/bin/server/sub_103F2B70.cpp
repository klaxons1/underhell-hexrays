int __thiscall sub_103F2B70(int this)
{
  void (__thiscall *v2)(int); // eax
  int v3; // eax
  float v5; // [esp+0h] [ebp-Ch]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v5, 0);
  if ( (**(int (__thiscall ***)(int))(this + 1688))(this + 1688) )
  {
    v2 = *(void (__thiscall **)(int))(this + 8);
    if ( v2 )
      v2(this);
    if ( *(_BYTE *)(this + 896) && (*(_BYTE *)(this + 2114) || *(_BYTE *)(this + 2113)) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 340))(this);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 88))(v3, *(unsigned __int8 *)(this + 2114), 1);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 784))(this, this);
}
