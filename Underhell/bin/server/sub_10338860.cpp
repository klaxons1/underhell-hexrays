void __usercall sub_10338860(float *a1@<ecx>, int a2@<esi>)
{
  float *v3; // esi
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  unsigned __int8 (__thiscall *v9)(float *); // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // rt1
  double v14; // st5
  double v15; // st7
  double v16; // st6
  int v17; // eax
  const char *v18; // eax
  int *v19; // eax
  int v20; // eax
  const char *v21; // eax
  float v22; // [esp+4h] [ebp-34h]
  char *v23; // [esp+4h] [ebp-34h]
  int v25[8]; // [esp+10h] [ebp-28h] BYREF
  int v26; // [esp+30h] [ebp-8h] BYREF
  float v27; // [esp+34h] [ebp-4h]

  if ( sub_103364E0(a1) )
  {
    if ( *((_DWORD *)a1 + 605) == -1 || off_1061BE18[4 * ((_DWORD)a1[605] & 0xFFF) + 2] != *((_DWORD *)a1 + 605) >> 12 )
      v3 = 0;
    else
      v3 = (float *)off_1061BE18[4 * ((_DWORD)a1[605] & 0xFFF) + 1];
    if ( ((_DWORD)a1[63] & 0x800) != 0 )
      sub_100DAE60((int)a1);
    if ( ((_DWORD)v3[63] & 0x800) != 0 )
      sub_100DAE60((int)v3);
    v4 = v3[146] - a1[146];
    v5 = v4 * v4;
    v6 = v3[145] - a1[145];
    v7 = v5;
    v8 = v3[147] - a1[147];
    v22 = v6 * v6 + v7 + v8 * v8;
    if ( off_10689708(v22) <= 240.0 )
    {
      v9 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1532);
      a1[1446] = *(float *)(dword_106E5EB4 + 44) + *(float *)(dword_106B31C8 + 12);
      if ( v9(a1) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v3 + 320))(v3) )
        {
          v26 = 0;
          sub_10172570((_DWORD *)v3 + 547, &v26);
          v10 = a1[1426];
          v11 = *(float *)(dword_106E5C2C + 44);
          v12 = *(float *)(dword_106E5BE4 + 44);
          a1[1426] = *(float *)(dword_106B31C8 + 12) + v11;
        }
        else
        {
          v10 = a1[1428];
          v11 = *(float *)(dword_106E5D94 + 44);
          v12 = *(float *)(dword_106E5D4C + 44);
          a1[1428] = *(float *)(dword_106B31C8 + 12) + v11;
        }
        v13 = v12;
        v14 = v10;
        v15 = v13;
        v16 = (1.0 - (v14 - *(float *)(dword_106B31C8 + 12)) / v11) * v13;
        v27 = v16;
        if ( v16 <= v13 )
        {
          v26 = (int)v27;
          v15 = (double)v26;
        }
        v27 = v15;
        if ( v15 > 0.0 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)v3 + 320))(v3, a2)
            && *(_DWORD *)(dword_106E60F4 + 48) )
          {
            sub_10165630(v25, (int)v3, (int)"HealthKit.Touch");
            v17 = sub_1001F3C0(v3);
            sub_1023C580((int)a1, (int)v3, v25, v17, (int)"HealthKit.Touch", 0, 0.0, 0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
          }
          (*(void (__thiscall **)(float *, float))(*(_DWORD *)v3 + 260))(v3, COERCE_FLOAT(LODWORD(v27)));
          sub_100D7330(v3);
        }
      }
      if ( ((_DWORD)a1[62] & 0x80000) != 0 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v3 + 320))(v3) )
      {
        v18 = (const char *)*((_DWORD *)a1 + 1430);
        if ( !v18 )
          v18 = String;
        v23 = (char *)v18;
        v19 = sub_102D9B20();
        v20 = sub_100B9D10(v19, v23);
        if ( v20 == -1 )
        {
          v21 = (const char *)*((_DWORD *)a1 + 1430);
          if ( !v21 )
            v21 = String;
          DevMsg("ERROR: Citizen attempting to give unknown ammo type (%s)\n", v21);
        }
        else
        {
          (*(void (__thiscall **)(float *, _DWORD, int, _DWORD, const char *))(*(_DWORD *)v3 + 928))(
            v3,
            *((_DWORD *)a1 + 1431),
            v20,
            0,
            "BaseCombatCharacter.AmmoPickup");
        }
        a1[1429] = *(float *)(dword_106E5C74 + 44) + *(float *)(dword_106B31C8 + 12);
      }
    }
  }
}
