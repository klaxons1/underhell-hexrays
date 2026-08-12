char __thiscall sub_103343C0(int this, int a2, int a3, int a4)
{
  char result; // al
  int (*v6)(void); // eax
  float *v7; // edi
  float *v8; // eax
  float *v9; // eax
  _BYTE v10[12]; // [esp+4h] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]

  if ( a2 == dword_106EAA94 )
  {
    if ( *(float *)(this + 5700) >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      return 0;
    }
    else
    {
      result = 1;
      *(float *)(this + 5700) = *(float *)(dword_106B31C8 + 12) + 5.0;
    }
  }
  else if ( a2 == dword_106EAA98 )
  {
    v6 = *(int (**)(void))(*(_DWORD *)this + 576);
    *(float *)(this + 5700) = *(float *)(dword_106B31C8 + 12) + 120.0;
    v7 = (float *)v6();
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 576))(a4);
    v11 = *v8 - *v7;
    v12 = v8[1] - v7[1];
    v13 = v8[2] - v7[2];
    off_10689714();
    v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 908))(this, v10);
    if ( v9[1] * v12 + *v9 * v11 + v9[2] * v13 >= 0.0 )
      *(_DWORD *)(this + 5688) = dword_106E5B6C;
    else
      *(_DWORD *)(this + 5688) = dword_106E5B60;
    sub_10023CB0((char *)this, 82);
    return 1;
  }
  else if ( a2 == dword_106EAA9C )
  {
    *(_DWORD *)(this + 5688) = dword_106E5B70;
    sub_100457E0((_DWORD *)this, 98);
    return 1;
  }
  else if ( a2 == dword_106EAAA0 )
  {
    *(_DWORD *)(this + 5688) = dword_106E5B68;
    sub_100457E0((_DWORD *)this, 98);
    return 1;
  }
  else if ( a2 == dword_106EAAA4 )
  {
    sub_100457E0((_DWORD *)this, 3);
    return 1;
  }
  else if ( a2 == dword_106C1B60 )
  {
    if ( sub_10093C60((void *)this) )
      (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
        this,
        "TLK_PLYR_PHYSATK",
        0,
        0,
        0,
        0);
    return 1;
  }
  else
  {
    return sub_10394160(a2, a3, a4);
  }
  return result;
}
