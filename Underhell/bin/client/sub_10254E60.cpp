void __usercall sub_10254E60(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  int (__thiscall ***v5)(void *, int *, _BYTE *); // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // [esp+8h] [ebp-20h]
  int v19; // [esp+10h] [ebp-18h] BYREF
  _BYTE v20[4]; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h] BYREF
  int v22; // [esp+1Ch] [ebp-Ch] BYREF
  int v23; // [esp+20h] [ebp-8h] BYREF
  int v24; // [esp+24h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h]

  if ( *(_DWORD *)(a1 + 344) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v19, (int)v20);
    (*(void (__thiscall **)(int, int *, int *, int *, int *, int, int))(*(_DWORD *)a1 + 24))(
      a1,
      &v24,
      &v21,
      &v22,
      &v23,
      a4,
      a2);
    v5 = *(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 344);
    v21 -= v23;
    v6 = sub_102374C0(v5);
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 344), v21 - v6, 0);
    v18 = v22 - v24 - (_DWORD)retaddr;
    v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 344));
    sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 344), v7, v18);
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(a1 + 332));
    v9 = *(_DWORD *)(a1 + 272);
    v10 = **(_DWORD **)(a1 + 344);
    v11 = v22 / (v8 + 1);
    if ( v9 > v11 )
    {
      (*(void (__stdcall **)(_DWORD, int, int))(v10 + 776))(0, v9, a3);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 344) + 784))(*(_DWORD *)(a1 + 344), v11);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 344) + 200))(*(_DWORD *)(a1 + 344), 1);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 344) + 816))(*(_DWORD *)(a1 + 344), 1);
      v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 344) + 772))(*(_DWORD *)(a1 + 344));
      v13 = v11 + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 344) + 772))(*(_DWORD *)(a1 + 344));
      if ( sub_10254130(a1) >= v12 )
      {
        if ( sub_10254130(v14) >= v13 )
        {
          v17 = sub_10254130(v16);
          if ( v17 >= v13 )
            v13 = v17 + 1;
          v12 = v13 - v11;
        }
      }
      else
      {
        v15 = sub_10254130(v14);
        if ( v15 < v12 )
          v12 = v15;
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 344) + 768))(*(_DWORD *)(a1 + 344), v12);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 344) + 244))(*(_DWORD *)(a1 + 344), 0, 0);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 344) + 16))(*(_DWORD *)(a1 + 344));
    }
    else
    {
      (*(void (__stdcall **)(_DWORD))(v10 + 200))(0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 344) + 776))(*(_DWORD *)(a1 + 344), 0, v9);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 344) + 784))(*(_DWORD *)(a1 + 344), v9);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 344) + 768))(*(_DWORD *)(a1 + 344), 0);
    }
  }
}
