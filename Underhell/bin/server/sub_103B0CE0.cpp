void __thiscall sub_103B0CE0(void *this, float *a2, float *a3)
{
  int v3; // edi
  int v4; // esi
  _DWORD *v5; // ebx
  int v6; // edi
  _DWORD *v7; // ebx
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  int v11; // [esp+14h] [ebp-4h]

  v10 = *(int *)a2;
  v3 = dword_10700AC8;
  v8 = dword_106EADA8;
  v4 = (int)this - 3620;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v4 + 1100) && sub_100D7240((void *)v4) )
    sub_100BD750((volatile signed __int32 *)v4);
  v5 = *(_DWORD **)(v4 + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_100BE7D0((_DWORD *)v4, (int)v5, v8, *(float *)&v10);
  v6 = dword_10700AC8;
  v11 = dword_106EADAC;
  v9 = *(int *)a3;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v4 + 1100) && sub_100D7240((void *)v4) )
    sub_100BD750((volatile signed __int32 *)v4);
  v7 = *(_DWORD **)(v4 + 1100);
  if ( !v7 || !*v7 )
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100BE7D0((_DWORD *)v4, (int)v7, v11, *(float *)&v9);
  *a2 = sub_100BE820(v4, dword_106EADA8);
  *a3 = sub_100BE820(v4, dword_106EADAC);
}
