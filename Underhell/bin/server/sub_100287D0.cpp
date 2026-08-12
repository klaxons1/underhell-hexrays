int __thiscall sub_100287D0(void *this, int a2, int a3)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v4 = 0;
  v5 = 1;
  while ( (v5 & *(_DWORD *)(a3 + 4 * (v4 >> 5))) == 0 )
  {
LABEL_8:
    ++v4;
    v5 = __ROL4__(v5, 1);
    if ( v4 >= 256 )
      return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 92))(a2, String);
  }
  if ( v4 == -1 )
    v6 = -1;
  else
    v6 = v4 + 1000000000;
  v7 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1388))(this, v6);
  if ( v7 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 92))(a2, v7);
    goto LABEL_8;
  }
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 92))(a2, String);
}
