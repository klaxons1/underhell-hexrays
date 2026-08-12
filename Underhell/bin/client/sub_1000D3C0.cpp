char __userpurge sub_1000D3C0@<al>(float *a1@<ecx>, double a2@<st0>, float a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  void (__thiscall *v9)(float *, int); // eax
  int v10; // eax
  int v11; // ebx
  double v12; // st7
  float v14; // [esp+4h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp+8h]

  v4 = *((_DWORD *)a1 + 490);
  if ( v4 == -1 )
    return 0;
  v5 = (_DWORD *)((char *)off_103DCD74 + 16 * ((_DWORD)a1[490] & 0xFFF) + 4);
  if ( v5[1] != v4 >> 12 )
    return 0;
  v6 = *v5;
  if ( !*v5
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 512))(*v5)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v6 + 3451) && sub_10045780(1) && *(_DWORD *)(sub_10045780(1) + 1808) != 2 )
  {
    v7 = sub_10045780(1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 744))(v7, 3);
    v8 = (_DWORD *)sub_10045780(1);
    sub_1000B7D0(v8);
    a2 = a2 + *((float *)off_103DC81C + 3) + 2.0;
    v14 = a2;
    sub_10011260(v14, (int)"FlashLightContext");
  }
  v9 = *(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 852);
  if ( LOBYTE(a3) )
  {
    v9(a1, 212);
    v10 = sub_10029CA0("Silencer");
    sub_10029C40(v10, 1);
  }
  else
  {
    v9(a1, 213);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 980))(v6, 7);
  v11 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  sub_1000B7D0(a1);
  v12 = a2 + *((float *)off_103DC81C + 3);
  v15 = v12;
  *(float *)(v6 + 3016) = v12;
  if ( *((_DWORD *)a1 + 494) != LODWORD(v15) )
    a1[494] = v12;
  if ( *((_DWORD *)a1 + 493) != *((_DWORD *)a1 + 494) )
    a1[493] = a1[494];
  *((_BYTE *)a1 + 1985) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  return 1;
}
