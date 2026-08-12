int __fastcall sub_100F8250(_BYTE *a1, int a2)
{
  int *v3; // ecx
  int v4; // ebx
  int *v5; // ecx
  int *v6; // ecx
  int v7; // edi
  int v8; // eax
  int (*v9)(void); // edx
  int v10; // eax
  int v12; // [esp-4h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-4h]

  sub_100E0970((int)a1, a2, 2, 0);
  sub_10112C00(2);
  sub_101129A0(*((unsigned __int16 *)a1 + 178) | 0x10);
  if ( *((_DWORD *)a1 + 139) != COERCE_INT(1.0) )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 696))(a1, a1 + 556);
    *((float *)a1 + 139) = 1.0;
  }
  if ( a1[3244] )
  {
    (**((void (__thiscall ***)(int, int))a1 + 810))((int)(a1 + 3240), (int)(a1 + 3244));
    a1[3244] = 0;
  }
  if ( a1[224] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    a1[224] = 0;
  }
  if ( *((_DWORD *)a1 + 55) != 100 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *((_DWORD *)a1 + 55) = 100;
  }
  if ( a1[225] != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    a1[225] = 2;
  }
  if ( a1[2328] != 1 )
  {
    (**((void (__thiscall ***)(int, int))a1 + 548))((int)(a1 + 2192), (int)(a1 + 2328));
    a1[2328] = 1;
  }
  v13 = *(float *)(dword_106B741C + 44);
  if ( *((_DWORD *)a1 + 583) != LODWORD(v13) )
  {
    (**((void (__thiscall ***)(int, int))a1 + 548))((int)(a1 + 2192), (int)(a1 + 2332));
    *((float *)a1 + 583) = v13;
  }
  if ( a1[2336] != 1 )
  {
    (**((void (__thiscall ***)(int, int))a1 + 548))((int)(a1 + 2192), (int)(a1 + 2336));
    a1[2336] = 1;
  }
  if ( a1[112] )
  {
    if ( a1[84] )
    {
      a1[88] |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)a1 + 6);
      if ( v3 )
        sub_100194B0(v3, 112);
    }
    a1[112] = 0;
  }
  v4 = dword_106B31C8;
  if ( *((_DWORD *)a1 + 418) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( a1[84] )
    {
      a1[88] |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)a1 + 6);
      if ( v5 )
        sub_100194B0(v5, 1672);
    }
    *((float *)a1 + 418) = *(float *)(v4 + 12);
  }
  if ( *((_DWORD *)a1 + 1033) != COERCE_INT(0.0) )
  {
    if ( a1[84] )
    {
      a1[88] |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)a1 + 6);
      if ( v6 )
        sub_100194B0(v6, 4132);
    }
    *((float *)a1 + 1033) = 0.0;
  }
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v8 = sub_100BDCE0((int)a1, 1);
  sub_100C1170((int)a1, v8);
  v9 = *(int (**)(void))(*(_DWORD *)dword_106B3CDC + 120);
  if ( (a1[256] & 2) != 0 )
  {
    v12 = v9() + 48;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 36;
  }
  else
  {
    v12 = v9() + 24;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 12;
  }
  sub_100D5D10(v10, v12);
  if ( *((_DWORD *)a1 + 573) != COERCE_INT(0.0) )
  {
    (**((void (__thiscall ***)(int, int))a1 + 548))((int)(a1 + 2192), (int)(a1 + 2292));
    *((float *)a1 + 573) = 0.0;
  }
  sub_100CF450(a1, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
}
