void __thiscall sub_10095FB0(int this)
{
  int v2; // ecx
  int v3; // edi
  unsigned __int8 (__stdcall *v4)(int); // edx
  double v5; // st7
  void (__thiscall *v6)(int, _DWORD, _DWORD); // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  double v10; // st7
  float v11; // [esp+10h] [ebp-34h]
  _DWORD v12[5]; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+38h] [ebp-Ch]
  int v15; // [esp+3Ch] [ebp-8h] BYREF
  float v16; // [esp+40h] [ebp-4h]

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  v3 = *(_DWORD *)(this + 220);
  if ( v3 < (*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2356))(this) )
    {
      v4 = *(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)dword_106B3CDC + 172);
      v16 = 1.0 / *(float *)(dword_106937B4 + 44) * (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 4416));
      if ( v4(3) )
      {
        v5 = v16 * 0.5;
      }
      else
      {
        v5 = v16;
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
          v5 = v5 * 1.5;
      }
      v6 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 260);
      *(float *)(this + 4416) = *(float *)(dword_106B31C8 + 12);
      v11 = v5;
      v6(this, LODWORD(v11), 0);
    }
  }
  else
  {
    *(float *)(this + 4416) = *(float *)(dword_106B31C8 + 12);
  }
  v7 = *(_DWORD *)(this + 2324);
  if ( (v7 == 1 || v7 == 2)
    && !sub_10023D10((_DWORD *)this, 64)
    && !*(_BYTE *)(this + 2680)
    && 0.0 != *(float *)(this + 4388)
    && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4388) )
  {
    v13 = 15;
    v12[4] = 0;
    LOBYTE(v12[0]) = 0;
    v14 = 0;
    v15 = -1;
    if ( sub_100928A0((_DWORD *)this, (int)v12) )
    {
      v8 = sub_1026A890(&v15);
      sub_100589F0((_DWORD *)this, v8);
      v9 = (_DWORD *)v12[0];
      if ( v13 < 0x10 )
        v9 = v12;
      sub_10092D30((void *)this, (int)v9, v14);
      v10 = RandomFloat(20.0, 30.0) + *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      v10 = RandomFloat(10.0, 20.0) + *(float *)(dword_106B31C8 + 12);
    }
    *(float *)(this + 4388) = v10;
    sub_10094DC0(v12);
  }
}
