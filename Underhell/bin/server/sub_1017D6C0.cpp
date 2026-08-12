int __thiscall sub_1017D6C0(int this)
{
  int v2; // eax
  double v3; // st7
  double v4; // st6
  int (__thiscall *v5)(int, int); // eax
  int v6; // eax
  const char *v7; // ecx
  double v8; // st7
  float v10; // [esp+0h] [ebp-2Ch]
  int v11; // [esp+4h] [ebp-28h]
  _BYTE v12[8]; // [esp+Ch] [ebp-20h] BYREF
  float v13; // [esp+14h] [ebp-18h]
  int v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+24h] [ebp-8h]

  v2 = sub_10261B20();
  v3 = 0.0;
  if ( !v2 )
    goto LABEL_16;
  if ( *(float *)(this + 820) < 0.0 )
  {
    if ( *(_DWORD *)(v2 + 220) > *(_DWORD *)(this + 804) )
      goto LABEL_16;
    v4 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v2 + 220) < *(_DWORD *)(this + 812) )
  {
    if ( *(float *)(this + 816) <= 0.0
      || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 820) <= *(float *)(this + 816) )
    {
      goto LABEL_16;
    }
    v4 = -1.0;
LABEL_15:
    *(float *)(this + 820) = v4;
    goto LABEL_16;
  }
  v11 = *(_DWORD *)(this + 24);
  v5 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72);
  v13 = 0.0;
  v14 = -1;
  v15 = 0;
  v6 = v5(dword_106B31D0, v11);
  v7 = *(const char **)(this + 260);
  if ( !v7 )
    v7 = String;
  DevMsg(2, "logic_active_autosave (%s, %d) triggered\n", v7, v6);
  if ( 0.0 == *(float *)(this + 824) )
  {
    sub_1017B2A0((_BYTE *)this, (int)v12);
  }
  else
  {
    v13 = *(float *)(this + 824);
    v15 = 1;
    sub_1017C910(this, (int)v12);
  }
  *(float *)(this + 820) = -1.0;
  v3 = 0.0;
LABEL_16:
  if ( v3 <= *(float *)(this + 820) )
    v8 = 0.5;
  else
    v8 = 1.0;
  v10 = v8 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v10, 0);
}
