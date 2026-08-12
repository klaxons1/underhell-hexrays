char __thiscall sub_101034A0(int this)
{
  float *v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // eax
  const char *v9; // eax
  unsigned __int16 v10; // ax
  int v11; // ebx
  float *v12; // edi
  float v13; // [esp+1Ch] [ebp-664h]
  char v14[1596]; // [esp+2Ch] [ebp-654h] BYREF
  float v15[3]; // [esp+668h] [ebp-18h] BYREF
  float v16[3]; // [esp+674h] [ebp-Ch] BYREF

  v2 = *(float **)this;
  v3 = sub_10034E90((_DWORD *)this);
  if ( !(*((unsigned __int8 (__thiscall **)(int, int, int))v2 + 81))(this, v3, 7) )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
  if ( v4 )
  {
    v2 = v16;
    (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_10413178 + 24))(dword_10413178, v4, v16, v15);
    sub_1008FC00(this + 352, v16, v15);
  }
  v5 = sub_10034480((__int16 *)this);
  if ( !sub_101028B0((int)v2, v14, (_DWORD *)this, v5) )
  {
    v6 = sub_10034480((__int16 *)this);
    DevMsg("C_PhysPropClientside::Initialize: PhysModelParseSolid failed for entity %i.\n", v6);
    return 0;
  }
  v8 = sub_1000F480((_DWORD *)this, 6, 0, *(_BYTE *)(this + 1984) & 1, (int)v14);
  *(_DWORD *)(this + 184) = v8;
  if ( v8 )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 92))(v8);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 184) + 88))(*(_DWORD *)(this + 184), v10 | 8);
    if ( (*(_BYTE *)(this + 1984) & 8) != 0 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 184) + 60))(*(_DWORD *)(this + 184), 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 120))(this);
    if ( !*(_DWORD *)(this + 1968) )
    {
      v11 = *(_DWORD *)(this + 184);
      v12 = sub_10056540((float *)(this + 352));
      v13 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11);
      *(_DWORD *)(this + 1968) = sub_1010BA30(*v12, v12[1], v12[2], v13);
    }
    if ( (*(_DWORD *)(this + 1984) & 0x2000) != 0
      || *(_DWORD *)(this + 1968) != 3
      || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 348))(dword_1041315C) )
    {
      return 0;
    }
    if ( *(float *)(this + 1312) < 0.0 )
    {
      *(float *)(this + 1316) = *(float *)(dword_104362C4 + 44);
      *(float *)(this + 1312) = *(float *)(dword_104362C4 + 44) * 0.75;
    }
    sub_1000FCA0((_DWORD *)this, 17);
    sub_10035E20((unsigned __int16 *)this);
    sub_1008F150((float *)(this + 352));
    sub_1000E8A0((_DWORD *)this, 0);
    sub_10036170(this);
    sub_10039310(this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 408))(this, -1.0);
    return 1;
  }
  else
  {
    v9 = (const char *)sub_10034E90((_DWORD *)this);
    DevMsg(" C_PhysPropClientside::Initialize: VPhysicsInitNormal() failed for %s.\n", v9);
    return 0;
  }
}
