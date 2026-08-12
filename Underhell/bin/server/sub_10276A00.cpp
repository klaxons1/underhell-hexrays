void __thiscall sub_10276A00(int this)
{
  _DWORD *v2; // ebx
  bool v3; // zf
  void (__thiscall *v4)(_DWORD); // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  bool v10; // cc
  int v11; // eax
  int v12; // eax
  void (__thiscall *v13)(_DWORD); // eax
  double v14; // [esp+10h] [ebp-Ch] BYREF
  char v15; // [esp+1Bh] [ebp-1h]

  v2 = (_DWORD *)sub_100D1940((_DWORD *)this);
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
    return;
  v3 = *(_BYTE *)(this + 1127) == 0;
  v15 = 0;
  if ( !v3 || *(_BYTE *)(this + 1126) )
  {
    if ( *(_BYTE *)(this + 1144) )
      goto LABEL_8;
    v4 = *(void (__thiscall **)(_DWORD))(*(_DWORD *)this + 1036);
    v15 = 1;
    v4(this);
  }
  if ( !*(_BYTE *)(this + 1144) )
  {
    sub_100C1600(this, 1, 1);
    goto LABEL_20;
  }
LABEL_8:
  v5 = v2[823];
  v15 = 1;
  if ( (v5 & 1) != 0 && *(int *)(this + 1200) >= 1 )
  {
    *(_BYTE *)(this + 1144) = 0;
    *(_WORD *)(this + 1392) = 256;
  }
  else if ( (v5 & 0x800) != 0 && *(int *)(this + 1200) >= 2 )
  {
    *(_BYTE *)(this + 1144) = 0;
    *(_BYTE *)(this + 1392) = 0;
  }
  else if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1132) )
  {
    v6 = sub_100CF5D0(v2, *(_DWORD *)(this + 1192));
    v7 = *(_DWORD *)this;
    v8 = this;
    if ( v6 <= 0
      || (v9 = (*(int (__thiscall **)(int))(v7 + 1216))(this),
          v7 = *(_DWORD *)this,
          v8 = this,
          *(_DWORD *)(this + 1200) >= v9) )
    {
      (*(void (__thiscall **)(int))(v7 + 1056))(v8);
    }
    else
    {
      (*(void (__thiscall **)(int))(v7 + 1064))(this);
    }
    return;
  }
LABEL_20:
  if ( *(_BYTE *)(this + 1392) && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1132) )
  {
    sub_1027F4E0(this);
    return;
  }
  if ( (*(_BYTE *)(this + 1393) || (v2[823] & 1) != 0)
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1132) )
  {
    v10 = *(_DWORD *)(this + 1200) <= 0;
    *(_BYTE *)(this + 1393) = 0;
    if ( (!v10 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1272))(this))
      && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1272))(this)
       || sub_100CF5D0(v2, *(_DWORD *)(this + 1192))) )
    {
      if ( *((_BYTE *)v2 + 447) == 3 && !*(_BYTE *)(this + 1208) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 1132))(this, 0, 0.0);
        v14 = *(float *)(dword_106B31C8 + 12) + 0.2;
        sub_100D2DA0((float *)(this + 1132), &v14);
        return;
      }
      if ( !*(_BYTE *)(this + 1127) && !*(_BYTE *)(this + 1126) )
      {
        v11 = sub_100D1940((_DWORD *)this);
        v12 = sub_1001F4B0(v11);
        if ( v12 && (*(_BYTE *)(v12 + 3296) & 1) != 0 )
          sub_100D2D00((float *)(this + 1132), (float *)(dword_106B31C8 + 12));
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 1068))(this);
      }
    }
    else if ( sub_100CF5D0(v2, *(_DWORD *)(this + 1192)) )
    {
      sub_10409A70(this);
    }
    else
    {
      sub_102765E0((void *)this);
    }
  }
  if ( (v2[823] & 0x2000) != 0
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1272))(this)
    && !*(_BYTE *)(this + 1144) )
  {
    sub_10409A70(this);
  }
  else if ( !v15 )
  {
    v13 = *(void (__thiscall **)(_DWORD))(*(_DWORD *)this + 1036);
    *(_BYTE *)(this + 1146) = 0;
    v13(this);
  }
}
