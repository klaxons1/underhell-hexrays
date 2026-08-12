int __thiscall sub_10143030(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+18h] [ebp+8h]

  v16 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  if ( a2 != 7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 184))(dword_10413168);
  ++*(_DWORD *)(this[32] + 452);
  v3 = *(_DWORD *)(this[32] + 272);
  if ( (!v3 || *(_DWORD *)(*(_DWORD *)(v3 + 28) + 48)) && a2 != 7 )
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)off_103DCDDC + 56))(
      off_103DCDDC,
      *(_DWORD *)(this[37] + 12),
      *(_DWORD *)(this[37] + 16),
      *(_DWORD *)(this[37] + 20),
      *(_DWORD *)(this[32] + 452),
      a2);
  sub_10142E90((int)this, a2);
  if ( a2 != 7 )
  {
    v4 = this[36];
    v5 = (_DWORD *)(v4 + 589832);
    v6 = *(_DWORD *)(v4 + 688184);
    if ( v6 > 0 )
    {
      v17 = v6;
      do
      {
        v7 = *v5;
        v8 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 36))(*v5);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413168 + 180))(dword_10413168, v8, v7);
        v5 += 3;
        --v17;
      }
      while ( v17 );
    }
    v9 = this[36];
    v10 = (_DWORD *)(v9 + 393224);
    v11 = *(_DWORD *)(v9 + 688168);
    if ( v11 > 0 )
    {
      do
      {
        v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 36))(*v10);
        if ( v12 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v12) == 1 )
        {
          v13 = *v10;
          v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 36))(*v10);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413168 + 180))(dword_10413168, v14, v13);
        }
        v10 += 3;
        --v11;
      }
      while ( v11 );
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 188))(dword_10413168);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
}
