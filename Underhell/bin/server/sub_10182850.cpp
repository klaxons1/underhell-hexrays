void __thiscall sub_10182850(int this, void *a2, int a3, int a4, int a5)
{
  int v6; // [esp-8h] [ebp-10h]
  int v7; // [esp-4h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 800) || (unsigned __int8)sub_10260340(*(char **)(this + 800), (int)a2) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a2 + 320))(a2) )
    {
      v7 = *(_BYTE *)(this + 248) & 1;
      v6 = *(_DWORD *)(this + 804);
      if ( (*(_BYTE *)(this + 248) & 2) != 0 )
        sub_100D8F90(a2, v6, v7);
      else
        sub_100D8F60(a2, v6, v7);
    }
  }
}
