int __usercall sub_10278410@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int result; // eax
  int v4; // edi
  bool v5; // cc
  int v6; // ebx
  int v7; // ebp
  const char *v8; // edi
  int v10; // [esp+6Ch] [ebp-824h] BYREF
  int v11; // [esp+70h] [ebp-820h] BYREF
  int v12; // [esp+74h] [ebp-81Ch] BYREF
  int v13; // [esp+78h] [ebp-818h]
  int v14; // [esp+7Ch] [ebp-814h]
  int v15; // [esp+80h] [ebp-810h]
  int v16; // [esp+84h] [ebp-80Ch] BYREF
  int v17; // [esp+88h] [ebp-808h]
  int v18; // [esp+8Ch] [ebp-804h] BYREF
  int v19; // [esp+90h] [ebp-800h] BYREF
  _BYTE v20[2044]; // [esp+94h] [ebp-7FCh] BYREF

  result = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))a1);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 224) <= 0;
  v6 = result;
  v15 = result;
  v14 = 0;
  if ( !v5 )
  {
    v7 = 0;
    do
    {
      result = (*(int (__thiscall **)(int, int, int, int *, int *, int *, int *))(*(_DWORD *)a1 + 800))(
                 a1,
                 v4,
                 -1,
                 &v10,
                 &v12,
                 &v16,
                 &v11);
      if ( v10 < v6 )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
          dword_1047CA6C,
          0,
          0,
          0,
          255,
          a2);
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
          dword_1047CA6C,
          v11,
          v13,
          v17,
          v12);
        (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 76))(
          dword_1047CA6C,
          255,
          255,
          255,
          255);
        v8 = sub_10231190((unsigned __int16 *)(v7 + *(_DWORD *)(a1 + 212)));
        (*(void (__thiscall **)(int, const char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v8,
          v20,
          2048);
        (*(void (__thiscall **)(int, _DWORD, _BYTE *, int *, int *))(*(_DWORD *)dword_1047CA6C + 288))(
          dword_1047CA6C,
          *(_DWORD *)(a1 + 232),
          v20,
          &v19,
          &v18);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 232));
        if ( (*(_BYTE *)(*(_DWORD *)(a1 + 212) + v7 + 16) & 1) != 0 )
        {
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v11, (v12 + v13) / 2);
        }
        else
        {
          v14 = v17;
          if ( v17 >= v6 )
            v14 = v6;
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
            dword_1047CA6C,
            (v11 + v14) / 2 - v19 / 2,
            (v13 + v12) / 2 - v18 / 2);
        }
        v6 = v16;
        a2 = 0;
        result = (*(int (__thiscall **)(int, _BYTE *, unsigned int))(*(_DWORD *)dword_1047CA6C + 88))(
                   dword_1047CA6C,
                   v20,
                   strlen(v8));
        v4 = v14;
      }
      ++v4;
      v7 += 20;
      v5 = v4 < *(_DWORD *)(a1 + 224);
      v14 = v4;
    }
    while ( v5 );
  }
  return result;
}
