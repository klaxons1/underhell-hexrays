void __thiscall sub_101B0B70(int this, int a2)
{
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st6
  float v13; // [esp+4h] [ebp-10h]
  float v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h]
  float v16; // [esp+1Ch] [ebp+8h]

  if ( *(_DWORD *)(this + 800)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800))
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800)) )
  {
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v3 = *(float *)(a2 + 8);
    else
      v3 = 0.0;
    v14 = v3;
    v16 = 1.0;
    v4 = 0;
    v15 = 0;
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5) )
    {
      v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
      v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
      v4 = 1;
      v15 = 1;
      v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
    }
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 40))(v8) )
    {
      v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
      v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v9 + 116))(v9) + v16;
      v15 = ++v4;
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 96))(v10);
    }
    if ( v4 <= 0 )
      v11 = v16;
    else
      v11 = v16 / (double)v15;
    if ( 0.0 == *(float *)(this + 880) )
      v12 = 1.0;
    else
      v12 = *(float *)(this + 880);
    v13 = v11 * (v12 * v14) * (1.0 / *(float *)(dword_106B31C8 + 28));
    (*(void (__thiscall **)(_DWORD, float, _DWORD))(**(_DWORD **)(this + 800) + 28))(
      *(_DWORD *)(this + 800),
      COERCE_FLOAT(LODWORD(v14)),
      LODWORD(v13));
  }
}
