int __fastcall sub_10408330(int a1, int a2)
{
  int result; // eax

  sub_100E0970(a1, a2, 4, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, "models/weapons/w_missile.mdl");
  sub_1025F360((_DWORD *)a1, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  sub_10407920((_DWORD *)a1);
  *(float *)(a1 + 2148) = 0.025;
  *(_DWORD *)(a1 + 196) = sub_10406C70;
  *(_BYTE *)(a1 + 2128) = 1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC);
  if ( result == 2 )
    return sub_100EA940((int *)a1, 0x10000);
  return result;
}
