char __thiscall sub_10035C90(_DWORD *this, float **a2)
{
  int v4; // ebx
  float *v5; // eax
  float *v6; // ecx
  float *v7; // eax
  double v8; // st6
  double v9; // st7
  float *v10; // esi
  float *v11; // eax
  float v12[3]; // [esp+8h] [ebp-18h] BYREF
  float v13[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(this[2] + 32))(this + 2) )
      return 0;
    v4 = (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1);
    if ( a2[25] )
      *a2[25] = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_10413178 + 80))(dword_10413178, v4);
    if ( a2[23] )
    {
      v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v6 = a2[23];
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v4) == 1 )
      {
        (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_10413178 + 24))(
          dword_10413178,
          v4,
          v12,
          v13);
        v7 = a2[23];
        v8 = (v13[1] + v12[1]) * 0.5;
        v9 = (v13[2] + v12[2]) * 0.5;
        *v7 = (v13[0] + v12[0]) * 0.5 + *v7;
        v7[1] = v8 + v7[1];
        v7[2] = v9 + v7[2];
      }
    }
    v10 = a2[24];
    if ( v10 )
    {
      v11 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 40))(this);
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
    }
  }
  return 1;
}
