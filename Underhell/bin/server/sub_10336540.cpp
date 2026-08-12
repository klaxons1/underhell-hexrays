char __thiscall sub_10336540(int this, float *a2, char a3)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // ecx
  int v11; // edi
  double v12; // st7
  double v13; // st6
  int (__thiscall *v14)(float *); // eax
  double v15; // st7
  int (__thiscall *v16)(float *); // eax
  const char *v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // ebx
  const char *v21; // esi
  _DWORD *v22; // eax
  int v23; // eax
  char *v24; // [esp-8h] [ebp-20h]
  int v25; // [esp-8h] [ebp-20h]
  float v26[2]; // [esp+8h] [ebp-10h] BYREF
  float v27; // [esp+10h] [ebp-8h]
  float v28; // [esp+14h] [ebp-4h]
  char v29; // [esp+23h] [ebp+Bh]
  int v30; // [esp+24h] [ebp+Ch]
  int v31; // [esp+24h] [ebp+Ch]
  int v32; // [esp+24h] [ebp+Ch]

  if ( !a2 )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1080))(this, 0);
    if ( v5 != 3 && v5 != 4 )
      return 0;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
    return 0;
  v29 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2);
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 288))(a2);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1088))(v8) )
      return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( ((_DWORD)a2[63] & 0x800) != 0 )
      sub_100DAE60((int)a2);
    v26[0] = a2[145] - *(float *)(this + 580);
    v26[1] = a2[146] - *(float *)(this + 584);
    v9 = a2[147] - *(float *)(this + 588);
    v27 = v9;
    if ( a3 || !sub_103341B0((float *)this) || (sub_100D7A40(v26), v9 < 120.0) )
    {
      if ( fabs(v27) < 72.0 )
      {
        v10 = *((_DWORD *)a2 + 55);
        if ( v10 > 0 )
        {
          if ( a3 )
          {
            v11 = *((_DWORD *)a2 + 54);
            v12 = (1.0 - (*(float *)(this + 5704) - *(float *)(dword_106B31C8 + 12)) / *(float *)(dword_106E5C2C + 44))
                * *(float *)(dword_106E5BE4 + 44);
            v13 = (double)(v11 - v10);
            if ( v13 < v12 )
              v12 = v13;
            if ( v12 >= *(float *)(dword_106E5D04 + 44) )
              return v11 > v10;
            return 0;
          }
          if ( v29 )
          {
            if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 5704) )
            {
              v14 = *(int (__thiscall **)(float *))(*(_DWORD *)a2 + 448);
              v28 = *(float *)(dword_106E5BE4 + 44);
              v30 = v14(a2);
              v15 = (double)v30 - v28;
LABEL_28:
              if ( *((_DWORD *)a2 + 55) <= (int)v15
                && (*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 1080))(this, a2) == 3 )
              {
                return 1;
              }
            }
          }
          else if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 5712) )
          {
            v16 = *(int (__thiscall **)(float *))(*(_DWORD *)a2 + 448);
            v28 = *(float *)(dword_106E5CBC + 44);
            v31 = v16(a2);
            v15 = (double)v31 * v28;
            goto LABEL_28;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(this + 248) & 0x80000) == 0
    || !v29
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 5716) )
  {
    return 0;
  }
  v17 = *(const char **)(this + 5720);
  if ( !v17 )
    v17 = String;
  v24 = (char *)v17;
  v18 = sub_102D9B20();
  v19 = sub_100B9D10(v18, v24);
  v20 = v19;
  if ( v19 == -1 )
  {
    v21 = *(const char **)(this + 5720);
    if ( !v21 )
      v21 = String;
    DevMsg("ERROR: Citizen attempting to give unknown ammo type (%s)\n", v21);
    return 0;
  }
  v25 = v19;
  v22 = sub_102D9B20();
  v32 = sub_100BA1B0(v22, v25);
  v23 = sub_100CF5D0(a2, v20);
  if ( v23 )
  {
    if ( v32 - v23 < *(_DWORD *)(this + 5724) )
      return 0;
  }
  return sub_100C9700(a2, v20) != 0;
}
