void __thiscall sub_101B0990(int this, int a2)
{
  double v3; // st7
  int v4; // ecx
  int (__thiscall *v5)(int); // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int); // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  int v16; // ecx
  int (__thiscall *v17)(int); // edx
  int v18; // eax
  double v19; // st7
  double v20; // st6
  float v21; // [esp+Ch] [ebp-1Ch]
  _BYTE v22[12]; // [esp+14h] [ebp-14h] BYREF
  float v23; // [esp+20h] [ebp-8h]
  int v24; // [esp+24h] [ebp-4h]
  float v25; // [esp+30h] [ebp+8h]

  if ( *(_DWORD *)(this + 800)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800))
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800)) )
  {
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v3 = *(float *)(a2 + 8);
    else
      v3 = 0.0;
    v4 = *(_DWORD *)(this + 800);
    v23 = v3;
    v5 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 20);
    v25 = 1.0;
    v6 = 0;
    v24 = 0;
    v7 = v5(v4);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7) )
    {
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
      v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 124))(v8, v22);
      sub_100D7A40(v9);
      v25 = 1.0;
      v10 = *(_DWORD *)(this + 800);
      v11 = *(int (__thiscall **)(int))(*(_DWORD *)v10 + 20);
      v6 = 1;
      v24 = 1;
      v12 = v11(v10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 96))(v12);
    }
    v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 40))(v13) )
    {
      v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
      v15 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 124))(v14, v22);
      sub_100D7A40(v15);
      v16 = *(_DWORD *)(this + 800);
      v17 = *(int (__thiscall **)(int))(*(_DWORD *)v16 + 24);
      v25 = v25 + 1.0;
      v24 = ++v6;
      v18 = v17(v16);
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 96))(v18);
    }
    if ( v6 <= 0 )
      v19 = v25;
    else
      v19 = v25 / (double)v24;
    if ( 0.0 == *(float *)(this + 1020) )
      v20 = 1.0;
    else
      v20 = *(float *)(this + 1020);
    v21 = v20 * (v19 * (v20 * v23)) * (1.0 / *(float *)(dword_106B31C8 + 28));
    (*(void (__thiscall **)(_DWORD, float, _DWORD))(**(_DWORD **)(this + 800) + 32))(
      *(_DWORD *)(this + 800),
      COERCE_FLOAT(LODWORD(v23)),
      LODWORD(v21));
  }
}
