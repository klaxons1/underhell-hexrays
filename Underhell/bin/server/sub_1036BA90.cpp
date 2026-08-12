char __thiscall sub_1036BA90(int this, int a2, int a3, float *a4)
{
  float v6; // edi
  int v7; // eax
  _DWORD *v8; // edi
  float *v9; // eax
  float v10; // [esp+0h] [ebp-7Ch]
  float v11; // [esp+0h] [ebp-7Ch]
  int v12[20]; // [esp+14h] [ebp-68h] BYREF
  float v13[3]; // [esp+64h] [ebp-18h] BYREF
  int v14[3]; // [esp+70h] [ebp-Ch] BYREF

  if ( a2 == dword_106E50A8 )
    return 0;
  if ( a2 == dword_106EBECC )
  {
    if ( *(_DWORD *)(this + 2336) != 6 )
      *(_DWORD *)(this + 2336) = 6;
    return 1;
  }
  if ( a2 == dword_106EBED0 )
  {
    if ( *(_DWORD *)(this + 2336) == 3 )
      return 1;
    *(_DWORD *)(this + 2336) = 3;
    return 1;
  }
  else if ( a2 == dword_106EBED4 )
  {
    v6 = *(float *)this;
    v10 = (float)*(int *)(this + 220);
    *(_DWORD *)(this + 3624) = 3;
    v7 = sub_10248110((int)v12, (int)a4, (int)a4, v10, 8193, 0);
    (*(void (__thiscall **)(int, int))(LODWORD(v6) + 256))(this, v7);
    v8 = (_DWORD *)sub_101811E0("npc_headcrab", -1);
    (*(void (__thiscall **)(_DWORD *))(*v8 + 96))(v8);
    sub_100E10C0((int)v8, (float *)(this + 716));
    sub_100E11A0((int)v8, (float *)(this + 728));
    v8[581] = 7;
    return 1;
  }
  else if ( a2 == dword_106EBED8 )
  {
    if ( *(_DWORD *)(this + 2336) != 6 )
      *(_DWORD *)(this + 2336) = 6;
    if ( sub_1036AE90(this) )
    {
      v13[0] = 0.0;
      v13[1] = 0.0;
      v13[2] = 1.0;
      sub_1036ADB0((float *)this, v13);
    }
    *(float *)v14 = *(float *)(this + 716) - a4[179];
    *(float *)&v14[1] = *(float *)(this + 720) - a4[180];
    *(float *)&v14[2] = *(float *)(this + 724) - a4[181];
    off_10689714();
    v11 = (float)(*(_DWORD *)(this + 220) + 1);
    sub_10248110((int)v12, (int)a4, (int)a4, v11, 128, 0);
    v9 = (float *)sub_10019640((_DWORD *)this);
    sub_10248690((float *)v12, (float *)v14, v9, 1.0);
    sub_100D9E70((int *)this, this, v12);
    return 1;
  }
  else
  {
    return sub_10038420((int *)this, a2, a3, (int)a4);
  }
}
