void __thiscall sub_101827D0(int this, int *a2)
{
  void *v2; // edi
  int v4; // [esp-8h] [ebp-10h]
  int v5; // [esp-4h] [ebp-Ch]

  v2 = (void *)*a2;
  if ( *a2 && (!*(_DWORD *)(this + 800) || (unsigned __int8)sub_10260340(*(char **)(this + 800), *a2)) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v2 + 320))(v2) )
    {
      v5 = *(_BYTE *)(this + 248) & 1;
      v4 = *(_DWORD *)(this + 804);
      if ( (*(_BYTE *)(this + 248) & 2) != 0 )
        sub_100D8F90(v2, v4, v5);
      else
        sub_100D8F60(v2, v4, v5);
    }
  }
}
