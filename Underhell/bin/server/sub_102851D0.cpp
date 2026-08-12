int __thiscall sub_102851D0(int this, int a2, char *String1)
{
  char *v3; // esi
  int v5; // eax
  int *v7; // ecx

  v3 = String1;
  if ( String1 && a2 && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
    String1 = (char *)sub_100BEF30(v5, v3);
    sub_10284580((_DWORD *)(this + 800), &String1);
    return sub_100F5850((unsigned __int16 *)this, a2);
  }
  else
  {
    if ( *(_DWORD *)(this + 800) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 800);
      }
      *(_DWORD *)(this + 800) = 0;
    }
    return sub_100F5850((unsigned __int16 *)this, a2);
  }
}
