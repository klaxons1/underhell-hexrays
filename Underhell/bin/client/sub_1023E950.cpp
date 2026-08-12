void __usercall sub_1023E950(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  void (__thiscall *v12)(_DWORD *, int *, int, int); // edx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int (__thiscall ***v16)(void *, int, int); // esi
  int v17; // eax
  int v18; // ebp
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  float v26; // [esp+28h] [ebp-1Ch]
  int v27; // [esp+2Ch] [ebp-18h]
  int v28; // [esp+30h] [ebp-14h] BYREF
  _DWORD v29[4]; // [esp+34h] [ebp-10h] BYREF

  v4 = (_BYTE *)a1[9];
  if ( *v4 && v4[1] && v4[2] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 70) )
    {
      (*(void (__thiscall **)(_DWORD *))(*a1 + 676))(a1);
      (*(void (__thiscall **)(_DWORD *, int, int, int))(*a1 + 680))(a1, 1, -1, 1);
    }
    else if ( sub_10239430((_DWORD *)(a1[9] + 72)) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107) )
      {
        v5 = sub_102393B0((_DWORD *)(a1[9] + 72));
        v6 = dword_1047CA6C;
        v7 = *(_DWORD *)dword_1047CA6C;
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 648))(v5, a1[9] + 24);
        (*(void (__thiscall **)(int, int))(v7 + 200))(v6, v8);
        if ( !*(_BYTE *)(a1[9] + 80) )
        {
          v9 = a1[9];
          v26 = (double)((*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80)
                       - *(_DWORD *)(v9 + 76))
              * 0.001;
          v10 = sub_102393B0((_DWORD *)(v9 + 72));
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 600))(v10);
          if ( 0.0 != *(float *)(v11 + 68) && *(float *)(v11 + 68) <= (double)v26 )
          {
            *(_BYTE *)(a1[9] + 80) = 1;
            v12 = *(void (__thiscall **)(_DWORD *, int *, int, int))(*a1 + 688);
            v28 = 0;
            memset(v29, 0, sizeof(v29));
            v12(a1, &v28, a3, a2);
            (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, v29, &v28);
            if ( sub_102393B0((_DWORD *)(a1[9] + 84)) )
            {
              v13 = sub_102393B0((_DWORD *)(a1[9] + 84));
              if ( v13 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 120))(v13, 1);
            }
            v14 = sub_100DDA40(392);
            if ( v14 )
            {
              v15 = sub_10237C80((_DWORD *)(a1[9] + 72));
              v16 = (int (__thiscall ***)(void *, int, int))sub_1026D6B0(v14, v15, "DropContext");
            }
            else
            {
              v16 = 0;
            }
            v17 = sub_102393B0((_DWORD *)(a1[9] + 72));
            if ( (*(unsigned __int8 (__thiscall **)(int, int (__thiscall ***)(void *, int, int)))(*(_DWORD *)v17 + 588))(
                   v17,
                   v16) )
            {
              sub_102393F0((_DWORD *)(a1[9] + 84), (int (__thiscall ***)(_DWORD))v16);
              sub_10236140(v16, v28, v27);
              ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v16)[31])(v16, 1);
              sub_10237000((int (__thiscall ***)(void *, _DWORD, int, int, int, int))v16, 1, 0);
              v18 = dword_1047CA6C;
              v19 = *(_DWORD *)dword_1047CA6C;
              v20 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))**v16)(v16);
              (*(void (__thiscall **)(int, int))(v19 + 328))(v18, v20);
              if ( ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*v16)[233])(v16) > 0 )
              {
                v21 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v16)[234])(v16, 0);
                sub_1026C340(v21);
                v22 = sub_1026B780(v21);
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 908))(v22, 1);
              }
            }
            else if ( v16 )
            {
              ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v16)[30])(v16, 1);
            }
            v23 = sub_102393B0((_DWORD *)(a1[9] + 72));
            (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v23 + 592))(v23, v29);
            sub_1011A810(&v28);
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 676))(a1);
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*a1 + 680))(a1, 1, -1, 0);
      }
    }
  }
}
