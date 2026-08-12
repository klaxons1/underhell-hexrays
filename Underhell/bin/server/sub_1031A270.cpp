void __thiscall sub_1031A270(int this, int a2, float a3)
{
  char **v4; // ecx
  char *v5; // eax
  const char *v6; // ebx
  _DWORD *v7; // edi
  const char *v8; // esi
  double v9; // st7
  long double v10; // st5
  float v11[3]; // [esp+20h] [ebp-24h] BYREF
  float v12[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v13[3]; // [esp+38h] [ebp-Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 4124) )
    return;
  v4 = (char **)(a2 + 8);
  *(float *)(this + 4124) = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v5 = *v4;
    if ( !*v4 )
    {
LABEL_4:
      v6 = 0;
      v5 = (char *)String;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = (char *)sub_1010D460((int)v4);
  }
  if ( !v5 || !*v5 )
    goto LABEL_4;
  v6 = v5;
LABEL_5:
  v7 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
  if ( v7 )
  {
    sub_100BD6D0((void *)this, *(_DWORD *)(this + 4200), (int)v13, 0, 0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    (*(void (__thiscall **)(_DWORD *, float *, int, _DWORD))(*v7 + 520))(v7, v11, this + 580, 0);
    v9 = v13[2] - v11[2];
    if ( v9 > 0.0 )
    {
      v10 = 1.0 / sqrt((v9 + v9) / *(float *)(dword_106B6F0C + 44));
      v12[0] = (v11[0] - v13[0]) * v10;
      v12[1] = (v11[1] - v13[1]) * v10;
      v12[2] = 0.0;
      if ( !LOBYTE(a3) || sub_10315590((_DWORD *)this, (int)v7, v13, v12) )
      {
        sub_10317730(this, v13, v12);
        if ( sub_10317800(this) )
        {
          a3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.1,
                 0.2)
             + *(float *)(dword_106B31C8 + 12)
             + 1.5;
          sub_1002ABA0((float *)(this + 1672), &a3);
        }
      }
    }
    else
    {
      if ( !v6 )
        v6 = String;
      Warning("Bomb target %s is above the chopper!\n", v6);
    }
  }
  else
  {
    if ( !v6 )
      v6 = String;
    v8 = *(const char **)(this + 92);
    if ( !v8 )
      v8 = String;
    Warning("%s: Could not find bomb drop target '%s'!\n", v8, v6);
  }
}
