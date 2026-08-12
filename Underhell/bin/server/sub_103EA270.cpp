int __thiscall sub_103EA270(int this, float a2, int a3, int a4, int a5)
{
  int v6; // edi

  if ( 0.0 != *(float *)(a3 + 24) )
  {
    v6 = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) && *(_DWORD *)(this + 424) )
      {
        sub_103E9D20(v6, this, *(_DWORD *)(this + 424));
        sub_103E9A60((_DWORD *)this, *(_DWORD *)(this + 424));
      }
    }
  }
  return sub_103ED6A0(this, a2, a3, a4, a5);
}
