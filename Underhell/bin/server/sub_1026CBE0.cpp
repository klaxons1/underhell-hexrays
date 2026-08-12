int __thiscall sub_1026CBE0(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10[3]; // [esp+18h] [ebp-3Ch] BYREF
  int v11[3]; // [esp+24h] [ebp-30h] BYREF
  int v12[3]; // [esp+30h] [ebp-24h] BYREF
  int v13[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]
  int v16; // [esp+50h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 208))(*(_DWORD *)(this + 44));
  v3 = 0;
  v14 = result;
  if ( result )
  {
    result = sub_100BEF30(result, "vehicle_gunner_eyes");
    v15 = result;
    v16 = 0;
    if ( *(int *)(this + 96) > 0 )
    {
      do
      {
        v4 = v3 + *(_DWORD *)(this + 84);
        v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 44) + 208))(*(_DWORD *)(this + 44));
        if ( !v5
          || (v6 = sub_100BDF40(v5, (char *)(v4 + 2)), v6 < 0)
          || !sub_1026CAC0((_DWORD **)this, v6, v15, 1.0, (float *)(v4 + 132), (float *)(v4 + 144)) )
        {
          Warning(
            "Exit animation %s failed to cache target points properly!\n",
            (const char *)(*(_DWORD *)(this + 84) + v3 + 2));
        }
        if ( *(_DWORD *)(dword_106CEF4C + 48) )
        {
          v7 = *(_DWORD *)(this + 84);
          v8 = *(_DWORD *)(v7 + v3 + 132);
          v9 = (_DWORD *)(v3 + v7);
          v13[0] = v8;
          v13[1] = v9[34];
          v13[2] = v9[35];
          v12[0] = v9[36];
          v12[1] = v9[37];
          v12[2] = v9[38];
          sub_10262790(v14, (int)v13, (int)v12);
          *(float *)v11 = 8.0;
          *(float *)&v11[1] = 8.0;
          *(float *)&v11[2] = 8.0;
          *(float *)v10 = -8.0;
          *(float *)&v10[1] = -8.0;
          *(float *)&v10[2] = -8.0;
          sub_1011BB20((int)v13, (int)v10, (int)v11, 0, 255, 0, 0, 20.0);
          sub_1011CB60((float *)v13, (int)v12, 8.0, 1, 20.0);
        }
        result = v16 + 1;
        v3 += 156;
        v16 = result;
      }
      while ( result < *(_DWORD *)(this + 96) );
    }
  }
  return result;
}
