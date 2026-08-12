void __usercall sub_10248DE0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  void (__thiscall **v5)(_DWORD, _DWORD); // edi
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // [esp+44h] [ebp-10h] BYREF
  int v10; // [esp+48h] [ebp-Ch] BYREF
  int v11; // [esp+4Ch] [ebp-8h] BYREF
  int v12; // [esp+50h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+54h] [ebp+0h] BYREF

  if ( *(_BYTE *)(a1 + 231) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v9, (int)&v10);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *(_DWORD *)(a1 + 228));
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      0,
      0,
      v9,
      v10);
  }
  if ( *(_DWORD *)(a1 + 208) )
  {
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      255,
      255,
      255);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 208) + 4))(*(_DWORD *)(a1 + 208), 0, 0);
    if ( *(_BYTE *)(a1 + 220) )
    {
      (*(void (__thiscall **)(_DWORD, int *, int *, int, int))(**(_DWORD **)(a1 + 208) + 12))(
        *(_DWORD *)(a1 + 208),
        &v10,
        &v9,
        a3,
        a2);
      if ( *(float *)(a1 + 224) <= 0.0 )
      {
        sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&a4, (int)&retaddr);
        (*(void (__cdecl **)(int))(**(_DWORD **)(a1 + 208) + 16))(a4);
      }
      else
      {
        (*(void (__cdecl **)(int))(**(_DWORD **)(a1 + 208) + 16))((int)((double)v12 * *(float *)(a1 + 224)));
      }
      v5 = (void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 208) + 20);
      v6 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 780))(a1, &v12);
      (*v5)(*(_DWORD *)(a1 + 208), *v6);
      (***(void (__thiscall ****)(_DWORD))(a1 + 208))(*(_DWORD *)(a1 + 208));
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 208) + 16))(*(_DWORD *)(a1 + 208), v10, v9);
    }
    else if ( *(_BYTE *)(a1 + 221) || *(_BYTE *)(a1 + 222) || *(_BYTE *)(a1 + 223) )
    {
      sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v10, (int)&v9);
      (*(void (__thiscall **)(_DWORD, int *, int *, int, int))(**(_DWORD **)(a1 + 208) + 12))(
        *(_DWORD *)(a1 + 208),
        &v12,
        &v11,
        a3,
        a2);
      v7 = 0;
      if ( v11 > 0 )
      {
        do
        {
          v8 = 0;
          if ( v12 > 0 )
          {
            do
            {
              (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 208) + 4))(*(_DWORD *)(a1 + 208), v8, v7);
              (***(void (__thiscall ****)(_DWORD))(a1 + 208))(*(_DWORD *)(a1 + 208));
              v8 += a4;
            }
            while ( *(_BYTE *)(a1 + 222) && v8 < v12 );
          }
          v7 += (int)retaddr;
        }
        while ( *(_BYTE *)(a1 + 223) && v7 < v11 );
      }
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 208) + 4))(*(_DWORD *)(a1 + 208), 0, 0);
    }
    else
    {
      (***(void (__thiscall ****)(_DWORD))(a1 + 208))(*(_DWORD *)(a1 + 208));
    }
  }
}
