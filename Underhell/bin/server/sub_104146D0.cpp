void __thiscall sub_104146D0(int this)
{
  int v2; // ecx
  int *v3; // ecx
  int v4; // ebx
  int *v5; // ecx
  float *v6; // eax
  float v7; // [esp+0h] [ebp-6Ch]
  _DWORD v8[20]; // [esp+14h] [ebp-58h] BYREF
  int v9; // [esp+64h] [ebp-8h]
  float v10; // [esp+68h] [ebp-4h]

  sub_10267690(this);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( !*(_BYTE *)(this + 1732) )
  {
    *(_BYTE *)(this + 1732) = 1;
    sub_10144FA0((_BYTE *)(this + 1124), 1);
    sub_10147220(this + 1124);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( *(_BYTE *)(this + 896) )
  {
    v9 = sub_100BDCE0(this, 1);
    if ( v9 > -1 )
    {
      v2 = *(_DWORD *)(this + 904);
      v10 = 0.0;
      if ( v2 != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v3 = *(int **)(this + 24);
          if ( v3 )
            sub_100194B0(v3, 904);
        }
        *(float *)(this + 904) = 0.0;
      }
      v4 = dword_106B31C8;
      if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v5 = *(int **)(this + 24);
          if ( v5 )
            sub_100194B0(v5, 124);
        }
        *(float *)(this + 124) = *(float *)(v4 + 12);
      }
      sub_100C3330(this, v9);
      sub_100C1A10(this);
    }
  }
  if ( (*(_DWORD *)(this + 236) & 0x800000) != 0 )
  {
    v7 = (float)*(int *)(this + 220);
    sub_10248110((int)v8, this, this, v7, 64, 0);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    *(float *)&v8[4] = *v6;
    *(float *)&v8[5] = v6[1];
    *(float *)&v8[6] = v6[2];
    *(float *)&v8[1] = 0.0;
    *(float *)&v8[2] = 0.0;
    *(float *)&v8[3] = 1.0;
    sub_100D9E70((int *)this, this, v8);
  }
}
