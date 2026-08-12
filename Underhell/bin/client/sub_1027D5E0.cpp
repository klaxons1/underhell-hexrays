int __usercall sub_1027D5E0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int result; // eax
  char v5; // al
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebp
  void (__thiscall *v9)(int *, int); // edx
  int v10; // edi
  int v11; // edx
  unsigned __int16 *v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // [esp+30h] [ebp-28h]
  int v19; // [esp+34h] [ebp-24h]
  unsigned __int16 *i; // [esp+38h] [ebp-20h]
  int v21; // [esp+3Ch] [ebp-1Ch]
  int v22; // [esp+40h] [ebp-18h]
  int v23; // [esp+44h] [ebp-14h] BYREF
  int v24; // [esp+48h] [ebp-10h] BYREF
  int v25; // [esp+4Ch] [ebp-Ch] BYREF
  char v26[4]; // [esp+50h] [ebp-8h] BYREF
  char v27[4]; // [esp+54h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(int *, char *, char *))(*a1 + 12))(a1, v27, v26);
  if ( a1[6] )
  {
    result = (*(int (__thiscall **)(int *))(*a1 + 132))(a1);
    if ( result )
    {
      v5 = *((_BYTE *)a1 + 52);
      if ( (v5 & 1) != 0 )
      {
        if ( (v5 & 2) != 0 || *((_BYTE *)a1 + 76) )
          sub_1027D430(a1);
        sub_1027CEA0((int)a1, a2, a3);
      }
      v6 = *a1;
      v7 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*a1 + 36))(a1, &v25);
      (*(void (__thiscall **)(int *, _DWORD))(v6 + 72))(a1, *v7);
      v8 = (*(int (__thiscall **)(int *))(*a1 + 132))(a1);
      v9 = *(void (__thiscall **)(int *, int))(*a1 + 64);
      v25 = v8;
      v9(a1, v8);
      v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v8);
      v10 = 0;
      v18 = 0;
      v19 = 0;
      (*(void (__thiscall **)(int *, int *, int *))(*a1 + 28))(a1, &v24, &v23);
      v11 = 0;
      v22 = 0;
      if ( a1[23] )
        v10 = *(_DWORD *)a1[20];
      v12 = (unsigned __int16 *)a1[6];
      result = *v12;
      for ( i = v12; (_WORD)result; i = v12 )
      {
        v13 = (unsigned __int16)result;
        if ( (_WORD)result != 13 )
        {
          if ( (_WORD)result == 10 )
          {
            v14 = ++v19;
            if ( v19 >= a1[23] )
              v10 = 0;
            else
              v10 = *(_DWORD *)(a1[20] + 4 * v14);
            v18 += v21;
            goto LABEL_28;
          }
          if ( (_WORD)result == 38 )
          {
            if ( v12[1] != 38 )
              goto LABEL_28;
            i = ++v12;
          }
          if ( v12 == (unsigned __int16 *)a1[12] )
          {
            v17 = 3;
            do
            {
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
                dword_1047CA6C,
                v10 + v24,
                v18 + v23);
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, 46, 0);
              result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v8, 46);
              v10 += result;
              --v17;
            }
            while ( v17 );
            return result;
          }
          if ( v11 != a1[17] && v12 == *(unsigned __int16 **)(a1[14] + 4 * v11) )
          {
            v15 = ++v19;
            if ( v19 >= a1[23] )
              v10 = 0;
            else
              v10 = *(_DWORD *)(a1[20] + 4 * v15);
            v18 += v21;
            v22 = v11 + 1;
          }
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v10 + v24, v18 + v23);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, v13, 0);
          v8 = v25;
          v16 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                  dword_1047CA6C,
                  v25,
                  (unsigned __int16)v13);
          v12 = i;
          v11 = v22;
          v10 += v16;
        }
LABEL_28:
        result = v12[1];
        ++v12;
      }
    }
  }
  return result;
}
