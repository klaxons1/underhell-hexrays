char __thiscall sub_1002F850(_DWORD *this, int a2)
{
  bool v3; // zf
  int v4; // edx
  float *v6; // eax
  float *v7; // ecx
  int v8; // edi
  int v9; // eax
  float *v10; // eax
  double v11; // st6
  double v12; // st7
  float v13[3]; // [esp+Ch] [ebp-18h] BYREF
  float v14; // [esp+18h] [ebp-Ch] BYREF
  float v15; // [esp+1Ch] [ebp-8h] BYREF
  float v16; // [esp+20h] [ebp-4h]

  v15 = *(float *)&dword_10403940;
  v16 = *(float *)&dword_10403944;
  sub_100F9FF0(dword_104038F0, &v15);
  LOWORD(dword_10403940) = 1;
  dword_10403944 = 1;
  v3 = (unsigned __int8)sub_10035C90(a2) == 0;
  v4 = dword_104038F0 - 1;
  if ( v3 )
  {
    if ( v4 >= 0 )
    {
      dword_10403940 = *(_DWORD *)(dword_104038E4 + 8 * v4);
      dword_10403944 = *(_DWORD *)(dword_104038E4 + 8 * v4 + 4);
      --dword_104038F0;
    }
    return 0;
  }
  else
  {
    if ( v4 >= 0 )
    {
      dword_10403940 = *(_DWORD *)(dword_104038E4 + 8 * v4);
      dword_10403944 = *(_DWORD *)(dword_104038E4 + 8 * v4 + 4);
      --dword_104038F0;
    }
    if ( *(_DWORD *)(a2 + 92) && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 520))(this) && this[307] )
    {
      v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v7 = *(float **)(a2 + 92);
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v8 = *(_DWORD *)dword_10413178;
      v9 = (*(int (__thiscall **)(_DWORD *, float *, float *))(this[1] + 36))(this + 1, v13, &v14);
      (*(void (__thiscall **)(int, int))(v8 + 24))(dword_10413178, v9);
      v10 = *(float **)(a2 + 92);
      v11 = (v15 + v13[1]) * 0.5;
      v12 = (v16 + v13[2]) * 0.5;
      *v10 = (v13[0] + v14) * 0.5 + *v10;
      v10[1] = v11 + v10[1];
      v10[2] = v12 + v10[2];
    }
    return 1;
  }
}
