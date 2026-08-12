void __thiscall sub_1012E3B0(int this, int a2, int a3, int a4)
{
  int v5; // ecx
  double v6; // st7
  float v7; // [esp+4h] [ebp-10h]

  nullsub_1(a2, a3, a4);
  if ( a3 == 1 )
  {
    sub_100F5850((unsigned __int16 *)this, 0);
    ((void (__thiscall *)(int (__stdcall ***)(int, int), int))(*off_1061BE1C)[4])(off_1061BE1C, this);
    if ( *(_DWORD *)(this + 828) )
    {
      v5 = off_1061DFF0;
      v6 = *(float *)(this + 812);
      *(_DWORD *)(this + 828) = 0;
      v7 = v6 + *(float *)(dword_106B31C8 + 12);
      sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, v7, v5);
    }
  }
}
