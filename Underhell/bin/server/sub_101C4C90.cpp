int __usercall sub_101C4C90@<eax>(int a1@<ebx>, _DWORD *a2, int a3)
{
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  const char *v11; // eax
  const char *v13; // [esp-18h] [ebp-20h]
  int v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp-Ch] [ebp-14h]
  int v17; // [esp+14h] [ebp+Ch]

  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 && *(_DWORD *)a3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 1];
    v5 = *(_DWORD *)a3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 2] == v5 && *v4 && a2 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 2] == v5 )
        v6 = *v4;
      else
        v6 = 0;
      (*(void (__thiscall **)(_DWORD *, int))(*a2 + 384))(a2, v6);
    }
  }
  *(_DWORD *)(*(_DWORD *)(a3 + 8) + 12) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(*(_DWORD *)(a3 + 12) + 8) = *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(dword_106BA764 + 48) )
  {
    v7 = dword_106BA6C4;
    v17 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a2[6], a1);
    if ( *(_DWORD *)a3 == -1 || off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 2] != *(_DWORD *)a3 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 1];
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v8 + 24));
    if ( *(_DWORD *)a3 == -1 || off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 2] != *(_DWORD *)a3 >> 12 )
      v10 = 0;
    else
      v10 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)a3 & 0xFFF) + 1];
    v15 = dword_106BA690;
    v14 = v9;
    v13 = sub_100D6390(a2);
    v11 = sub_100D6390(v10);
    Msg("remove 0x%x: %s-%s (%d-%d) [%d in play, %d max]\n", a3, v11, v13, v14, v17, v15, v7);
  }
  if ( a3 == dword_106BA69C )
    dword_106BA69C = *(_DWORD *)(a3 + 8);
  --dword_106BA690;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 12) = 0;
  return sub_1042FBE0(a3);
}
