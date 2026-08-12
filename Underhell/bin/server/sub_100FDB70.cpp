int __usercall sub_100FDB70@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  double v4; // st5
  double v5; // st4
  double v6; // st7
  int v7; // edx
  const char *v8; // eax
  long double v9; // st7
  bool v10; // c3
  double v11; // st7
  int v12; // eax
  int result; // eax
  float v14; // [esp+8h] [ebp-14h]
  _BYTE v15[4]; // [esp+18h] [ebp-4h] BYREF

  if ( 0.0 == *(float *)(a1 + 820) )
    *(float *)(a1 + 820) = 1.0;
  v3 = *(_DWORD *)(a1 + 248);
  if ( (*(_DWORD *)(a1 + 248) & 0x80) != 0 )
  {
    v4 = 2.0;
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v4 = 1.25;
  }
  else
  {
    v4 = 0.80000001;
  }
  *(float *)(a1 + 816) = v4;
  if ( 0.0 == *(float *)(a1 + 812) )
    *(float *)(a1 + 812) = 1.0;
  if ( (v3 & 4) != 0 )
  {
    *(float *)(a1 + 800) = 0.0;
    *(float *)(a1 + 804) = 0.0;
    *(float *)(a1 + 808) = 1.0;
  }
  else if ( (v3 & 8) != 0 )
  {
    *(float *)(a1 + 800) = 1.0;
    *(float *)(a1 + 804) = 0.0;
    *(float *)(a1 + 808) = 0.0;
  }
  else
  {
    *(float *)(a1 + 800) = 0.0;
    *(float *)(a1 + 808) = 0.0;
    *(float *)(a1 + 804) = 1.0;
  }
  if ( (*(_DWORD *)(a1 + 248) & 2) != 0 )
  {
    v5 = *(float *)(a1 + 808);
    v6 = *(float *)(a1 + 804) * -1.0;
    *(float *)(a1 + 800) = *(float *)(a1 + 800) * -1.0;
    *(float *)(a1 + 804) = v6;
    *(float *)(a1 + 808) = -1.0 * v5;
  }
  sub_10112C00(6);
  if ( (*(_DWORD *)(a1 + 248) & 0x40) != 0 )
    sub_101129A0(*(unsigned __int16 *)(a1 + 356) | 4);
  else
    sub_101129A0(*(_WORD *)(a1 + 356) & 0xFFFB);
  sub_100E0970(a1, v7, 7, 0);
  v8 = *(const char **)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 28))(a1, v15, a2);
  if ( !v8 )
    v8 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v8);
  v9 = fabs(*(float *)(a1 + 828));
  *(_DWORD *)(a1 + 200) = sub_100FD2D0;
  *(float *)(a1 + 828) = v9;
  v10 = 0.0 == v9;
  v11 = 0.0;
  if ( v10 )
    *(float *)(a1 + 828) = 100.0;
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_100D5FD0, 0.0, 0);
    v14 = *(float *)(dword_106B31C8 + 12) + 0.2;
    sub_100EC4A0((int *)a1, v14, 0);
    v11 = 0.0;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 )
    *(_DWORD *)(a1 + 196) = sub_100FBF80;
  v12 = *(_DWORD *)a1;
  *(float *)(a1 + 108) = v11;
  (*(void (__thiscall **)(int))(v12 + 100))(a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
  *(float *)(a1 + 844) = *(float *)(a1 + 728);
  *(float *)(a1 + 848) = *(float *)(a1 + 732);
  *(float *)(a1 + 852) = *(float *)(a1 + 736);
  if ( *(_BYTE *)(a1 + 857) )
    sub_10112C00(1);
  result = *(_DWORD *)(a1 + 248) >> 10;
  if ( (*(_DWORD *)(a1 + 248) & 0x400) != 0 )
  {
    *(float *)(a1 + 860) = *(float *)(a1 + 716);
    *(float *)(a1 + 864) = *(float *)(a1 + 720);
    *(float *)(a1 + 868) = *(float *)(a1 + 724);
    *(float *)(a1 + 872) = *(float *)(a1 + 728);
    *(float *)(a1 + 876) = *(float *)(a1 + 732);
    *(float *)(a1 + 880) = *(float *)(a1 + 736);
  }
  return result;
}
