void __thiscall sub_102AC0F0(float *this, _DWORD *a2, float a3, int a4, int a5)
{
  int v7; // esi
  double v8; // st7
  void (__thiscall *v9)(int, float *); // edx
  float v10[3]; // [esp+18h] [ebp-10h] BYREF
  float v11; // [esp+24h] [ebp-4h]
  float v12; // [esp+30h] [ebp+8h]

  if ( a2 )
  {
    v7 = a2[106];
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 8))(a2[106]) )
      {
        v12 = RandomFloat(-5000.0, 5000.0);
        v11 = RandomFloat(-5000.0, 5000.0);
        v8 = RandomFloat(10000.0, 15000.0);
        v9 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v7 + 236);
        v10[0] = v12;
        v10[1] = v11;
        v10[2] = v8;
        v9(v7, v10);
        sub_102ABAF0(&a3, &flt_106F1CB4, 1);
        sub_1023C380(a2, (int)"NPC_Antlion.MeleeAttackSingle_Muffled", 0.0, 0);
        sub_1023C380(a2, (int)"NPC_Antlion.TrappedMetal", 0.0, 0);
        this[262] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      1.75,
                      2.75)
                  + *(float *)(dword_106B31C8 + 12);
      }
    }
  }
}
