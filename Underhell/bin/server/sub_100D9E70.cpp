void __userpurge sub_100D9E70(int *a1@<ecx>, int a2@<esi>, _DWORD *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // esi
  int v15; // eax
  double v16; // st7
  void (__thiscall *v17)(int *, _DWORD *); // edx
  _DWORD v18[13]; // [esp+4h] [ebp-5Ch] BYREF
  float v19; // [esp+38h] [ebp-28h]
  int v20; // [esp+54h] [ebp-Ch] BYREF
  int v21; // [esp+58h] [ebp-8h]
  int v22; // [esp+5Ch] [ebp-4h]

  if ( dword_106B3CDC )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B3CDC + 76))(
            dword_106B3CDC,
            a3[16],
            a2) )
    {
      if ( a3[16] )
      {
        v4 = a3[2];
        v5 = a3[3];
        v20 = a3[1];
        v21 = v4;
        v22 = v5;
        if ( sub_10018CD0((float *)&v20, &flt_106F1CA8)
          || (v6 = a3[5], v7 = a3[6], v20 = a3[4], v21 = v6, v22 = v7, sub_10018CD0((float *)&v20, &flt_106F1CA8)) )
        {
          if ( ++dword_10697A0C < 10 )
          {
            v8 = a3[2];
            v9 = a3[3];
            v20 = a3[1];
            v21 = v8;
            v22 = v9;
            if ( sub_10018CD0((float *)&v20, &flt_106F1CA8) )
              DevWarning("CBaseEntity::TakeDamage:  with inputInfo.GetDamageForce() == vec3_origin\n");
            v10 = a3[5];
            v11 = a3[6];
            v20 = a3[4];
            v21 = v10;
            v22 = v11;
            if ( sub_10018CD0((float *)&v20, &flt_106F1CA8) )
              DevWarning("CBaseEntity::TakeDamage:  with inputInfo.GetDamagePosition() == vec3_origin\n");
          }
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 244))(a1)
      && (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)dword_106B3CDC + 256))(
           dword_106B3CDC,
           a1,
           a3) )
    {
      if ( (unsigned __int8)sub_101B4DB0() )
      {
        sub_101BB4F0(a1, a3);
      }
      else
      {
        sub_1001E4E0(v18, (int)a3);
        if ( sub_1001E870(v18) )
        {
          v12 = sub_1001E870(v18);
          v13 = ((double (__thiscall *)(int, int *))*(_DWORD *)(*(_DWORD *)v12 + 556))(v12, a1);
          v19 = v13 * v19;
        }
        v14 = *a1;
        v15 = sub_1001E870(v18);
        v16 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v14 + 560))(a1, v15);
        v17 = *(void (__thiscall **)(int *, _DWORD *))(*a1 + 256);
        v19 = v16 * v19;
        v17(a1, v18);
      }
    }
  }
}
