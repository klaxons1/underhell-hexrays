void __thiscall sub_101BC050(int this, int a2, int a3, char a4)
{
  int v4; // esi
  int v6; // ebx
  unsigned __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+8h] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 )
  {
    v6 = a3;
    if ( a3 )
    {
      if ( (!*(_DWORD *)(a2 + 24)
         || (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24)))
        && (!*(_DWORD *)(v6 + 24)
         || (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24))) )
      {
        v16 = v4;
        v7 = sub_101B8290((_WORD *)this, (int)&v16);
        if ( v7 == 0xFFFF )
        {
          v8 = sub_101BA920((int *)(this + 28), *(_DWORD *)(this + 40));
          v9 = *(_DWORD *)(this + 28);
          v17 = v8;
          *(_BYTE *)(v9 + 24 * v8 + 21) = a4;
          v7 = sub_101BBCD0(this, &a2, &v17);
        }
        v10 = (int *)(*(_DWORD *)(this + 28) + 24 * *(_DWORD *)(*(_DWORD *)(this + 4) + 16 * v7 + 12));
        if ( sub_100DB650(v10, &a3) < 0 )
        {
          v11 = v10[3];
          v12 = v10[1];
          if ( v11 + 1 > v12 )
            sub_102ABFC0(v11 - v12 + 1);
          ++v10[3];
          v13 = *v10;
          v14 = v10[3] - v11 - 1;
          v10[4] = *v10;
          if ( v14 > 0 )
            memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
          v15 = (_DWORD *)(*v10 + 4 * v11);
          if ( v15 )
            *v15 = v6;
        }
      }
    }
  }
}
