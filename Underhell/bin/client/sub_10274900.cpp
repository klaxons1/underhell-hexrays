int __usercall sub_10274900@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edi
  int v12; // edi
  int v13; // ecx
  bool v16; // [esp+1Eh] [ebp-32h]
  bool v17; // [esp+1Fh] [ebp-31h]
  int v18; // [esp+20h] [ebp-30h] BYREF
  int v19; // [esp+24h] [ebp-2Ch] BYREF
  int v20; // [esp+28h] [ebp-28h] BYREF
  int v21; // [esp+2Ch] [ebp-24h] BYREF
  int v22; // [esp+30h] [ebp-20h]
  int v23; // [esp+34h] [ebp-1Ch] BYREF
  int v24; // [esp+38h] [ebp-18h]
  int v25; // [esp+3Ch] [ebp-14h]
  int v26; // [esp+40h] [ebp-10h] BYREF
  int v27; // [esp+44h] [ebp-Ch] BYREF
  int v28; // [esp+48h] [ebp-8h] BYREF
  int v29; // [esp+4Ch] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v20, (int)&v21);
  if ( !*(_DWORD *)(a1 + 264) )
    return sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 296), v20, v21);
  if ( *(_BYTE *)(a1 + 305) )
  {
    v18 = 0;
    v27 = 0;
  }
  else
  {
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))(a1 + 248), (int)&v27, (int)&v18);
  }
  if ( *(_BYTE *)(a1 + 304) )
  {
    v28 = 0;
    v19 = 0;
  }
  else
  {
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))(a1 + 252), (int)&v19, (int)&v28);
  }
  v5 = v21;
  v6 = *(_DWORD *)(a1 + 256);
  v16 = 0;
  v7 = v21 / v6;
  v23 = sub_10273E60(*(_DWORD *)(a1 + 264));
  v9 = *(_DWORD *)(v8 + 248) + 10;
  v24 = v9;
  v17 = v23 > v7;
  if ( v23 > v7 )
  {
    v10 = v20 - v19 - 2;
    v16 = v24 > v10;
    if ( v24 > v10 )
      v7 = (v5 - v18) / v6;
  }
  else if ( v9 > v20 )
  {
    v16 = 1;
    v7 = (v5 - v18) / v6;
    v17 = v23 > v7;
  }
  v25 = v20;
  v22 = v5;
  v26 = 0;
  if ( v17 )
  {
    v25 = v20 - v19 - 2;
    if ( v16 )
      v5 -= v18;
    (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a1 + 252) + 124))(*(_DWORD *)(a1 + 252), 1, a3, a2);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 252) + 200))(*(_DWORD *)(a1 + 252), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 252) + 784))(*(_DWORD *)(a1 + 252), v7);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 252) + 776))(*(_DWORD *)(a1 + 252), 0, v25);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 252) + 816))(*(_DWORD *)(a1 + 252), 1);
    if ( !*(_BYTE *)(a1 + 304) )
    {
      sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 252), v22 - v21 - 2, 0);
      sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 252), v21, v5 - 2);
    }
    v28 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 252) + 772))(*(_DWORD *)(a1 + 252));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 252) + 124))(*(_DWORD *)(a1 + 252), 0, a3, a2);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 252) + 768))(*(_DWORD *)(a1 + 252), 0);
  }
  v11 = 0;
  if ( BYTE2(v19) )
  {
    v12 = v22;
    v24 += -2 - v20;
    if ( HIBYTE(v19) )
      v12 = v22 - v21;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 248) + 124))(*(_DWORD *)(a1 + 248), 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 248) + 200))(*(_DWORD *)(a1 + 248), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 248) + 784))(*(_DWORD *)(a1 + 248), v12);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 248) + 776))(*(_DWORD *)(a1 + 248), 0, v24);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 248) + 816))(*(_DWORD *)(a1 + 248), 10);
    if ( !*(_BYTE *)(a1 + 305) )
    {
      sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 248), 0, v21 - v18 - 2);
      sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 248), v12 - 2, v18);
    }
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 248) + 772))(*(_DWORD *)(a1 + 248));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 248) + 124))(*(_DWORD *)(a1 + 248), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 248) + 768))(*(_DWORD *)(a1 + 248), 0);
  }
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 296), v25, v22);
  v13 = *(_DWORD *)(a1 + 264);
  v29 = 0;
  sub_10274320(v13, &v26, &v23, -v11, &v29);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
}
