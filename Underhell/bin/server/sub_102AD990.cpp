char __thiscall sub_102AD990(float *this, float *a2, float a3, int a4)
{
  int v5; // eax
  int v6; // eax

  if ( !a4 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 320))(a4) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 1092))(a4) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 1092))(a4);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 32))(v5);
      if ( v6 )
        return sub_102AD820(this, a2, a3, v6);
    }
  }
  return sub_102AD740(a2, a3, a4);
}
