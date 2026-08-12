void __thiscall sub_100F6E10(int this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx

  ++*(_DWORD *)(this + 180);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
  v7 = v6;
  if ( v5 && v6 )
  {
    if ( !*(_BYTE *)(this + 184) )
    {
      sub_100F7C50(v5, v6);
      sub_100F7C50(v7, v5);
      --*(_DWORD *)(this + 180);
      return;
    }
    sub_100F6D00((int *)this, v5, v6, 1, &flt_10459240, &flt_10459240);
  }
  --*(_DWORD *)(this + 180);
}
