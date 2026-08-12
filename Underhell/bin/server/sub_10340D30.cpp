int __thiscall sub_10340D30(_DWORD *this, int a2)
{
  float *v3; // eax
  int v4; // eax
  float *v5; // edi
  int *v6; // ebx
  int v7; // edx
  int i; // edi
  int v9; // ecx
  float v11[3]; // [esp+48h] [ebp-30h] BYREF
  int v12[3]; // [esp+54h] [ebp-24h] BYREF
  int v13[3]; // [esp+60h] [ebp-18h] BYREF
  int v14[2]; // [esp+6Ch] [ebp-Ch] BYREF
  float v15; // [esp+74h] [ebp-4h]

  if ( this[593] == 18 && this[1239] != 7 )
  {
    sub_100BF1B0(this, "lefthand", (int)v13, 0, 0, 0);
    v3 = sub_1014AE30(v11, 0.0, 360.0);
    v4 = sub_10021920(
           this,
           (int)"weapon_frag",
           v13[0],
           v13[1],
           v13[2],
           *(_DWORD *)v3,
           *((_DWORD *)v3 + 1),
           *((_DWORD *)v3 + 2));
    v5 = (float *)v4;
    if ( v4 )
    {
      v6 = *(int **)(v4 + 424);
      if ( v6 )
      {
        *(float *)v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                          dword_106B31E4,
                          -100.0,
                          100.0);
        *(float *)&v14[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              -100.0,
                              100.0);
        v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                800.0,
                1200.0);
        sub_1001F010((float *)v12, -300.0, 300.0);
        v7 = *v6;
        v15 = 0.0;
        (*(void (__thiscall **)(int *, int *, int *))(v7 + 208))(v6, v14, v12);
      }
      if ( (unsigned __int8)sub_103FA550() )
        sub_100C3210(
          v5,
          0,
          *(float *)(dword_106B31C8 + 12),
          0,
          0,
          SLODWORD(flt_106F1CA8),
          SLODWORD(flt_106F1CAC),
          SLODWORD(flt_106F1CB0),
          0);
    }
  }
  for ( i = 0; i < this[910]; ++i )
  {
    v9 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 80))(v9, a2);
  }
  return sub_10035690((int)this, a2, i, a2);
}
