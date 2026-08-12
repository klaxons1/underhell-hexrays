int __userpurge sub_100A2D80@<eax>(int a1@<ecx>, char *a2@<edi>, _WORD *a3, int a4)
{
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ebx
  int v7; // esi
  double v8; // st7
  int v9; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // edi
  _DWORD *v15; // [esp+4h] [ebp-24h] BYREF
  int v16; // [esp+8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  _DWORD *v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  float v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v4 = *(__int16 *)(a1 + 78);
  v22 = 0.001;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v21 = a1;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = v4;
  v23 = 0;
  if ( v4 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v8 = sub_100A2C40(a1, a2, a3, v5, a4);
    if ( v22 <= v8 )
    {
      if ( v8 != v22 )
      {
        v7 = 0;
        v22 = v8;
        v18 = 0;
      }
      v9 = v7;
      if ( v7 + 1 > v16 )
      {
        sub_102ABFC0(v7 - v16 + 1);
        v7 = v18;
        v6 = v15;
      }
      v18 = ++v7;
      v19 = v6;
      if ( v7 - v9 - 1 > 0 )
        memcpy(&v6[v9 + 1], &v6[v9], 4 * (v7 - v9 - 1));
      a2 = (char *)&v6[v9];
      if ( a2 )
        *(_DWORD *)a2 = v23;
    }
    v5 = v23 + 1;
    v23 = v5;
    if ( v5 >= v20 )
      break;
    a1 = v21;
  }
  if ( v7 > 0 )
  {
    if ( v7 == 1 )
    {
      v11 = *v6;
      sub_102375F0(&v15);
      return v11;
    }
    else
    {
      v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v7 - 1);
      v13 = v12;
      if ( (_BYTE)a4 )
        DevMsg("Found %i matching rules, selecting slot %i\n", v7, v12);
      v14 = v6[v13];
      sub_102375F0(&v15);
      return v14;
    }
  }
  else
  {
LABEL_15:
    if ( v17 >= 0 )
    {
      if ( v6 )
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
    }
    return -1;
  }
}
