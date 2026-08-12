void __thiscall sub_10382FE0(float *this, char **a2, int a3)
{
  float *v4; // edi
  float *v5; // eax
  int v6; // edi
  float v7[3]; // [esp+8h] [ebp-18h] BYREF
  float v8; // [esp+14h] [ebp-Ch]
  float v9; // [esp+18h] [ebp-8h]
  float v10; // [esp+1Ch] [ebp-4h]

  if ( !(*((unsigned __int8 (__thiscall **)(char **))*a2 + 66))(a2)
    || a2[23] != "func_breakable_surf" && !sub_100D6240(a2, "func_breakable_surf") )
  {
    v4 = (float *)(*((int (__thiscall **)(char **))*a2 + 144))(a2);
    v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v8 = *v5 - *v4;
    v9 = v5[1] - v4[1];
    v10 = v5[2] - v4[2];
    off_10689714();
    v6 = *((_DWORD *)this + 106);
    v8 = v8 * 200.0;
    v9 = 200.0 * v9;
    v10 = 0.0;
    if ( v6 )
    {
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v7[0] = v8 * 4.0;
      v7[1] = v9 * 4.0;
      v7[2] = 4.0 * v10;
      (*(void (__thiscall **)(int, float *, _DWORD *))(*(_DWORD *)v6 + 240))(v6, v7, (_DWORD *)this + 145);
    }
    this[906] = v8;
    this[907] = v9;
    this[908] = v10;
  }
}
