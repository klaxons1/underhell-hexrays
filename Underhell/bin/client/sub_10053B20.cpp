int __usercall sub_10053B20@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7, char a8, int *a9)
{
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  int (__thiscall *v13)(int); // edx
  int v14; // eax
  double v15; // st7
  double v16; // st6
  int v17; // ebx
  int v18; // ecx
  int *v19; // eax
  int v23; // [esp+8h] [ebp-1Ch]
  int v24; // [esp+Ch] [ebp-18h]
  int v25; // [esp+10h] [ebp-14h]
  int v26; // [esp+14h] [ebp-10h]
  int v27; // [esp+18h] [ebp-Ch]
  int v28; // [esp+18h] [ebp-Ch]
  int v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+20h] [ebp-4h]
  int v32; // [esp+20h] [ebp-4h]
  int v33; // [esp+30h] [ebp+Ch]

  v23 = a5;
  v25 = a7;
  v24 = a6;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v10 = v9;
  if ( v9 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  v11 = sub_101163A0(a3);
  (*(void (__thiscall **)(int, int *, int *, int, int))(*(_DWORD *)v10 + 32))(v10, &a5, &a6, a2, a1);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v13 = *(int (__thiscall **)(int))(*(_DWORD *)v11 + 16);
  a7 = v12;
  v14 = v13(v11);
  v26 = a4;
  v27 = v23;
  v33 = v14;
  v29 = v24;
  v31 = v25;
  if ( !a8 && (a5 > v12 || a6 > v14) )
  {
    v15 = (double)a7 / (double)a5;
    v16 = (double)v14 / (double)a6;
    v17 = (int)((double)a4 * v15);
    v28 = (int)((double)v23 * v16);
    v30 = (int)(v15 * (double)v24);
    v32 = (int)(v16 * (double)v25);
    if ( v17 <= a7 )
      v18 = v17 < 0 ? 0 : v17;
    else
      v18 = a7;
    v26 = v18;
    if ( v28 <= v14 )
      v14 = v28 < 0 ? 0 : v28;
    v27 = v14;
    if ( v30 <= a7 - v18 )
      v29 = v30 < 0 ? 0 : v30;
    else
      v29 = a7 - v18;
    if ( v32 <= v33 - v14 )
      v31 = v32 < 0 ? 0 : v32;
    else
      v31 = v33 - v14;
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 444))(v10, v11, 0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 72))(v10, v11, a3);
  v19 = a9;
  if ( a9 )
  {
    *a9 = v26;
    v19[1] = v27;
    v19[2] = v29;
    v19[3] = v31;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
}
