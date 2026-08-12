int __thiscall sub_10368380(int this, int a2)
{
  int v2; // edi
  int *v4; // ecx
  void (__noreturn ***v5)(); // eax
  int *v6; // ecx
  bool v7; // zf
  void (__noreturn ***v8)(); // eax
  void (__noreturn ***v9)(); // eax
  void (__noreturn ***v11)(); // eax
  int v12; // eax
  void (__noreturn ***v13)(); // eax
  float v14; // [esp+2Ch] [ebp-4h]
  float v15; // [esp+2Ch] [ebp-4h]

  v2 = a2;
  if ( a2 == dword_106E7F24 )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.Frenzy", 0.0, 0);
    v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.89999998,
            1.1);
    if ( *(_DWORD *)(this + 864) != LODWORD(v14) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 864);
      }
      *(float *)(this + 864) = v14;
    }
  }
  if ( a2 == 30 )
  {
    *(_BYTE *)(this + 3989) = 1;
    *(_BYTE *)(this + 3991) = 0;
    v5 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, void *, int))(*v5)[17])(
      v5,
      *(_DWORD *)(this + 4016),
      0,
      &unk_1067334C,
      2);
  }
  else
  {
    if ( *(_DWORD *)(this + 2372) == 30 )
    {
      *(_BYTE *)(this + 3989) = 0;
      *(_BYTE *)(this + 3991) = 0;
    }
    if ( a2 == 33 )
    {
      v15 = *(float *)(dword_106B31C8 + 12) + 1.0;
      if ( *(_DWORD *)(this + 1672) != LODWORD(v15) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(this + 24);
          if ( v6 )
            sub_100194B0(v6, 1672);
        }
        *(float *)(this + 1672) = v15;
      }
      v2 = a2;
    }
    else if ( a2 == 28 )
    {
      *(_BYTE *)(this + 3989) = 1;
      *(_BYTE *)(this + 3991) = 0;
      v11 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, void *, int))(*v11)[17])(
        v11,
        *(_DWORD *)(this + 4016),
        0,
        &unk_1067334C,
        2);
      goto LABEL_29;
    }
  }
  if ( *(_DWORD *)(this + 2372) == 28 )
  {
    v7 = *(_DWORD *)(this + 3772) == 0;
    *(_BYTE *)(this + 3989) = 0;
    *(_BYTE *)(this + 3991) = 0;
    if ( !v7 )
    {
      v8 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[11])(
        v8,
        *(_DWORD *)(this + 3772),
        70.0,
        0.30000001);
    }
  }
  if ( v2 == 34 )
  {
    if ( *(_DWORD *)(this + 3772) )
    {
      v9 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v9)[12])(
        v9,
        *(_DWORD *)(this + 3772),
        0.0,
        0.2);
    }
    *(_DWORD *)(this + 196) = sub_10366AA0;
    return sub_100209B0((void *)this, 34);
  }
LABEL_29:
  v12 = *(_DWORD *)(this + 2372);
  if ( v12 == 36 || v12 == 34 && v2 != 36 )
  {
    if ( *(_DWORD *)(this + 3772) )
    {
      v13 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v13)[12])(
        v13,
        *(_DWORD *)(this + 3772),
        1.0,
        0.2);
    }
    *(_DWORD *)(this + 196) = 0;
  }
  return sub_100209B0((void *)this, v2);
}
