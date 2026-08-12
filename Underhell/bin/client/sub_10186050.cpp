void __cdecl sub_10186050(int *a1)
{
  int v1; // esi
  const char *v2; // eax
  int v3; // edi
  int v4; // eax

  if ( !dword_10445528 )
    return;
  if ( *a1 >= 2 )
  {
    v2 = Locale;
    if ( *a1 > 1 )
      v2 = (const char *)a1[259];
    v1 = sub_10227CC0(v2);
  }
  else
  {
    v1 = (*(int (**)(void))(*(_DWORD *)dword_10445528 + 4))() + 1;
    if ( v1 > 2 )
    {
      v1 = 0;
LABEL_9:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10445528 + 32))(dword_10445528, v1);
      goto LABEL_10;
    }
  }
  if ( v1 != 3 )
    goto LABEL_9;
LABEL_10:
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10445528 + 28))(dword_10445528)
    || (v3 = sub_100422D0()) == 0
    || (v4 = sub_100422D0(), !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 500))(v4))
    && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 844))(v3) != 1 )
  {
    (**(void (__thiscall ***)(int, int))dword_10445528)(dword_10445528, v1);
  }
}
