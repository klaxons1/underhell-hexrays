int __usercall sub_1010ABE0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax
  int v4; // edx
  double v5; // st7
  double v6; // st6
  const char *v7; // eax
  double v8; // st7
  double v9; // rt1
  double v10; // rt2
  int (__thiscall *v11)(int, int); // edx
  int v12; // eax
  int (__thiscall *v13)(int); // edx
  char Buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  char *Str; // [esp+404h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 980) )
  {
    sub_10429A00(Buffer, 0x400u, "Buttons.snd%d", *(_DWORD *)(a1 + 980));
    sub_10162BE0(&Str, Buffer);
    v3 = Str;
    *(_DWORD *)(a1 + 992) = Str;
    if ( !v3 )
      v3 = (char *)String;
    sub_1023B8B0(v3);
  }
  else
  {
    *(_DWORD *)(a1 + 992) = 0;
  }
  sub_10246A60(a1);
  if ( (*(_DWORD *)(a1 + 248) & 2) != 0 )
  {
    v5 = -1.0 * *(float *)(a1 + 848);
    v6 = *(float *)(a1 + 844) * -1.0;
    *(float *)(a1 + 840) = *(float *)(a1 + 840) * -1.0;
    *(float *)(a1 + 844) = v6;
    *(float *)(a1 + 848) = v5;
  }
  sub_100E0970(a1, v4, 7, 0);
  sub_10112C00(6);
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 252) |= 0x40000u;
    sub_101129A0(*(unsigned __int16 *)(a1 + 356) | 4);
  }
  v7 = *(const char **)(*(int (__thiscall **)(int, char **, int))(*(_DWORD *)a1 + 28))(a1, &Str, a2);
  if ( !v7 )
    v7 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v7);
  if ( 0.0 == *(float *)(a1 + 108) )
    *(float *)(a1 + 108) = 40.0;
  if ( *(float *)(a1 + 808) == 0.0 )
    *(float *)(a1 + 808) = 1.0;
  if ( *(int *)(a1 + 220) > 0 && *(_BYTE *)(a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 2;
  }
  *(_DWORD *)(a1 + 800) = 1;
  *(float *)(a1 + 852) = *(float *)(a1 + 728);
  *(float *)(a1 + 856) = *(float *)(a1 + 732);
  *(float *)(a1 + 860) = *(float *)(a1 + 736);
  v8 = *(float *)(a1 + 804);
  v9 = *(float *)(a1 + 844) * v8 + *(float *)(a1 + 732);
  v10 = v8 * *(float *)(a1 + 848) + *(float *)(a1 + 736);
  *(float *)(a1 + 864) = v8 * *(float *)(a1 + 840) + *(float *)(a1 + 728);
  *(float *)(a1 + 868) = v9;
  *(float *)(a1 + 872) = v10;
  v11 = (*(_DWORD *)(a1 + 248) & 0x100) != 0 ? sub_1010AA70 : 0;
  *(_BYTE *)(a1 + 928) = -1.0 == *(float *)(a1 + 808);
  v12 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 196) = v11;
  v13 = *(int (__thiscall **)(int))(v12 + 584);
  *(_BYTE *)(a1 + 929) = 1;
  *(_DWORD *)(a1 + 200) = sub_1010A910;
  return v13(a1);
}
