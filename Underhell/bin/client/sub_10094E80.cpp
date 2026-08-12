char __thiscall sub_10094E80(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v7; // ebx
  float *v8; // edi
  int v9; // eax
  int v10; // edi
  int i; // esi
  _BYTE v13[12]; // [esp+4h] [ebp-30h] BYREF
  float v14; // [esp+10h] [ebp-24h]
  float v15; // [esp+20h] [ebp-14h]
  float v16; // [esp+30h] [ebp-4h]

  if ( !this[9] )
    return 0;
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
  v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
  sub_101EE440(v7);
  v14 = *v8;
  v9 = this[9];
  v15 = v8[1];
  v16 = v8[2];
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 112))(dword_10413178, v9);
  for ( i = 0; i < *(_DWORD *)(v10 + 156); a2 += 48 )
  {
    sub_101ED9E0(v13, a2);
    ++i;
  }
  return 1;
}
