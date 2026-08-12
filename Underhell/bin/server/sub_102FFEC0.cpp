bool __thiscall sub_102FFEC0(_DWORD *this, int a2, float a3, int a4)
{
  bool v5; // bl
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  bool v12; // [esp+27h] [ebp+13h]

  v5 = sub_10022470(this, a2, a3, a4);
  v12 = v5;
  if ( *(_DWORD *)(dword_106E2C8C + 48) )
  {
    if ( (*(this - 464) & 0x20000) != 0 )
    {
      v6 = sub_100D7680(*(_DWORD *)(a2 + 96));
      if ( v6 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 220))(v6) == 4 )
        {
          v7 = __RTDynamicCast(
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                 (int)&CNPC_Antlion `RTTI Type Descriptor',
                 0);
          v8 = v7;
          if ( v7 )
          {
            if ( sub_102FDD20(v7) && !(*(int (__thiscall **)(_DWORD *))(*(this - 526) + 368))(this - 526) )
            {
              v9 = *(_DWORD *)(v8 + 2604);
              v10 = (*(int (__thiscall **)(_DWORD *))(*(this - 526) + 576))(this - 526);
              sub_10078690(v9, v10, 0.0, 0.0);
              sub_100457E0((_DWORD *)v8, 68);
              v5 = v12;
              *(float *)(v8 + 3656) = *(float *)(dword_106B31C8 + 12) + 2.0;
            }
          }
        }
      }
    }
  }
  return v5;
}
