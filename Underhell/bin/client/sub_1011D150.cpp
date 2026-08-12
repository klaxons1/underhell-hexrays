char __usercall sub_1011D150@<al>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  char result; // al
  int v4; // esi
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // [esp+10h] [ebp-4h]

  result = sub_1011CD30(a1);
  if ( result )
  {
    v4 = dword_1047CA8C;
    v8 = dword_1047CA8C;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C, a2);
    v5 = 0;
    if ( (int)a1[70] > 0 )
    {
      do
      {
        v6 = a1[4];
        if ( !*(_DWORD *)(v6 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 36))(v6 + 4) )
          sub_10026520(v6);
        v7 = *(_DWORD **)(v6 + 1940);
        if ( !v7 || !*v7 )
          v7 = 0;
        sub_10025770((float *)v6, (int)v7, v5++, 0.0);
      }
      while ( v5 < a1[70] );
      v4 = v8;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1[4] + 4) + 40))(a1[4] + 4, 1);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  return result;
}
