char *__cdecl sub_10208BF0(int a1, float *a2, float *a3, int a4, char a5, const char *a6)
{
  int v6; // edi
  unsigned __int16 v7; // ax
  int v8; // ebx
  int v10; // esi
  float v11; // edx
  float v12; // eax
  float v13; // edx
  float v14; // eax
  double v15; // st4
  double v16; // st5
  int v17; // eax
  char *v18; // esi
  double ArgList_4; // [esp+14h] [ebp-294h]
  double ArgList_4a; // [esp+14h] [ebp-294h]
  float v21; // [esp+28h] [ebp-280h]
  char Buffer[512]; // [esp+38h] [ebp-270h] BYREF
  _BYTE v23[12]; // [esp+238h] [ebp-70h] BYREF
  float v24; // [esp+244h] [ebp-64h]
  float v25; // [esp+248h] [ebp-60h]
  float v26; // [esp+24Ch] [ebp-5Ch]
  float v27; // [esp+250h] [ebp-58h]
  float v28; // [esp+254h] [ebp-54h]
  float v29; // [esp+258h] [ebp-50h]
  float v30; // [esp+264h] [ebp-44h]
  char v31; // [esp+26Eh] [ebp-3Ah]
  float v32[3]; // [esp+28Ch] [ebp-1Ch] BYREF
  float v33[3]; // [esp+298h] [ebp-10h] BYREF
  int v34; // [esp+2A4h] [ebp-4h]
  int savedregs; // [esp+2A8h] [ebp+0h] BYREF

  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700AC8 + 24))(dword_10700AC8, a1);
  v8 = v7;
  if ( v7 == 0xFFFF )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    return 0;
  }
  else
  {
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10700AC8 + 40))(dword_10700AC8, v7);
    if ( !v10 || a5 && !(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700AC8 + 48))(dword_10700AC8, v8) )
      goto LABEL_9;
    v11 = *(float *)(v10 + 108);
    v12 = *(float *)(v10 + 112);
    v33[0] = *(float *)(v10 + 104);
    v32[0] = *(float *)(v10 + 116);
    v33[1] = v11;
    v13 = *(float *)(v10 + 120);
    v33[2] = v12;
    v14 = *(float *)(v10 + 124);
    v32[1] = v13;
    v32[2] = v14;
    sub_100231A0((int)&savedregs, (int)a3, a2, a3, v33, v32, 33701899, a4, 0, (int)v23);
    if ( 1.0 == v30 )
    {
      v15 = a3[1] - a2[1];
      v16 = a3[2] - a2[2];
      v21 = v16 * v16 + v15 * v15 + (*a3 - *a2) * (*a3 - *a2);
      if ( off_10689708(v21) > 0.01 )
        goto LABEL_9;
    }
    if ( v31 )
    {
LABEL_9:
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
      return 0;
    }
    else
    {
      v24 = v27 + v24;
      v25 = v28 + v25;
      v26 = v29 + v26;
      LOBYTE(v34) = sub_100E8650();
      sub_100E8660(1);
      v17 = sub_101811E0(a6, -1);
      v18 = (char *)__RTDynamicCast(
                      v17,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CPhysicsProp `RTTI Type Descriptor',
                      0);
      if ( v18 )
      {
        ArgList_4 = v24;
        sub_10429A00(Buffer, 0x200u, "%.10f %.10f %.10f", SLOBYTE(ArgList_4));
        (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v18 + 128))(v18, "origin", Buffer);
        ArgList_4a = 0.0;
        sub_10429A00(Buffer, 0x200u, "%.10f %.10f %.10f", SLOBYTE(ArgList_4a));
        (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v18 + 128))(v18, "angles", Buffer);
        (*(void (__thiscall **)(char *, const char *, int))(*(_DWORD *)v18 + 128))(v18, "model", a1);
        (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v18 + 128))(v18, "fademindist", "-1");
        (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v18 + 128))(v18, "fademaxdist", "0");
        (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v18 + 128))(v18, "fadescale", "1");
        (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v18 + 128))(v18, "inertiaScale", "1.0");
        (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v18 + 128))(
          v18,
          "physdamagescale",
          "0.1");
        (*(void (__thiscall **)(char *))(*(_DWORD *)v18 + 100))(v18);
        sub_10260750(v18);
        (*(void (__thiscall **)(char *))(*(_DWORD *)v18 + 136))(v18);
      }
      sub_100E8660(v34);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
      return v18;
    }
  }
}
