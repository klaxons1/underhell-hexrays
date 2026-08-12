char __thiscall sub_100296C0(int this, int a2, int a3, int a4)
{
  int v4; // edi
  void (__thiscall *v5)(int); // edx
  int *v7; // esi
  int v9; // edi
  unsigned __int16 *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  _BYTE v14[512]; // [esp+Ch] [ebp-208h] BYREF
  int *v15; // [esp+20Ch] [ebp-8h]
  int v16; // [esp+210h] [ebp-4h]

  v4 = dword_1047CA8C;
  v5 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v16 = dword_1047CA8C;
  v5(dword_1047CA8C);
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v7 = *(int **)(this + 1940);
  v15 = v7;
  if ( v7 && *v7 )
  {
    v9 = *v7 + *(_DWORD *)(*v7 + 176) + 12 * *(_DWORD *)(this + 1204);
    if ( v9 && *(_DWORD *)(v9 + 4) && *(_BYTE *)(a2 + 64) )
    {
      v10 = (unsigned __int16 *)sub_100285F0((float *)this, *(float *)&v7);
      sub_1001E360(v10, v14, *(_DWORD *)(*v7 + 156));
      if ( sub_1001ED80(dword_10436258, (float *)a2, v15, v9, (int)v14, a3, a4) )
      {
        v11 = *v15;
        v12 = *(_DWORD *)(*v15 + 160) + 216 * *(_DWORD *)(*(_DWORD *)(v9 + 8) + 68 * *(_DWORD *)(a4 + 80) + v9);
        *(_DWORD *)(a4 + 60) = "**studio**";
        *(_WORD *)(a4 + 66) = 0x8000;
        *(_WORD *)(a4 + 64) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 12))(
                                dword_10436258,
                                v11 + v12 + *(_DWORD *)(v11 + v12 + 176));
        if ( sub_10025550(this) )
        {
          v13 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 1192) + 20))(
                  *(_DWORD *)(this + 1192),
                  *(__int16 *)(a4 + 72));
          if ( v13 )
          {
            sub_1000F430((_DWORD *)this, 0);
            sub_1000F430((_DWORD *)this, v13);
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
      return 1;
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
      return 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    return 0;
  }
}
